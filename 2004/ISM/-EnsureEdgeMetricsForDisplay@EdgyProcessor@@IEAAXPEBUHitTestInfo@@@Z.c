/*
 * XREFs of ?EnsureEdgeMetricsForDisplay@EdgyProcessor@@IEAAXPEBUHitTestInfo@@@Z @ 0x180177B74
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180177CF0 (-OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitial.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?HimetricToPixels@EdgyProcessor@@QEAAXPEAUD2D_VECTOR_2F@@@Z @ 0x180177C74 (-HimetricToPixels@EdgyProcessor@@QEAAXPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?GetHitTestSpanHimetric@EdgeGestureMetrics@@SA?AUD2D_VECTOR_2F@@XZ @ 0x180179DF8 (-GetHitTestSpanHimetric@EdgeGestureMetrics@@SA-AUD2D_VECTOR_2F@@XZ.c)
 */

void __fastcall EdgyProcessor::EnsureEdgeMetricsForDisplay(struct D2D_VECTOR_2F *this, const struct HitTestInfo *a2)
{
  __int64 v3; // rcx
  const char *v4; // r9
  int v5; // eax
  struct D2D_VECTOR_2F v6; // [rsp+20h] [rbp-40h] BYREF
  struct D2D_VECTOR_2F HitTestSpanHimetric; // [rsp+28h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v3 = *((unsigned int *)a2 + 1);
  v9 = 0LL;
  v8 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v3, &v9, &v8) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      30LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyprocessor.cpp",
      v4);
    __debugbreak();
  }
  v5 = HIDWORD(v8) - DWORD1(v8);
  this[7].x = (float)(DWORD2(v8) - v8) / (float)(DWORD2(v9) - v9);
  this[7].y = (float)v5 / (float)(HIDWORD(v9) - DWORD1(v9));
  LODWORD(v6.x) = *(_QWORD *)&EdgeGestureMetrics::GetHitTestSpanHimetric();
  HitTestSpanHimetric = EdgeGestureMetrics::GetHitTestSpanHimetric();
  v6.y = HitTestSpanHimetric.y;
  EdgyProcessor::HimetricToPixels((EdgyProcessor *)this, &v6);
  this[8] = v6;
}
