/*
 * XREFs of ?ShadowUnLockWait@@YGXPAU_PANDEV@@@Z @ 0x1F6AFC
 * Callers:
 *     ?PanLockDisplayArea@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z @ 0x1F5FFA (-PanLockDisplayArea@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QAEHPAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F6C15 (-bTryLockShadowR@MULTIPANSURFLOCK@@QAEHPAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 *     ?vUnLockShadowAndWait@PANSURFLOCK@@QAEXXZ @ 0x1F75D5 (-vUnLockShadowAndWait@PANSURFLOCK@@QAEXXZ.c)
 *     ?vUnLockShadowWAndWait@MULTIPANSURFLOCK@@QAEXXZ @ 0x1F76C9 (-vUnLockShadowWAndWait@MULTIPANSURFLOCK@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall ShadowUnLockWait(PVOID *this)
{
  ++*((_DWORD *)this[104] + 13);
  KeReleaseMutex((PRKMUTEX)((char *)this[104] + 20), 0);
  KeWaitForSingleObject(this[104], UserRequest, 0, 0, 0);
}
