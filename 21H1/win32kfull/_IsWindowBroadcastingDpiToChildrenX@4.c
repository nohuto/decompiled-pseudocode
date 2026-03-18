/*
 * XREFs of _IsWindowBroadcastingDpiToChildrenX@4 @ 0x9B752
 * Callers:
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _NtUserIsWindowBroadcastingDpiToChildren@4 @ 0x9B6E6 (_NtUserIsWindowBroadcastingDpiToChildren@4.c)
 *     _xxxAppAdjustDpiCandidateRect@16 @ 0x151E6B (_xxxAppAdjustDpiCandidateRect@16.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 */

BOOL __thiscall IsWindowBroadcastingDpiToChildrenX(_DWORD *this)
{
  int v1; // esi

  v1 = this[5];
  return (*(_DWORD *)(v1 + 184) & 0xF) == 2 && _IsTopLevelWindow(this) && (*(_DWORD *)(v1 + 144) & 0x20000000) != 0;
}
