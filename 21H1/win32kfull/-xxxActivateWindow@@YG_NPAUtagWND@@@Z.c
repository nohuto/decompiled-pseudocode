/*
 * XREFs of ?xxxActivateWindow@@YG_NPAUtagWND@@@Z @ 0x1A2B0
 * Callers:
 *     ?xxxSwpActivate@@YGHPAUtagWND@@@Z @ 0x1A230 (-xxxSwpActivate@@YGHPAUtagWND@@@Z.c)
 *     ?xxxSetActiveWindow@@YGPAUtagWND@@PAU1@@Z @ 0xAB8FC (-xxxSetActiveWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     _xxxMNEndMenuStateInternal@8 @ 0x1848C0 (_xxxMNEndMenuStateInternal@8.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 */

int __thiscall xxxActivateWindow(void *this)
{
  return xxxActivateWindowWithOptions(this, 0, 0, 1);
}
