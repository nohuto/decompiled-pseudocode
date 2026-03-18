/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z @ 0x5A290
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z.c)
 *     _TrapAppContainerRenderingWrap@16 @ 0x5A26C (_TrapAppContainerRenderingWrap@16.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?vClearRendering@DC@@QAEXXZ @ 0x5FB80 (-vClearRendering@DC@@QAEXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QAE@XZ @ 0xAB032 (--0DCVISRGNSHARELOCK@@QAE@XZ.c)
 */

char __userpurge TrapAppContainerRenderingWorker@<al>(
        _DWORD *a1@<edx>,
        DC **a2@<ecx>,
        struct XDCOBJ *a3,
        HSURF *a4,
        HSURF *a5,
        unsigned int *a6)
{
  char v6; // bl
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int *v11; // eax
  int v12; // esi
  DC *v13; // esi
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // edi
  struct SURFACE *v18; // esi
  DC *v19; // edx
  int v20; // esi
  int v21; // edx
  int CompatibleBitmapInternal; // ecx
  DC *v23; // eax
  int v24; // eax
  int v25; // edx
  int *v28; // [esp+18h] [ebp-8h]
  int v29; // [esp+18h] [ebp-8h]
  int v30; // [esp+18h] [ebp-8h]
  char v31; // [esp+1Eh] [ebp-2h] BYREF
  char v32; // [esp+1Fh] [ebp-1h] BYREF

  v6 = 0;
  *a1 = 0;
  if ( !UserIsCurrentProcessImmersiveAppContainer() )
    return 1;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    if ( (*(_BYTE *)(ThreadWin32Thread + 180) & 8) != 0 )
      return 1;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v32);
  v11 = (int *)*((_DWORD *)*a2 + 126);
  v28 = v11;
  if ( !v11
    || (v12 = v11[112], v12 == PsGetCurrentProcess()) && v28[18] >= 0
    || (v13 = *a2, *((_DWORD *)*a2 + 122))
    && *((_DWORD *)v13 + 124)
    && !*((_DWORD *)v13 + 125)
    && (v20 = *((_DWORD *)v13 + 123), PsGetCurrentProcess() == v20) )
  {
    v6 = 1;
  }
  else
  {
    if ( (*((_DWORD *)*a2 + 6) & 0x200) != 0 )
    {
      v32 = 0;
      if ( !GreGetLockCount() && !GreIsSemaphoreOwnedOrSharedByCurrentThread(_ghsemGreLock) )
      {
        GreAcquireSemaphore(_ghsemGreLock);
        v32 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v31);
      DC::vSetRendering(*a2);
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)*a2, v28[8], v28[9], 0, 0, 0);
      v23 = *a2;
      v30 = CompatibleBitmapInternal;
      if ( !CompatibleBitmapInternal )
      {
        DC::vClearRendering(v23);
        if ( v32 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
          GreReleaseSemaphoreInternal(_ghsemGreLock);
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
        goto LABEL_9;
      }
      LOBYTE(v21) = 5;
      v24 = HmgShareLock(**((_DWORD **)v23 + 126), v21);
      LOBYTE(v25) = 5;
      v17 = v24;
      v18 = (struct SURFACE *)HmgShareLock(v30, v25);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
      if ( v32 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
        GreReleaseSemaphoreInternal(_ghsemGreLock);
      }
      goto LABEL_14;
    }
    v29 = GreCreateCompatibleBitmapInternal(*(HDC *)*a2, v28[8], v28[9], 0, 0, 0);
    if ( v29 )
    {
      LOBYTE(v14) = 5;
      v15 = HmgShareLock(**((_DWORD **)*a2 + 126), v14);
      LOBYTE(v16) = 5;
      v17 = v15;
      v18 = (struct SURFACE *)HmgShareLock(v29, v16);
LABEL_14:
      *a1 = *(_DWORD *)v17;
      *(_DWORD *)a3 = *(_DWORD *)v18;
      INC_SHARE_REF_CNT(v17);
      v19 = *a2;
      if ( (*((_DWORD *)*a2 + 6) & 0x4000) != 0 && (*(_DWORD *)(v17 + 156) || (*(_BYTE *)(v17 + 76) & 1) != 0) )
      {
        ++*((_DWORD *)v18 + 52);
        v19 = *a2;
      }
      *((_DWORD *)v19 + 127) = *a1;
      DC::pSurface(*a2, v18);
      INC_SHARE_REF_CNT(v18);
      if ( a4 )
      {
        *a4 = (HSURF)(*((_DWORD *)*a2 + 6) & 0xE0);
        *((_DWORD *)*a2 + 6) &= 0xFFFFFF1F;
      }
      GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
      v6 = 1;
      DEC_SHARE_REF_CNT(v18);
      DEC_SHARE_REF_CNT(v17);
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v6;
}
