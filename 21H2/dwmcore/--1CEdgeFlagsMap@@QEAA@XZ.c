/*
 * XREFs of ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801E2F6C
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800A8F20 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D8B5C (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vlibe.c)
 */

void __fastcall CEdgeFlagsMap::~CEdgeFlagsMap(CEdgeFlagsMap *this)
{
  __int64 *v1; // rdi
  __int64 *v3; // rcx
  __int64 v4; // r8
  CEdgeFlagsMap **v5; // rdi
  CEdgeFlagsMap *v6; // rcx
  __int64 v7; // r8
  CEdgeFlagsMap *v8; // rcx
  __int64 v9; // r8

  v1 = (__int64 *)((char *)this + 240);
  v3 = (__int64 *)*((_QWORD *)this + 30);
  v4 = (v1[1] - (__int64)v3) >> 3;
  if ( v4 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      v1,
      0LL,
      v4);
    v3 = (__int64 *)*v1;
  }
  *v1 = 0LL;
  if ( v3 == v1 + 3 )
    v3 = 0LL;
  DefaultHeap::Free(v3);
  v5 = (CEdgeFlagsMap **)((char *)this + 88);
  v6 = (CEdgeFlagsMap *)*((_QWORD *)this + 11);
  v7 = (__int64)(*((_QWORD *)this + 12) - (_QWORD)v6) >> 3;
  if ( v7 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 11,
      0LL,
      v7);
    v6 = *v5;
  }
  *v5 = 0LL;
  if ( v6 == (CEdgeFlagsMap *)((char *)this + 112) )
    v6 = 0LL;
  DefaultHeap::Free(v6);
  v8 = *(CEdgeFlagsMap **)this;
  v9 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 2;
  if ( v9 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this,
      0LL,
      v9);
    v8 = *(CEdgeFlagsMap **)this;
  }
  *(_QWORD *)this = 0LL;
  if ( v8 == (CEdgeFlagsMap *)((char *)this + 24) )
    v8 = 0LL;
  DefaultHeap::Free(v8);
}
