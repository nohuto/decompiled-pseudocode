/*
 * XREFs of ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x18001AADC
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z @ 0x18004C5D8 (-TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180052854 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800A67B0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180005BBC (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7A7C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800B8C44 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 */

char __fastcall CCpuClip::IsAxisAlignedRectangle(CCpuClip *this)
{
  char v2; // bl
  CShape **v3; // rcx
  __int64 v4; // rcx

  v2 = 0;
  v3 = (CShape **)((char *)this + 16);
  if ( *v3 )
    return CShapePtr::IsAxisAlignedRectangle(v3);
  if ( !*(_QWORD *)this || CShape::IsAxisAlignedRectangle(*(CShape **)this) )
  {
    v4 = *((_QWORD *)this + 1);
    if ( !v4 || (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v4) )
      return 1;
  }
  return v2;
}
