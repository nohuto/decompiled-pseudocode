/*
 * XREFs of _HasImmersiveAppRight@4 @ 0x7C7B4
 * Callers:
 *     _NtUserSetWindowCompositionAttribute@8 @ 0x25CE6 (_NtUserSetWindowCompositionAttribute@8.c)
 *     _IsValidBandForProcess@12 @ 0x2A442 (_IsValidBandForProcess@12.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _IsImmersiveAppIORestricted@4 @ 0x7C2DE (_IsImmersiveAppIORestricted@4.c)
 *     _SetAppCompatFlags@4 @ 0x7C302 (_SetAppCompatFlags@4.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _SnapshotWindowRects@8 @ 0x145D44 (_SnapshotWindowRects@8.c)
 *     _xxxMetricsRecalc@28 @ 0x145FE4 (_xxxMetricsRecalc@28.c)
 *     _xxxRestoreMonitorsAndWindowsRects@8 @ 0x146391 (_xxxRestoreMonitorsAndWindowsRects@8.c)
 *     _NtUserSetTargetForResourceBrokering@8 @ 0x169D60 (_NtUserSetTargetForResourceBrokering@8.c)
 *     __EnableModernAppWindowKeyboardIntercept@8 @ 0x16D736 (__EnableModernAppWindowKeyboardIntercept@8.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall HasImmersiveAppRight(_DWORD *this)
{
  return (this[116] & 0x30) == 16;
}
