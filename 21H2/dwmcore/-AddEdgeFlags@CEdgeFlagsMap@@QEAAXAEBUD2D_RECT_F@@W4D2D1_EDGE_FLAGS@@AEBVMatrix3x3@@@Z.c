/*
 * XREFs of ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1800B9CE4
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801E6300 (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18003BFF4 (-ensure_extra_capacity@-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z.c)
 *     ?reserve_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_VECTOR_2F@@_K0@Z @ 0x1800BA070 (-reserve_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800BA144 (-ensure_extra_capacity@-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 *     ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x1800BA1A0 (-reserve_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_ex.c)
 *     ?reserve_region@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAI_K0@Z @ 0x1800BA274 (-reserve_region@-$vector_facade@IV-$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x1800BA348 (-Is2DAffine@Matrix3x3@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x180263194 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 */

float *__fastcall CEdgeFlagsMap::AddEdgeFlags(__int64 a1, float *a2, int a3, float *a4)
{
  __int64 v4; // r10
  void *v6; // rax
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  bool v16; // al
  float v17; // xmm1_4
  unsigned int v18; // edi
  float v19; // xmm0_4
  float v20; // xmm9_4
  float v21; // xmm8_4
  float v22; // xmm10_4
  float v23; // xmm11_4
  float *v24; // rax
  int v25; // xmm6_4
  int v26; // xmm7_4
  _DWORD *v27; // rax
  float *v28; // rax
  int v29; // xmm6_4
  int v30; // xmm7_4
  _DWORD *v31; // rax
  float *v32; // rax
  int v33; // xmm6_4
  int v34; // xmm7_4
  _DWORD *v35; // rax
  float *v36; // rax
  int v37; // xmm6_4
  int v38; // xmm7_4
  float *result; // rax
  int v40; // xmm2_4
  __int64 v41; // rbx
  _QWORD *v42; // rax
  _QWORD *v43; // r10
  float *v44; // rbx
  __int64 v45; // rax
  float v46; // xmm7_4
  float v47; // xmm6_4
  struct D2D_POINT_2F v48; // [rsp+28h] [rbp-69h] BYREF
  float v49; // [rsp+30h] [rbp-61h] BYREF
  _DWORD v50[3]; // [rsp+34h] [rbp-5Dh]
  int v51; // [rsp+40h] [rbp-51h]
  float v52; // [rsp+44h] [rbp-4Dh]
  int v53; // [rsp+48h] [rbp-49h]
  int v54; // [rsp+4Ch] [rbp-45h]

  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(void **)a1;
  if ( ((v4 - *(_QWORD *)a1) >> 2) + 4 >= (unsigned __int64)((v4 - *(_QWORD *)a1) >> 2) )
  {
    detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity((void **)a1, 4uLL);
    v4 = *(_QWORD *)(a1 + 8);
    v6 = *(void **)a1;
  }
  v10 = (_QWORD *)(a1 + 88);
  v11 = ((v4 - (__int64)v6) >> 2) + 4;
  v12 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 3;
  if ( v11 > v12 )
  {
    detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1 + 88, v11 - v12);
    v4 = *(_QWORD *)(a1 + 8);
    v6 = *(void **)a1;
  }
  v13 = (_QWORD *)(a1 + 240);
  v14 = ((v4 - (__int64)v6) >> 2) + 4;
  v15 = (__int64)(*(_QWORD *)(a1 + 248) - *(_QWORD *)(a1 + 240)) >> 3;
  if ( v14 > v15 )
  {
    detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1 + 240, v14 - v15);
    v4 = *(_QWORD *)(a1 + 8);
    v6 = *(void **)a1;
  }
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (v4 - (__int64)v6) >> 2,
               1LL) = a3 & 0x3000000;
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2,
               1LL) = a3 & 3;
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2,
               1LL) = a3 & 0x300;
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2,
               1LL) = a3 & 0x30000;
  v16 = Matrix3x3::Is2DAffine((Matrix3x3 *)a4);
  v17 = a2[1];
  v18 = 0;
  if ( v16 )
  {
    v19 = a2[3];
    v20 = (float)((float)(a4[3] * v17) + (float)(*a4 * *a2)) + a4[6];
    v21 = (float)((float)(a4[1] * *a2) + (float)(v17 * a4[4])) + a4[7];
    v22 = (float)((float)(a4[3] * v19) + (float)(*a4 * a2[2])) + a4[6];
    v23 = (float)((float)(a4[1] * a2[2]) + (float)(v19 * a4[4])) + a4[7];
    v24 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     v10,
                     (__int64)(v10[1] - *v10) >> 3,
                     1LL);
    *v24 = v20;
    v24[1] = v21;
    v25 = *((_DWORD *)a4 + 3);
    v26 = *((_DWORD *)a4 + 4);
    v27 = (_DWORD *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                      v13,
                      (__int64)(v13[1] - *v13) >> 3,
                      1LL);
    *v27 = v25;
    v27[1] = v26;
    v28 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     v10,
                     (__int64)(v10[1] - *v10) >> 3,
                     1LL);
    *v28 = v20;
    v28[1] = v21;
    v29 = *(_DWORD *)a4;
    v30 = *((_DWORD *)a4 + 1);
    v31 = (_DWORD *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                      v13,
                      (__int64)(v13[1] - *v13) >> 3,
                      1LL);
    *v31 = v29;
    v31[1] = v30;
    v32 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     v10,
                     (__int64)(v10[1] - *v10) >> 3,
                     1LL);
    *v32 = v22;
    v32[1] = v23;
    v33 = *((_DWORD *)a4 + 3);
    v34 = *((_DWORD *)a4 + 4);
    v35 = (_DWORD *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                      v13,
                      (__int64)(v13[1] - *v13) >> 3,
                      1LL);
    *v35 = v33;
    v35[1] = v34;
    v36 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     v10,
                     (__int64)(v10[1] - *v10) >> 3,
                     1LL);
    *v36 = v22;
    v36[1] = v23;
    v37 = *(_DWORD *)a4;
    v38 = *((_DWORD *)a4 + 1);
    result = (float *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                        v13,
                        (__int64)(v13[1] - *v13) >> 3,
                        1LL);
    *(_DWORD *)result = v37;
    *((_DWORD *)result + 1) = v38;
  }
  else
  {
    v40 = *((_DWORD *)a2 + 3);
    v41 = 4LL;
    v49 = *a2;
    *(float *)&v50[1] = v49;
    v51 = *((_DWORD *)a2 + 2);
    v53 = v51;
    v50[0] = v40;
    *(float *)&v50[2] = v17;
    v52 = v17;
    v54 = v40;
    do
    {
      v42 = (_QWORD *)Matrix3x3::TransformHomogeneousPoint((Matrix3x3 *)a4, (struct D2D_POINT_2F)&v48);
      *v43 = *v42;
      --v41;
    }
    while ( v41 );
    v44 = &v49;
    do
    {
      ++v18;
      *(_QWORD *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   v10,
                   (__int64)(v10[1] - *v10) >> 3,
                   1LL) = *(_QWORD *)v44;
      v45 = v18 & 3;
      v46 = *(float *)&v50[2 * v45 - 1] - *v44;
      v47 = *(float *)&v50[2 * v45] - v44[1];
      result = (float *)detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                          v13,
                          (__int64)(v13[1] - *v13) >> 3,
                          1LL);
      v44 += 2;
      *result = v46;
      result[1] = v47;
    }
    while ( v18 < 4 );
  }
  return result;
}
