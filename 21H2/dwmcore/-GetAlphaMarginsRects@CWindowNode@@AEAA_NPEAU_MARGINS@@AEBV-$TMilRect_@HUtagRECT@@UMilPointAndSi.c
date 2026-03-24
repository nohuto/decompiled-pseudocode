/*
 * XREFs of ?GetAlphaMarginsRects@CWindowNode@@AEAA_NPEAU_MARGINS@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV3@2@Z @ 0x18003C50C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800F0800 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18003C5D8 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003C6F4 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003C778 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 */

char __fastcall CWindowNode::GetAlphaMarginsRects(__int64 a1, _DWORD *a2, _OWORD *a3, _OWORD *a4, int *a5)
{
  char v7; // bp
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // r10
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  int v16; // eax

  *a4 = *a3;
  v7 = 0;
  *(_OWORD *)a5 = *a3;
  CWindowNode::IntersectWithMaximizedClip(a1, a4);
  if ( a2 && (*a2 || a2[2] || a2[1] || a2[3]) )
  {
    *a5 += *a2;
    v7 = 1;
    a5[2] -= a2[1];
    v13 = a5[1] + a2[2];
    v14 = a5[2];
    v15 = a5[3];
    a5[1] = v13;
    v16 = v15 - a2[3];
    if ( v14 <= *a5 )
      v14 = *a5;
    a5[2] = v14;
    if ( v16 <= v13 )
      v16 = v13;
    a5[3] = v16;
  }
  TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a5, a4);
  if ( !v7
    || (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(
                          v8,
                          a4,
                          v9,
                          v10) )
  {
    return 0;
  }
  return v11;
}
