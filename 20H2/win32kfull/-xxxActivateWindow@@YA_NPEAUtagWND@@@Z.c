/*
 * XREFs of ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C002B5A4
 * Callers:
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C002B4F4 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0221F50 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x1C0237860 (xxxMNCloseHierarchy.c)
 * Callees:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

__int64 __fastcall xxxActivateWindow(struct tagWND *a1)
{
  return xxxActivateWindowWithOptions(a1, 0LL, 0LL, 1LL);
}
