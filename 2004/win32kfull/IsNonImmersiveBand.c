/*
 * XREFs of IsNonImmersiveBand @ 0x1C0022AB4
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0003798 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C000394C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00039D0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxEnableWindow @ 0x1C0021E90 (xxxEnableWindow.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C002AA5C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C002FDD8 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C002FFBC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006C710 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C0121EE4 (IsImmersiveBandOrShellManaged.c)
 *     SnapshotWindowRects @ 0x1C01D7EF8 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01D8204 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D862C (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C02245AC (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
