/*
 * XREFs of ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801F73BC
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800480E0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18004E030 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180095750 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801F7498 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180054780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 */

struct CShapePtr *__fastcall CWindowNode::GetDxClipShape(__int64 a1, struct CShapePtr *a2)
{
  *(_QWORD *)a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  if ( *(_QWORD *)(a1 + 856) )
  {
    CGeometry::GetShapeData(*(CGeometry **)(a1 + 856), (const struct D2D_SIZE_F *)(a1 + 132), a2);
  }
  else
  {
    CShapePtr::Release(a2);
    *((_BYTE *)a2 + 8) = 0;
    *(_QWORD *)a2 = &CRectanglesShape::sc_emptyShape;
  }
  return a2;
}
