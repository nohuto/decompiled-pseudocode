/*
 * XREFs of GetMonitorRectForDpi @ 0x1C00A2D08
 * Callers:
 *     GetScreenRectForDpi @ 0x1C002F254 (GetScreenRectForDpi.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00462B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C00A2C70 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C0032128 (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00A2D80 (ExpandMonitorSpaceVertex.c)
 */

__m128i *__fastcall GetMonitorRectForDpi(__m128i *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax

  *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 28LL);
  if ( a3 )
  {
    v6 = *(_QWORD *)(a2 + 40);
    v7 = ExpandMonitorSpaceVertex(a3, *(unsigned __int16 *)(v6 + 66), a1->m128i_i64[0]);
    ScaleDPIRect(a1, a1, a3, *(_WORD *)(v6 + 64), v7, a1->m128i_i64[0]);
  }
  return a1;
}
