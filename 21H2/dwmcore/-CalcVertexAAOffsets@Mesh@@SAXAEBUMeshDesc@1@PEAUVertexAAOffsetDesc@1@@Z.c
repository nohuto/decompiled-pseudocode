/*
 * XREFs of ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@@Z @ 0x1800A773C
 * Callers:
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@@Z @ 0x180057488 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBU.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?insert@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UD2D_VECTOR_2F@@@2@V?$basic_iterator@$$CBUD2D_VECTOR_2F@@@2@_KAEBUD2D_VECTOR_2F@@@Z @ 0x1800D2098 (-insert@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$0CI@$00Vliberal_expansio.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18010197C (_o_sqrtf_0.c)
 */

void __fastcall Mesh::CalcVertexAAOffsets(const struct Mesh::MeshDesc *a1, struct Mesh::VertexAAOffsetDesc *a2)
{
  char v2; // r15
  __int64 v4; // rdx
  unsigned __int64 v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  __int64 v16; // rax
  unsigned int v17; // r12d
  _BYTE *v18; // rsi
  unsigned __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rcx
  __m128 v22; // xmm8
  __int64 v23; // r11
  char v24; // r10
  __m128 v25; // xmm9
  char v26; // r9
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rbx
  unsigned __int64 *v30; // rax
  unsigned __int64 v31; // xmm0_8
  float *v32; // rax
  float v33; // xmm5_4
  float v34; // xmm4_4
  unsigned __int64 *v35; // rax
  unsigned __int64 v36; // xmm0_8
  float *v37; // rax
  float v38; // xmm2_4
  float v39; // xmm6_4
  float v40; // xmm3_4
  float v41; // xmm8_4
  float v42; // xmm1_4
  int v43; // r8d
  int v44; // r8d
  float v45; // xmm0_4
  float v46; // xmm1_4
  int v47; // edx
  int v48; // edx
  float v49; // xmm1_4
  float v50; // xmm0_4
  float v51; // xmm3_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm0_4
  float v55; // xmm6_4
  float v56; // xmm0_4
  float v57; // xmm0_4
  unsigned __int64 v58; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v59; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v63; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v64; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v65; // [rsp+70h] [rbp-98h] BYREF
  _BYTE *v66; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v67; // [rsp+80h] [rbp-88h]
  char *v68; // [rsp+88h] [rbp-80h]
  _BYTE v69[320]; // [rsp+90h] [rbp-78h] BYREF
  char v70; // [rsp+1D0h] [rbp+C8h] BYREF

  v2 = 0;
  v66 = v69;
  v4 = *((_QWORD *)a1 + 1);
  v67 = v69;
  v68 = &v70;
  v58 = 0LL;
  if ( v4 )
  {
    v59 = v69;
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,40,1,detail::liberal_expansion_policy>>::insert(
      (unsigned int)&v66,
      (unsigned int)&v60,
      (unsigned int)&v59,
      v4,
      (__int64)&v58);
  }
  else
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v66,
      0LL,
      0LL);
  }
  v6 = *((_QWORD *)a1 + 1);
  v7 = 0;
  if ( v6 )
  {
    do
    {
      v8 = *((_QWORD *)a1 + 2);
      v9 = v7 + 1;
      v10 = v7;
      v11 = (v7 + 1) % v6;
      v12 = v7 + 1;
      v13 = *(float *)(v8 + 8 * v11) - *(float *)(v8 + 8LL * v7);
      v14 = *(float *)(v8 + 8 * v11 + 4) - *(float *)(v8 + 8LL * v7 + 4);
      if ( *(float *)a1 <= COERCE_FLOAT(LODWORD(v13) & _xmm) || *(float *)a1 <= COERCE_FLOAT(LODWORD(v14) & _xmm) )
      {
        v15 = o_sqrtf_0((float)(v14 * v14) + (float)(v13 * v13));
        v16 = (__int64)v66;
        *(float *)&v66[8 * v10] = (float)(1.0 / v15) * v13;
        *(float *)(v16 + 8 * v10 + 4) = (float)(1.0 / v15) * v14;
      }
      else
      {
        *(_QWORD *)&v66[8 * v7] = 0LL;
      }
      v6 = *((_QWORD *)a1 + 1);
      v7 = v9;
    }
    while ( v12 < v6 );
  }
  v17 = 0;
  v18 = v66;
  v19 = (v67 - v66) >> 3;
  v20 = v19 - 1;
  if ( v19 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      v22 = (__m128)*(unsigned int *)&v18[8 * v21];
      v23 = v20;
      if ( v22.m128_f32[0] != 0.0 || (v24 = 1, *(float *)&v18[8 * v21 + 4] != 0.0) )
        v24 = 0;
      v25 = (__m128)*(unsigned int *)&v18[8 * v20];
      if ( v25.m128_f32[0] != 0.0 || (v26 = 1, *(float *)&v18[8 * v20 + 4] != 0.0) )
        v26 = 0;
      v27 = v24 ? 0 : *(_DWORD *)(*((_QWORD *)a1 + 3) + 4 * v21);
      v28 = v26 ? 0 : *(_DWORD *)(*((_QWORD *)a1 + 3) + 4LL * v20);
      v29 = 3 * v21;
      if ( v27 || v28 )
        break;
      *((_QWORD *)a2 + 3 * v21) = 0LL;
      *((_QWORD *)a2 + 3 * v21 + 1) = 0LL;
      *((_QWORD *)a2 + 3 * v21 + 2) = 0LL;
LABEL_42:
      v20 = v17++;
      v21 = v17;
      if ( v17 >= v19 )
      {
        detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)&v66,
          0LL,
          v19);
        v18 = v66;
        goto LABEL_44;
      }
    }
    if ( v24 )
    {
      v32 = (float *)&v59;
      v59 = (_BYTE *)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    }
    else
    {
      if ( v26 )
      {
        v30 = &v58;
        v58 = _mm_unpacklo_ps((__m128)*(unsigned int *)&v18[8 * v21 + 4], _mm_xor_ps(v22, (__m128)(unsigned int)_xmm)).m128_u64[0];
      }
      else
      {
        v30 = (unsigned __int64 *)&v61;
        v61 = *(_QWORD *)&v18[8 * v23];
      }
      v31 = *v30;
      v32 = (float *)&v62;
      v62 = v31;
    }
    v33 = *v32;
    v34 = v32[1];
    if ( v26 )
    {
      v37 = (float *)&v63;
      v63 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    }
    else
    {
      if ( v24 )
      {
        v35 = &v64;
        v64 = _mm_unpacklo_ps((__m128)*(unsigned int *)&v18[8 * v23 + 4], _mm_xor_ps(v25, (__m128)(unsigned int)_xmm)).m128_u64[0];
      }
      else
      {
        v35 = &v65;
        v65 = _mm_unpacklo_ps(
                _mm_xor_ps(v22, (__m128)(unsigned int)_xmm),
                _mm_xor_ps((__m128)*(unsigned int *)&v18[8 * v21 + 4], (__m128)(unsigned int)_xmm)).m128_u64[0];
      }
      v36 = *v35;
      v37 = (float *)&v60;
      v60 = v36;
    }
    v38 = *v37;
    v39 = FLOAT_0_5;
    v40 = v37[1];
    if ( !v24 && !v26 )
    {
      LODWORD(v41) = v22.m128_i32[0] ^ _xmm;
      v42 = (float)(v41 * *(float *)&v18[8 * v23 + 4]) + (float)(v25.m128_f32[0] * *(float *)&v18[8 * v21 + 4]);
      if ( COERCE_FLOAT(LODWORD(v42) & _xmm) < 0.0000011920929 )
      {
        v33 = *(float *)&v18[8 * v21 + 4];
        v34 = v41;
        v38 = v33;
        v40 = v41;
        v42 = FLOAT_2_0;
      }
      v39 = 0.5 / v42;
    }
    v43 = v27 - 1;
    if ( v43 )
    {
      v44 = v43 - 1;
      if ( v44 )
      {
        if ( v44 == 1 )
        {
          v45 = v34;
          v46 = v33;
          LODWORD(v34) ^= _xmm;
          LODWORD(v33) ^= _xmm;
          v2 = 1;
        }
        else
        {
          v45 = 0.0;
          v46 = 0.0;
          v34 = 0.0;
          v33 = 0.0;
        }
      }
      else
      {
        v45 = v34;
        v46 = v33;
      }
    }
    else
    {
      LODWORD(v46) = LODWORD(v33) ^ _xmm;
      LODWORD(v45) = LODWORD(v34) ^ _xmm;
      LODWORD(v34) ^= _xmm;
      LODWORD(v33) ^= _xmm;
    }
    *((float *)a2 + 6 * v21) = v33;
    *((float *)a2 + 6 * v21 + 1) = v34;
    *((float *)a2 + 6 * v21 + 3) = v46;
    *((float *)a2 + 6 * v21 + 4) = v45;
    v47 = v28 - 1;
    if ( v47 )
    {
      v48 = v47 - 1;
      if ( v48 )
      {
        if ( v48 != 1 )
          goto LABEL_40;
        v49 = v33 - v38;
        v2 = 1;
        v50 = v34 - v40;
      }
      else
      {
        v49 = v38 + v33;
        v50 = v40 + v34;
      }
      *((float *)a2 + 6 * v21) = v49;
      *((float *)a2 + 6 * v21 + 1) = v50;
      v51 = v40 + *((float *)a2 + 6 * v21 + 4);
      *((float *)a2 + 6 * v21 + 3) = v38 + *((float *)a2 + 6 * v21 + 3);
      *((float *)a2 + 6 * v21 + 4) = v51;
    }
    else
    {
      *((float *)a2 + 6 * v21) = v33 - v38;
      *((float *)a2 + 6 * v21 + 1) = v34 - v40;
      v57 = *((float *)a2 + 6 * v21 + 4) - v40;
      *((float *)a2 + 6 * v21 + 3) = *((float *)a2 + 6 * v21 + 3) - v38;
      *((float *)a2 + 6 * v21 + 4) = v57;
    }
LABEL_40:
    v52 = v39 * *((float *)a2 + 6 * v21);
    v53 = v39 * *((float *)a2 + 6 * v21 + 1);
    *((float *)a2 + 6 * v21) = v52;
    *((float *)a2 + 6 * v21 + 1) = v53;
    *((float *)a2 + 6 * v21 + 2) = o_sqrtf_0((float)(v52 * v52) + (float)(v53 * v53));
    if ( v2 )
    {
      v54 = v39;
      v55 = v39 * *((float *)a2 + 2 * v29 + 4);
      v56 = v54 * *((float *)a2 + 2 * v29 + 3);
      *((float *)a2 + 2 * v29 + 4) = v55;
      *((float *)a2 + 2 * v29 + 3) = v56;
      *((float *)a2 + 2 * v29 + 5) = o_sqrtf_0((float)(v56 * v56) + (float)(v55 * v55));
      v2 = 0;
    }
    else
    {
      v2 = 0;
      *((_DWORD *)a2 + 2 * v29 + 5) = 0;
    }
    goto LABEL_42;
  }
LABEL_44:
  v66 = 0LL;
  if ( v18 == v69 )
    v18 = 0LL;
  DefaultHeap::Free(v18);
}
