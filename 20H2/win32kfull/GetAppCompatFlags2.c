/*
 * XREFs of GetAppCompatFlags2 @ 0x1C00C7E10
 * Callers:
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C001E8A8 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0059D60 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00C4DD4 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00C5044 (GetWindowFrameMetricForDpi.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C7408 (xxxDWP_UpdateUIState.c)
 *     GetWindowBordersForDpi @ 0x1C00C7CA0 (GetWindowBordersForDpi.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     NtGdiTransparentBlt @ 0x1C014B4C0 (NtGdiTransparentBlt.c)
 *     ?zzzHideCursorNoCapture@@YA_KXZ @ 0x1C01D3AA0 (-zzzHideCursorNoCapture@@YA_KXZ.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021C8A4 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackWindowDying @ 0x1C021D0E8 (xxxDDETrackWindowDying.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024BC0C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxMenuBarDraw @ 0x1C024CF74 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags2(unsigned __int16 a1)
{
  unsigned int v1; // ebx
  __int64 ThreadWin32Thread; // rax

  v1 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( v1 < *(_DWORD *)(ThreadWin32Thread + 632) )
    return 0LL;
  else
    return *(unsigned int *)(ThreadWin32Thread + 648);
}
