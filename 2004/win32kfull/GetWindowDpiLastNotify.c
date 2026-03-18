/*
 * XREFs of GetWindowDpiLastNotify @ 0x1C0024D1C
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C005D240 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     xxxMenuBarCompute @ 0x1C005EE48 (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 *     xxxCheckFullScreen @ 0x1C008E698 (xxxCheckFullScreen.c)
 *     DwmChildRectChange @ 0x1C00A5C78 (DwmChildRectChange.c)
 *     xxxGetMenuBarInfo @ 0x1C00A76D4 (xxxGetMenuBarInfo.c)
 *     xxxCalcClientRect @ 0x1C00AC73C (xxxCalcClientRect.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00AD8A0 (GetWindowBordersWithDpiAwareness.c)
 *     GetCaptionHeight @ 0x1C01084FC (GetCaptionHeight.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C0113488 (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     FindNCHit @ 0x1C01179B4 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C01487A8 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02390A0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0243708 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxCalcCaptionButton @ 0x1C0248758 (xxxCalcCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 *     xxxMNInvertItem @ 0x1C024DDE8 (xxxMNInvertItem.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024FDDC (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowDpiLastNotify(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( *(_WORD *)(v1 + 286) )
    return *(unsigned __int16 *)(v1 + 286);
  else
    return *(unsigned __int16 *)(v1 + 284);
}
