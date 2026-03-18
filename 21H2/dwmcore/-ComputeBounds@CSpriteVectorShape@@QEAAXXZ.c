/*
 * XREFs of ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x180065138
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1800DAD6C (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800633B4 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180065204 (-GetWidenedBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x1800F0768 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x18023F378 (-EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ.c)
 */

void __fastcall CSpriteVectorShape::ComputeBounds(CSpriteVectorShape *this)
{
  CGeometry *v2; // rcx
  char v3; // al
  char *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]

  *((_WORD *)this + 48) = 0;
  v2 = (CGeometry *)*((_QWORD *)this + 15);
  v7 = 0LL;
  v8 = 0;
  if ( v2 )
    CGeometry::GetShapeData(v2, 0LL, (struct CShapePtr *)&v7);
  if ( !CShapePtr::IsEmpty((CShapePtr *)&v7) )
  {
    if ( *((_QWORD *)this + 14) && (int)CSpriteVectorShape::EnsureStrokeStyleForBounds(this) >= 0 )
      *((_BYTE *)this + 97) = (int)CShapePtr::GetWidenedBounds(&v7, (char *)this + 80, v6, *((_QWORD *)this + 16)) >= 0;
    v3 = *((_BYTE *)this + 97);
    if ( v3 )
    {
      v4 = (char *)this + 80;
    }
    else
    {
      if ( !*((_QWORD *)this + 13) )
        goto LABEL_10;
      v4 = (char *)this + 80;
      v3 = (int)CShapePtr::GetTightBounds(&v7) >= 0;
      *((_BYTE *)this + 97) = v3;
    }
    if ( v3 )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v4);
      *((_BYTE *)this + 97) = (int)CShapePtr::GetWidenedBounds(&v7, (char *)this + 144, v5, 0LL) >= 0;
    }
  }
LABEL_10:
  CShapePtr::Release((CShapePtr *)&v7);
}
