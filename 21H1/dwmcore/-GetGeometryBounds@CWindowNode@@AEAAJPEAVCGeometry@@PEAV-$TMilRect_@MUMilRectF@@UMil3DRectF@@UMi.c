/*
 * XREFs of ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F7444
 * Callers:
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1801F75DC (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180054780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180095B04 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowNode::GetGeometryBounds(__int64 a1, CGeometry *a2)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v3 = 0LL;
  v4 = 0;
  CGeometry::GetShapeData(a2, (const struct D2D_SIZE_F *)(a1 + 132), (struct CShapePtr *)&v3);
  CShapePtr::GetTightBounds(&v3);
  CShapePtr::Release((CShapePtr *)&v3);
  return 0LL;
}
