/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800809C4
 * Callers:
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x1800054C8 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000ECD0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000F0A0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18000F270 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180017038 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180017BF0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18002ABA0 (-CloneVisualTree@UdwmTopVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x180045A80 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x18004B364 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowSWRVisual@@@Z @ 0x180091824 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAP.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x1800925A4 (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x180096038 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180097210 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180006690 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, a2, a3, 0LL, 0LL, retaddr);
}
