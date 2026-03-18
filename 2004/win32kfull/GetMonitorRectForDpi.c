/*
 * XREFs of GetMonitorRectForDpi @ 0x1C0026D24
 * Callers:
 *     GetScreenRectForDpi @ 0x1C00231F0 (GetScreenRectForDpi.c)
 *     FindOldMonitor @ 0x1C0026B78 (FindOldMonitor.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C002C7DC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C002CABC (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C005FA8C (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     InternalGetRealClientRect @ 0x1C0102D7C (InternalGetRealClientRect.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C025E808 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025E978 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C0023520 (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C002360C (ExpandMonitorSpaceVertex.c)
 */

__m128i *__fastcall GetMonitorRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v7; // rax

  *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 28LL);
  if ( a3 )
  {
    v7 = ExpandMonitorSpaceVertex(a3, *(_WORD *)(*(_QWORD *)(a2 + 40) + 66LL), a1->m128i_i64[0]);
    ScaleDPIRect(a1, a1, a3, *(_WORD *)(*(_QWORD *)(a2 + 40) + 64LL), v7, a1->m128i_i64[0]);
  }
  return a1;
}
