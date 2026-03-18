/*
 * XREFs of GetMonitorRectForDpiContext @ 0x1C003DDC8
 * Callers:
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     _MonitorFromPoint @ 0x1C003C200 (_MonitorFromPoint.c)
 *     GetScreenRectForDpiContext @ 0x1C003DB40 (GetScreenRectForDpiContext.c)
 *     GetMonitorTransform @ 0x1C003DC9C (GetMonitorTransform.c)
 *     GetMonitorRectForWindow @ 0x1C003DD8C (GetMonitorRectForWindow.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00441B0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     IsChildWindowDpiBoundary @ 0x1C0046590 (IsChildWindowDpiBoundary.c)
 *     InitializeDPIINFO @ 0x1C0090EAC (InitializeDPIINFO.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     ?GetMonitorMenuRectForDpiContext@@YA?AUtagRECT@@PEBUtagMONITOR@@K@Z @ 0x1C025D2C0 (-GetMonitorMenuRectForDpiContext@@YA-AUtagRECT@@PEBUtagMONITOR@@K@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C003DE78 (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C003DF64 (ExpandMonitorSpaceVertex.c)
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
