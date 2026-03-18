/*
 * XREFs of GreCancelSynchronizedWindowResize @ 0x1C026FFC0
 * Callers:
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C020CAC0 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C001FB78 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026E6AC (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

void __fastcall GreCancelSynchronizedWindowResize(HWND a1)
{
  __int64 v2; // r9
  struct DWMSPRITE *v3; // rbx
  struct DWMSPRITE *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v4, a1);
    v3 = v4;
    if ( v4 )
    {
      if ( *((int *)v4 + 29) >= 1 )
      {
        CheckAndProcessWindowResizeComplete(v4, 1, 0LL, v2);
        *((_DWORD *)v3 + 38) = 1;
      }
      _InterlockedDecrement((volatile signed __int32 *)v3 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}
