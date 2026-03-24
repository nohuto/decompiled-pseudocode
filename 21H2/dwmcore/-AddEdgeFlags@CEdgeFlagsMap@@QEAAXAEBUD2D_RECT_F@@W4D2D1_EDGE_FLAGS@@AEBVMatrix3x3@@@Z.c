/*
 * XREFs of ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801A2BE0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x180095BB0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x18019EB58 (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 * Callees:
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x180012E04 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180163EB0 (-ensure_extra_capacity@-$buffer_impl@UD2D_VECTOR_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 *     ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x18019DB78 (-reserve_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_ex.c)
 *     ?ensure_extra_capacity@?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801A12AC (-ensure_extra_capacity@-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail.c)
 *     ?reserve_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_VECTOR_2F@@_K0@Z @ 0x1801A13C0 (-reserve_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_ex.c)
 *     ?reserve_region@?$vector_facade@IV?$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAI_K0@Z @ 0x1801A33A0 (-reserve_region@-$vector_facade@IV-$buffer_impl@I$0BA@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?Is2DAffine@Matrix3x3@@QEBA_NXZ @ 0x1802121E4 (-Is2DAffine@Matrix3x3@@QEBA_NXZ.c)
 */

char *__fastcall CEdgeFlagsMap::AddEdgeFlags(__int64 a1, float *a2, int a3, float *a4)
{
  __int64 v4; // r10
  const void *v6; // rax
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm0_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm10_4
  float v23; // xmm11_4
  float *v24; // rax
  int v25; // xmm6_4
  int v26; // xmm7_4
  __int64 v27; // r8
  char *v28; // rax
  float *v29; // rax
  float v30; // xmm6_4
  int v31; // xmm7_4
  __int64 v32; // r8
  char *v33; // rax
  float *v34; // rax
  int v35; // xmm6_4
  int v36; // xmm7_4
  __int64 v37; // r8
  char *v38; // rax
  float *v39; // rax
  float v40; // xmm6_4
  int v41; // xmm7_4
  __int64 v42; // r8
  char *result; // rax
  int v44; // xmm2_4
  __int64 *v45; // r11
  int v46; // xmm1_4
  __int64 v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // r11
  _QWORD *v50; // r10
  float *v51; // rbx
  __int64 v52; // rax
  float v53; // xmm7_4
  float v54; // xmm6_4
  __int64 v55; // r8
  struct D2D_POINT_2F v56; // [rsp+28h] [rbp-69h] BYREF
  float v57; // [rsp+30h] [rbp-61h] BYREF
  _DWORD v58[3]; // [rsp+34h] [rbp-5Dh]
  int v59; // [rsp+40h] [rbp-51h]
  int v60; // [rsp+44h] [rbp-4Dh]
  int v61; // [rsp+48h] [rbp-49h]
  int v62; // [rsp+4Ch] [rbp-45h]

  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(const void **)a1;
  if ( ((v4 - *(_QWORD *)a1) >> 2) + 4 >= (unsigned __int64)((v4 - *(_QWORD *)a1) >> 2) )
  {
    detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
      (const void **)a1,
      4uLL);
    v4 = *(_QWORD *)(a1 + 8);
    v6 = *(const void **)a1;
  }
  v10 = (_QWORD *)(a1 + 88);
  v11 = ((v4 - (__int64)v6) >> 2) + 4;
  v12 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 3;
  if ( v11 > v12 )
  {
    detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
      (const void **)(a1 + 88),
      v11 - v12);
    v4 = *(_QWORD *)(a1 + 8);
    v6 = *(const void **)a1;
  }
  v13 = a1 + 240;
  v14 = ((v4 - (__int64)v6) >> 2) + 4;
  v15 = (__int64)(*(_QWORD *)(a1 + 248) - *(_QWORD *)(a1 + 240)) >> 3;
  if ( v14 > v15 )
  {
    detail::buffer_impl<D2D_VECTOR_2F,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
      (const void **)(a1 + 240),
      v14 - v15);
    v4 = *(_QWORD *)(a1 + 8);
    v6 = *(const void **)a1;
  }
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (v4 - (__int64)v6) >> 2) = a3 & 0x3000000;
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2) = a3 & 3;
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2) = a3 & 0x300;
  *(_DWORD *)detail::vector_facade<unsigned int,detail::buffer_impl<unsigned int,16,1,detail::liberal_expansion_policy>>::reserve_region(
               a1,
               (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2) = a3 & 0x30000;
  v16 = 0;
  if ( Matrix3x3::Is2DAffine((Matrix3x3 *)a4) )
  {
    v17 = a2[1];
    v18 = (float)(v17 * a4[4]) + (float)(*a2 * a4[1]);
    v19 = a2[2];
    v20 = (float)((float)(v17 * a4[3]) + (float)(*a2 * *a4)) + a4[6];
    v21 = v18 + a4[7];
    v22 = (float)((float)(a2[3] * a4[3]) + (float)(v19 * *a4)) + a4[6];
    v23 = (float)((float)(a2[3] * a4[4]) + (float)(v19 * a4[1])) + a4[7];
    v24 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     (__int64)v10,
                     (__int64)(v10[1] - *v10) >> 3,
                     1LL);
    *v24 = v20;
    v24[1] = v21;
    v25 = *((_DWORD *)a4 + 3);
    v26 = *((_DWORD *)a4 + 4);
    v28 = detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
            (const void **)v13,
            (__int64)(*(_QWORD *)(v13 + 8) - *(_QWORD *)v13) >> 3,
            v27);
    *(_DWORD *)v28 = v25;
    *((_DWORD *)v28 + 1) = v26;
    v29 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     (__int64)v10,
                     (__int64)(v10[1] - *v10) >> 3,
                     1LL);
    *v29 = v20;
    v29[1] = v21;
    v30 = *a4;
    v31 = *((_DWORD *)a4 + 1);
    v33 = detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
            (const void **)v13,
            (__int64)(*(_QWORD *)(v13 + 8) - *(_QWORD *)v13) >> 3,
            v32);
    *(float *)v33 = v30;
    *((_DWORD *)v33 + 1) = v31;
    v34 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     (__int64)v10,
                     (__int64)(v10[1] - *v10) >> 3,
                     1LL);
    *v34 = v22;
    v34[1] = v23;
    v35 = *((_DWORD *)a4 + 3);
    v36 = *((_DWORD *)a4 + 4);
    v38 = detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
            (const void **)v13,
            (__int64)(*(_QWORD *)(v13 + 8) - *(_QWORD *)v13) >> 3,
            v37);
    *(_DWORD *)v38 = v35;
    *((_DWORD *)v38 + 1) = v36;
    v39 = (float *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     (__int64)v10,
                     (__int64)(v10[1] - *v10) >> 3,
                     1LL);
    *v39 = v22;
    v39[1] = v23;
    v40 = *a4;
    v41 = *((_DWORD *)a4 + 1);
    result = detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
               (const void **)v13,
               (__int64)(*(_QWORD *)(v13 + 8) - *(_QWORD *)v13) >> 3,
               v42);
    *(float *)result = v40;
    *((_DWORD *)result + 1) = v41;
  }
  else
  {
    v44 = *((_DWORD *)a2 + 3);
    v45 = (__int64 *)&v57;
    v46 = *((_DWORD *)a2 + 1);
    v47 = 4LL;
    v57 = *a2;
    *(float *)&v58[1] = v57;
    v59 = *((_DWORD *)a2 + 2);
    v61 = v59;
    v58[0] = v44;
    v58[2] = v46;
    v60 = v46;
    v62 = v44;
    do
    {
      v48 = (_QWORD *)Matrix3x3::TransformHomogeneousPoint((Matrix3x3 *)a4, (struct D2D_POINT_2F)&v56, *v45);
      v45 = (__int64 *)(v49 + 8);
      *v50 = *v48;
      --v47;
    }
    while ( v47 );
    v51 = &v57;
    do
    {
      ++v16;
      *(_QWORD *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   (__int64)v10,
                   (__int64)(v10[1] - *v10) >> 3,
                   1LL) = *(_QWORD *)v51;
      v52 = v16 & 3;
      v53 = *(float *)&v58[2 * v52 - 1] - *v51;
      v54 = *(float *)&v58[2 * v52] - v51[1];
      result = detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::reserve_region(
                 (const void **)v13,
                 (__int64)(*(_QWORD *)(v13 + 8) - *(_QWORD *)v13) >> 3,
                 v55);
      v51 += 2;
      *(float *)result = v53;
      *((float *)result + 1) = v54;
    }
    while ( v16 < 4 );
  }
  return result;
}
