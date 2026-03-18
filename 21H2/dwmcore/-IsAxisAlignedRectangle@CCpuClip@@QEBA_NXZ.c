/*
 * XREFs of ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800636A8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1800AC0F4 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E369C (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18006367C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180063700 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 */

char __fastcall CCpuClip::IsAxisAlignedRectangle(CShape **this)
{
  char v2; // bl
  CShape **v3; // rcx

  v2 = 0;
  v3 = this + 10;
  if ( *v3 )
    return CShapePtr::IsAxisAlignedRectangle(v3);
  if ( (!*this || CShape::IsAxisAlignedRectangle(*this))
    && CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(this + 1)) )
  {
    return 1;
  }
  return v2;
}
