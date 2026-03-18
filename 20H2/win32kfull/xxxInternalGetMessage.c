/*
 * XREFs of xxxInternalGetMessage @ 0x1C007E984
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C007C730 (xxxDCETrackCaptionButton.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007DBE0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C007DE70 (xxxSetCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007E898 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020EA80 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C02337C4 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 *     xxxMNDoubleClick @ 0x1C0237EB8 (xxxMNDoubleClick.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0244B44 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C0247470 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02480F4 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C02487F8 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C024FBFC (xxxHelpLoop.c)
 * Callees:
 *     ClientGetMessageMPH @ 0x1C004EEB8 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall xxxInternalGetMessage(
        _OWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 v7; // [rsp+20h] [rbp-18h]

  LODWORD(v7) = a5;
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL) > 0 )
    return ClientGetMessageMPH(a1, a2, a3, a4, a5, a6);
  else
    return xxxRealInternalGetMessage(a1, a2, a3, a4, v7, a6);
}
