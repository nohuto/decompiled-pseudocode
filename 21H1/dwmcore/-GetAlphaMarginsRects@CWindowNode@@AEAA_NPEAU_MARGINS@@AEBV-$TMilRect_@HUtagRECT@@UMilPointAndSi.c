/*
 * XREFs of ?GetAlphaMarginsRects@CWindowNode@@AEAA_NPEAU_MARGINS@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV3@2@Z @ 0x180047BEC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180048ABC (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180029A6C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180029AC8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180047CB8 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil.c)
 */

char __fastcall CWindowNode::GetAlphaMarginsRects(__int64 a1, _DWORD *a2, _OWORD *a3, _DWORD *a4, _DWORD *a5)
{
  char v7; // bp
  _DWORD *v8; // rcx
  char v9; // r10
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  int v14; // eax

  *(_OWORD *)a4 = *a3;
  v7 = 0;
  *(_OWORD *)a5 = *a3;
  CWindowNode::IntersectWithMaximizedClip(a1, a4);
  if ( a2 && (*a2 || a2[2] || a2[1] || a2[3]) )
  {
    *a5 += *a2;
    v7 = 1;
    a5[2] -= a2[1];
    v11 = a5[1] + a2[2];
    v12 = a5[2];
    v13 = a5[3];
    a5[1] = v11;
    v14 = v13 - a2[3];
    if ( v12 <= *a5 )
      v12 = *a5;
    a5[2] = v12;
    if ( v14 <= v11 )
      v14 = v11;
    a5[3] = v14;
  }
  TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a5, a4);
  if ( !v7 || TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo(v8, a4) )
    return 0;
  return v9;
}
