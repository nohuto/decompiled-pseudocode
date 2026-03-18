/*
 * XREFs of ?IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180010240
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180099A20 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1802440A4 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006E4C8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 */

__int64 __fastcall CWindowNode::IntersectWithAlphaMargins(__m128i *a1, __int64 a2)
{
  __m128i v2; // xmm0
  int v4; // r9d
  int v5; // r11d
  int v6; // ecx
  int v7; // eax
  __m128i v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1[48];
  v9 = v2;
  v4 = v2.m128i_i32[2] - a1[54].m128i_i32[0];
  v5 = a1[53].m128i_i32[3] + _mm_cvtsi128_si32(v2);
  v6 = v2.m128i_i32[1] + a1[54].m128i_i32[1];
  v9.m128i_i64[0] = __PAIR64__(v6, v5);
  v7 = v2.m128i_i32[3] - a1[54].m128i_i32[2];
  if ( v4 <= v5 )
    v4 = v5;
  v9.m128i_i32[2] = v4;
  if ( v7 <= v6 )
    v7 = v6;
  v9.m128i_i32[3] = v7;
  return TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a2, &v9);
}
