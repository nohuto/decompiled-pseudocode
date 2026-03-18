/*
 * XREFs of _GreCancelSynchronizedWindowResize@4 @ 0x1CDE96
 * Callers:
 *     ?ResizeTimerFunc@@YGXPAUtagWND@@IIJ@Z @ 0x172059 (-ResizeTimerFunc@@YGXPAUtagWND@@IIJ@Z.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 */

void __thiscall GreCancelSynchronizedWindowResize(void *this)
{
  int *v2; // esi
  int v3; // eax
  int v4; // edx
  int *v5; // eax
  int v6; // [esp+0h] [ebp-Ch]
  int *v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    v2 = 0;
    v3 = DWMALTSPRITEREF::hspLookupWindow(this);
    if ( v3 )
    {
      LOBYTE(v4) = 15;
      v5 = (int *)HmgLock(v3, v4);
      v2 = v5;
      if ( !v5 )
      {
LABEL_8:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
        GreReleaseSemaphoreInternal(_ghsemDwmState);
        goto LABEL_9;
      }
      if ( v5[19] >= 1 )
      {
        CheckAndProcessWindowResizeComplete(1, v5, (struct DWMSPRITE *)1, 0, v6, v7);
        v2[28] = 1;
      }
    }
    if ( v2 )
      _InterlockedDecrement(v2 + 2);
    goto LABEL_8;
  }
LABEL_9:
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
}
