/*
 * XREFs of _IsNonImmersiveBand@4 @ 0x2D3DC
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z @ 0x150D2 (-xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z.c)
 *     _xxxEnableWindow@8 @ 0x18A3C (_xxxEnableWindow@8.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1965E (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1A052 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z @ 0x2B0B4 (-InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _IsImmersiveBandOrShellManaged@4 @ 0xADBB0 (_IsImmersiveBandOrShellManaged@4.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     ?_GhostWindow@@YGHPAUtagWND@@@Z @ 0xC1FAA (-_GhostWindow@@YGHPAUtagWND@@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YGHPAUtagWND@@@Z @ 0xC2514 (-_GhostOwnerWindowAndOwnees@@YGHPAUtagWND@@@Z.c)
 *     _SnapshotWindowRects@8 @ 0x145D44 (_SnapshotWindowRects@8.c)
 *     _xxxMetricsRecalc@28 @ 0x145FE4 (_xxxMetricsRecalc@28.c)
 *     _xxxRestoreMonitorsAndWindowsRects@8 @ 0x146391 (_xxxRestoreMonitorsAndWindowsRects@8.c)
 *     _xxxDestroyCorrespondingGhostWindow@4 @ 0x170530 (_xxxDestroyCorrespondingGhostWindow@4.c)
 *     ?WindowArrangementApplicable@@YGHPAUtagWND@@@Z @ 0x1857B4 (-WindowArrangementApplicable@@YGHPAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsNonImmersiveBand(_DWORD *this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this[5] + 148);
  return v1 == 1 || v1 == 16 || v1 == 2;
}
