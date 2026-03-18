/*
 * XREFs of GetMonitorRectForDpi @ 0x1C003BDF0
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C001B770 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C001BA50 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C00387D8 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     FindOldMonitor @ 0x1C003BC44 (FindOldMonitor.c)
 *     GetScreenRectForDpi @ 0x1C003DBBC (GetScreenRectForDpi.c)
 *     InternalGetRealClientRect @ 0x1C01093C8 (InternalGetRealClientRect.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C025D1F4 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025D364 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C003DE78 (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C003DF64 (ExpandMonitorSpaceVertex.c)
 */

__int64 *__fastcall GetMonitorRectForDpi(__int64 *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v7; // rax

  *(_OWORD *)a1 = *(_OWORD *)(*(_QWORD *)(a2 + 40) + 28LL);
  if ( a3 )
  {
    v7 = ExpandMonitorSpaceVertex(a3, *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 66LL), *a1);
    ScaleDPIRect((_DWORD)a1, (_DWORD)a1, a3, *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 64LL), v7, *a1);
  }
  return a1;
}
