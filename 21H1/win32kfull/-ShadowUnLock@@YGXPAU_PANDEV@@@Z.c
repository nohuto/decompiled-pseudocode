/*
 * XREFs of ?ShadowUnLock@@YGXPAU_PANDEV@@@Z @ 0x1F6AAB
 * Callers:
 *     ?PanUnlockDisplayArea@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z @ 0x1F69C2 (-PanUnlockDisplayArea@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z.c)
 *     ?vUnLockShadow@PANSURFLOCK@@QAEXXZ @ 0x1F758D (-vUnLockShadow@PANSURFLOCK@@QAEXXZ.c)
 *     ?vUnLockShadowR@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F761D (-vUnLockShadowR@MULTIPANSURFLOCK@@QAEXXZ.c)
 *     ?vUnLockShadowW@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F7673 (-vUnLockShadowW@MULTIPANSURFLOCK@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall ShadowUnLock(_DWORD *this)
{
  int v2; // eax
  LONG v3; // ecx

  KeWaitForSingleObject((PVOID)(this[104] + 20), UserRequest, 0, 0, 0);
  v2 = this[104];
  v3 = *(_DWORD *)(v2 + 52);
  if ( v3 )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)v2, 0, v3, 0);
    *(_DWORD *)(this[104] + 52) = 0;
    v2 = this[104];
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 20), 0);
}
