/*
 * XREFs of ?IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180092BE8
 * Callers:
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_NPEAU_MARGINS@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV3@2@Z @ 0x180092B1C (-GetAlphaMarginsRects@CWindowNode@@AEAA_NPEAU_MARGINS@@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSi.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1801F4788 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180092D88 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

void __fastcall CWindowNode::IntersectWithMaximizedClip(const RECT *a1, __int64 a2)
{
  LONG right; // ecx
  LONG v5; // ecx
  LONG v6; // eax
  struct tagRECT rcDst; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v8; // [rsp+30h] [rbp-28h] BYREF

  right = a1[52].right;
  if ( right || a1[53].left || a1[52].bottom || a1[53].top )
  {
    v5 = a1[40].left + right;
    rcDst.right = a1[40].right - a1[52].bottom;
    rcDst.top = a1[40].top + a1[53].left;
    v6 = a1[40].bottom - a1[53].top;
    rcDst.left = v5;
    rcDst.bottom = v6;
    IntersectRect(&rcDst, &rcDst, a1 + 43);
    if ( !EqualRect(&rcDst, a1 + 43) )
    {
      OffsetRect(&rcDst, -a1[43].left, -a1[43].top);
      v8 = rcDst;
      TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a2, &v8);
    }
  }
}
