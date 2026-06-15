/*
 * XREFs of PbmPlayToStreamStateChanged @ 0x180029540
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAU_PlayToStreamStateChangedContext@@@Z0@Z @ 0x180029C64 (--$QueueApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmPlayToStreamStateChanged(void *a1, int a2)
{
  int Process; // edi
  HANDLE ProcessHeap; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rbx
  struct CProcess *v7; // rax
  volatile signed __int32 *v8; // rsi
  struct CProcess *v9; // rbx
  struct CProcess *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  Process = 0;
  if ( a2 <= 1 )
  {
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v11);
      if ( Process >= 0 )
      {
        ProcessHeap = GetProcessHeap();
        v6 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
        if ( v6 )
        {
          v7 = v11;
          *(_QWORD *)v6 = v11;
          v6[2] = a2;
          _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
        }
        else
        {
          v6 = 0LL;
        }
        if ( v6 )
        {
          Process = QueueApplicationManagerWorkItem<_PlayToStreamStateChangedContext>(v5, v6);
          if ( Process >= 0 )
            v6 = 0LL;
        }
        else
        {
          Process = -2147024882;
        }
        if ( v6 )
        {
          v8 = *(volatile signed __int32 **)v6;
          if ( *(_QWORD *)v6 )
          {
            if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 32LL))(v8);
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
            }
            *(_QWORD *)v6 = 0LL;
          }
          operator delete(v6, (const struct std::nothrow_t *)0x10);
        }
      }
      v9 = v11;
      if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v9 + 32LL))(v9);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)Process;
}
