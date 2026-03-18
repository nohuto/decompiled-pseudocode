/*
 * XREFs of ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801E7254
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x1800AEBA8 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D8B5C (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vlibe.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     ?insert@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@I@2@V?$basic_iterator@$$CBI@2@_KAEBI@Z @ 0x1801E74E4 (-insert@-$vector_facade@IV-$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?insert@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UD2D_POINT_2F@@@2@V?$basic_iterator@$$CBUD2D_POINT_2F@@@2@_KAEBUD2D_POINT_2F@@@Z @ 0x1801E75B8 (-insert@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_.c)
 *     ?insert@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UD2D_VECTOR_2F@@@2@V?$basic_iterator@$$CBUD2D_VECTOR_2F@@@2@_KAEBUD2D_VECTOR_2F@@@Z @ 0x1801E7634 (-insert@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansio.c)
 */

void __fastcall CEdgeFlagsMap::Copy(CEdgeFlagsMap *this, const struct CEdgeFlagsMap *a2, struct D2D_MATRIX_3X2_F *a3)
{
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v7; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  void **v11; // rdi
  __int64 *v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  void **v16; // r15
  __int64 *v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float *v26; // rax
  float v27; // xmm3_4
  __int64 v28; // rax
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  float *v32; // rax
  float v33; // xmm3_4
  __int64 v34; // [rsp+70h] [rbp+40h] BYREF
  __int64 v35; // [rsp+78h] [rbp+48h] BYREF
  char v36; // [rsp+80h] [rbp+50h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)a2 + 1);
  v7 = *((_QWORD *)this + 1);
  LODWORD(v34) = 0;
  v9 = (v5 - *(_QWORD *)a2) >> 2;
  v10 = (v7 - *(_QWORD *)this) >> 2;
  if ( v9 <= v10 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this,
      (__int64)(4 * v9) >> 2,
      (__int64)(v7 - *(_QWORD *)this - 4 * v9) >> 2);
  }
  else
  {
    v35 = v7;
    detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::insert(
      (_DWORD)this,
      (unsigned int)&v36,
      (unsigned int)&v35,
      v9 - v10,
      (__int64)&v34);
  }
  v11 = (void **)((char *)this + 88);
  v12 = (__int64 *)((char *)this + 88);
  v13 = *((_QWORD *)this + 12);
  v14 = (__int64)(*((_QWORD *)a2 + 12) - *((_QWORD *)a2 + 11)) >> 3;
  v15 = (v13 - *((_QWORD *)this + 11)) >> 3;
  v34 = 0LL;
  if ( v14 <= v15 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      v12,
      (__int64)(8 * v14) >> 3,
      (__int64)(v13 - (_QWORD)*v11 - 8 * v14) >> 3);
  }
  else
  {
    v35 = v13;
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::insert(
      (_DWORD)v12,
      (unsigned int)&v36,
      (unsigned int)&v35,
      v14 - v15,
      (__int64)&v34);
  }
  v16 = (void **)((char *)this + 240);
  v17 = (__int64 *)((char *)this + 240);
  v18 = *((_QWORD *)this + 31);
  v19 = (__int64)(*((_QWORD *)a2 + 31) - *((_QWORD *)a2 + 30)) >> 3;
  v20 = (v18 - *((_QWORD *)this + 30)) >> 3;
  v34 = 0LL;
  if ( v19 <= v20 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      v17,
      (__int64)(8 * v19) >> 3,
      (__int64)(v18 - (_QWORD)*v16 - 8 * v19) >> 3);
  }
  else
  {
    v35 = v18;
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::insert(
      (_DWORD)v17,
      (unsigned int)&v36,
      (unsigned int)&v35,
      v19 - v20,
      (__int64)&v34);
  }
  memcpy_0(*(void **)this, *(const void **)a2, (*((_QWORD *)this + 1) - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( !a3 || D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)a3) )
  {
    memcpy_0(*v11, *((const void **)a2 + 11), (*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) & 0xFFFFFFFFFFFFFFF8uLL);
    memcpy_0(*v16, *((const void **)a2 + 30), (*((_QWORD *)this + 31) - *((_QWORD *)this + 30)) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  else if ( (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3 )
  {
    v21 = 0LL;
    do
    {
      v22 = *((_QWORD *)a2 + 11);
      ++v4;
      v23 = *(float *)(v22 + 8 * v21);
      v24 = *(float *)(v22 + 8 * v21 + 4);
      v25 = v23 * a3->m11;
      v26 = (float *)*v11;
      v27 = (float)((float)(v23 * a3->m12) + (float)(v24 * a3->m22)) + a3->dy;
      v26[2 * v21] = (float)(v25 + (float)(v24 * a3->m21)) + a3->dx;
      v26[2 * v21 + 1] = v27;
      v28 = *((_QWORD *)a2 + 30);
      v29 = *(float *)(v28 + 8 * v21 + 4);
      v30 = *(float *)(v28 + 8 * v21);
      v31 = v30;
      v32 = (float *)*v16;
      v33 = (float)(v30 * a3->m12) + (float)(v29 * a3->m22);
      v32[2 * v21] = (float)(v31 * a3->m11) + (float)(v29 * a3->m21);
      v32[2 * v21 + 1] = v33;
      v21 = v4;
    }
    while ( v4 < (unsigned __int64)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3) );
  }
}
