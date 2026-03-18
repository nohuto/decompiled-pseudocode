/*
 * XREFs of ?UninitializeThread@UmfdHostLifeTimeManager@@SGXXZ @ 0xCFF72
 * Callers:
 *     ?UmfdEscHostUnhandledException@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xCFF6C (-UmfdEscHostUnhandledException@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 *     ?Uninitialize@UmfdTls@@SGXXZ @ 0xD0004 (-Uninitialize@UmfdTls@@SGXXZ.c)
 *     ?UmfdCancelServerOutstandingRequests@@YGJPAX@Z @ 0xD0082 (-UmfdCancelServerOutstandingRequests@@YGJPAX@Z.c)
 */

void __usercall UmfdHostLifeTimeManager::UninitializeThread(int a1@<ecx>, void *a2@<esi>)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct UmfdTls *v4; // eax
  unsigned int v5; // edi
  void **v6; // edi
  int *v7; // esi
  int v8; // eax
  int v10; // [esp+0h] [ebp-4h] BYREF

  v10 = a1;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 200) )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v10, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
    UmfdHostLifeTimeManager::s_Ready = 0;
    if ( v10 )
    {
      ExReleasePushLockExclusiveEx(v10, 0);
      KeLeaveCriticalRegion();
    }
    v4 = UmfdTls::EnsureTls();
    v5 = *((_DWORD *)v4 + 1);
    if ( v5 > 3 )
      v6 = 0;
    else
      v6 = (&g_pUmfdServerPort)[v5];
    if ( v6 )
    {
      v7 = (int *)*((_DWORD *)v4 + 2);
      if ( v7 )
      {
        v8 = *v7;
        if ( *v7 )
        {
          *(_DWORD *)(v8 + 4) = 4;
          KeSetEvent(**(PRKEVENT **)(*(_DWORD *)(v8 + 20) + 4), 1, 0);
          *v7 = 0;
        }
        EngFreeMem(v7);
      }
      UmfdCancelServerOutstandingRequests(a2);
    }
    UmfdTls::Uninitialize();
  }
}
