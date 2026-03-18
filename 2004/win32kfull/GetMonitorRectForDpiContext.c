/*
 * XREFs of GetMonitorRectForDpiContext @ 0x1C0023470
 * Callers:
 *     InitializeDPIINFO @ 0x1C001FD54 (InitializeDPIINFO.c)
 *     GetScreenRectForDpiContext @ 0x1C0023174 (GetScreenRectForDpiContext.c)
 *     GetMonitorTransform @ 0x1C0023344 (GetMonitorTransform.c)
 *     GetMonitorRectForWindow @ 0x1C0023434 (GetMonitorRectForWindow.c)
 *     _MonitorFromRect @ 0x1C0024B70 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x1C0025880 (_MonitorFromPoint.c)
 *     GetMonitorRect @ 0x1C002A734 (GetMonitorRect.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F7CC (IsChildWindowDpiBoundary.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0072DC0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?GetMonitorMenuRectForDpiContext@@YA?AUtagRECT@@PEBUtagMONITOR@@K@Z @ 0x1C025E8D4 (-GetMonitorMenuRectForDpiContext@@YA-AUtagRECT@@PEBUtagMONITOR@@K@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C0023520 (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C002360C (ExpandMonitorSpaceVertex.c)
 */

_OWORD *__fastcall GetMonitorRectForDpiContext(_OWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v5; // di
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v9; // rax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  if ( (a3 & 0xF) == 2 && (a3 & 0x20000000) != 0 )
  {
    *a1 = *(_OWORD *)(*(_QWORD *)(a2 + 40) + 72LL);
  }
  else
  {
    v5 = (a3 >> 8) & 0x1FF;
    v6 = *(_QWORD *)(a2 + 40);
    v7 = *(_OWORD *)(v6 + 28);
    v10 = v7;
    if ( v5 )
    {
      v9 = ExpandMonitorSpaceVertex(v5, *(unsigned __int16 *)(v6 + 66), v10);
      ScaleDPIRect(
        (unsigned int)&v10,
        (unsigned int)&v10,
        v5,
        *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + 64LL),
        v9,
        v10);
      v7 = v10;
    }
    *a1 = v7;
  }
  return a1;
}
