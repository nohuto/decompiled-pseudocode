/*
 * XREFs of ?IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180114F8E
 * Callers:
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1802440A4 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006E4C8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x180114F6E (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

char __fastcall CWindowNode::IntersectWithMaximizedClip(const struct _MARGINS *a1, int *a2)
{
  int v3; // eax
  RECT *v4; // rdx
  _DWORD *v5; // rcx
  RECT v6; // xmm0
  RECT rcSrc1; // [rsp+20h] [rbp-30h] BYREF
  RECT rcSrc2; // [rsp+30h] [rbp-20h] BYREF

  LOBYTE(v3) = AreAllMarginsZero(a1 + 55);
  if ( !(_BYTE)v3 )
  {
    v6 = v4[47];
    rcSrc2.left = 0;
    rcSrc2.top = 0;
    rcSrc1 = v6;
    rcSrc1.left = *v5 + _mm_cvtsi128_si32((__m128i)v6);
    rcSrc1.right = v6.right - v4[55].top;
    rcSrc1.top = v4[55].right + v6.top;
    rcSrc1.bottom = v6.bottom - v4[55].bottom;
    rcSrc2.right = v4[49].right - v4[49].left;
    rcSrc2.bottom = v4[49].bottom - v4[49].top;
    IntersectRect(&rcSrc1, &rcSrc1, &rcSrc2);
    v3 = EqualRect(&rcSrc1, &rcSrc2);
    if ( !v3 )
      LOBYTE(v3) = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a2, &rcSrc1.left);
  }
  return v3;
}
