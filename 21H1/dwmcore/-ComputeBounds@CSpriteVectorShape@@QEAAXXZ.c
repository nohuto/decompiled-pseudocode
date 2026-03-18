/*
 * XREFs of ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801F0B08
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1802618AC (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18001CAF8 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180054780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180095B04 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800BDC0C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x1801F0F78 (-EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801F136C (-GetWidenedBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

void __fastcall CSpriteVectorShape::ComputeBounds(CSpriteVectorShape *this)
{
  CGeometry *v2; // rcx
  __int64 v3; // r8
  bool v4; // al
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  *((_WORD *)this + 44) = 0;
  v2 = (CGeometry *)*((_QWORD *)this + 14);
  v5 = 0LL;
  v6 = 0;
  if ( v2 )
    CGeometry::GetShapeData(v2, 0LL, (struct CShapePtr *)&v5);
  if ( !CShapePtr::IsEmpty((CShapePtr *)&v5) )
  {
    if ( *((_QWORD *)this + 13) && (int)CSpriteVectorShape::EnsureStrokeStyleForBounds(this) >= 0 )
      *((_BYTE *)this + 89) = (int)CShapePtr::GetWidenedBounds(&v5, (char *)this + 72, v3, *((_QWORD *)this + 15)) >= 0;
    if ( *((_BYTE *)this + 89)
      || *((_QWORD *)this + 12) && (v4 = (int)CShapePtr::GetTightBounds(&v5) >= 0, (*((_BYTE *)this + 89) = v4) != 0) )
    {
      *((_BYTE *)this + 89) = (int)CShapePtr::GetWidenedBounds(&v5, (char *)this + 136, v3, 0LL) >= 0;
    }
  }
  CShapePtr::Release((CShapePtr *)&v5);
}
