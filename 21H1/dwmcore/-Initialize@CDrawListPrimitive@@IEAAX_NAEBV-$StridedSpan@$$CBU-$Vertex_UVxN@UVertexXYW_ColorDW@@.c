/*
 * XREFs of ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18004BE40
 * Callers:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18004B860 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x1800755B8 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 * Callees:
 *     ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x18001E5A8 (-SplitVertex@@YAXAEBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR.c)
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800BC8D0 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 */

__int64 __fastcall CDrawListPrimitive::Initialize(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        void *Src,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 result; // rax
  float v13; // xmm1_4
  unsigned __int64 v14; // xmm0_8
  bool v15; // zf
  unsigned int v16; // r11d
  unsigned int v17; // r12d
  _QWORD *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // r14d
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rbp
  __int64 v25; // r14
  __int64 *v26; // rdi
  float v27; // xmm2_4
  __int64 v28; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // xmm0_8
  __int64 v32; // rcx
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  unsigned int v37; // ebp
  int v38; // edi
  int v39; // esi
  __int64 v40; // [rsp+40h] [rbp-F8h]
  __int64 v41; // [rsp+48h] [rbp-F0h]
  _QWORD *v42; // [rsp+50h] [rbp-E8h]
  __int64 v43; // [rsp+58h] [rbp-E0h] BYREF
  _QWORD *v44; // [rsp+60h] [rbp-D8h]
  float v45; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+74h] [rbp-C4h]
  __int64 v47; // [rsp+7Ch] [rbp-BCh]
  int v48; // [rsp+84h] [rbp-B4h]
  __int64 v49; // [rsp+88h] [rbp-B0h]
  __int128 v50; // [rsp+90h] [rbp-A8h]
  __int128 v51; // [rsp+A0h] [rbp-98h]
  int v52; // [rsp+B0h] [rbp-88h]
  int v53; // [rsp+140h] [rbp+8h]
  int v54; // [rsp+148h] [rbp+10h]
  int v57; // [rsp+178h] [rbp+40h]
  int v58; // [rsp+180h] [rbp+48h]

  v9 = a4;
  v10 = a3;
  *(_BYTE *)(a1 + 97) = a9;
  result = a8;
  *(_BYTE *)(a1 + 98) = 0;
  *(_BYTE *)(a1 + 96) = a2;
  if ( *(float *)a8 < 0.0049999999
    || *(float *)a8 > 200.0
    || (v13 = *(float *)(a8 + 4), v13 < 0.0049999999)
    || v13 > 200.0 )
  {
    v14 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  }
  else
  {
    v14 = *(_QWORD *)a8;
  }
  v15 = *(_DWORD *)(a1 + 20) == 0;
  *(_QWORD *)(a1 + 88) = v14;
  if ( v15 )
  {
    *(_OWORD *)(a1 + 72) = 0LL;
  }
  else
  {
    memcpy_0(*(void **)(a1 + 56), Src, 2LL * a7);
    v16 = *(_DWORD *)(v10 + 12);
    v17 = 0;
    result = *(unsigned int *)(a1 + 16);
    v18 = *(_QWORD **)(a1 + 48);
    v19 = *(_QWORD *)(a1 + 32);
    v20 = *(_QWORD *)(a1 + 40);
    v21 = 8 * result + 16;
    v53 = v21;
    v44 = v18;
    v40 = v19;
    v41 = v20;
    v58 = v16;
    *(_OWORD *)(a1 + 72) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( v16 )
    {
      v22 = 0;
      v23 = 0;
      v54 = 0;
      v57 = 0;
      v42 = v18;
      do
      {
        v24 = v20 + v22;
        v25 = *(_QWORD *)v10 + (int)(v17 * *(_DWORD *)(v10 + 8));
        v26 = (__int64 *)(*(_QWORD *)v9 + (int)(v17 * *(_DWORD *)(v9 + 8)));
        *v18 = *(_QWORD *)v25;
        v27 = *(float *)(a1 + 88);
        v28 = v19 + v23;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 - 1.0) & _xmm) >= 0.0000011920929
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 92) - 1.0) & _xmm) >= 0.0000011920929 )
        {
          v48 = *(_DWORD *)(a1 + 92);
          v51 = _xmm;
          v45 = v27;
          v46 = 0LL;
          v47 = 0LL;
          v49 = 0LL;
          v50 = _xmm;
          v52 = 0;
          Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
            v25,
            (_DWORD)v26,
            a5,
            (unsigned int)&v45,
            v28,
            (__int64)&v43);
          v31 = v43;
          v22 = v57;
          v23 = v54;
          v18 = v42;
          v16 = v58;
        }
        else
        {
          *(_QWORD *)v28 = *(_QWORD *)v25;
          if ( a5 )
          {
            v29 = (_QWORD *)(v28 + 16);
            v30 = a5;
            do
            {
              *v29 = *(_QWORD *)((char *)v29 + v25 - v28);
              ++v29;
              --v30;
            }
            while ( v30 );
          }
          v31 = *v26;
        }
        *(_QWORD *)v24 = v31;
        *(_DWORD *)(v28 + 8) = *(_DWORD *)(v25 + 8);
        *(_DWORD *)(v28 + 12) = *(_DWORD *)(v25 + 12);
        *(_DWORD *)(v24 + 8) = *((_DWORD *)v26 + 2);
        result = *((unsigned int *)v26 + 3);
        *(_DWORD *)(v24 + 12) = result;
        if ( a5 )
        {
          result = v24 + 16;
          v32 = a5;
          do
          {
            *(_QWORD *)result = *(__int64 *)((char *)v26 + result - v24);
            result += 8LL;
            --v32;
          }
          while ( v32 );
        }
        ++v18;
        v33 = *(float *)(a1 + 76);
        ++v17;
        v21 = v53;
        v23 += v53;
        v9 = a4;
        v22 += v53;
        v19 = v40;
        v20 = v41;
        *(float *)(a1 + 72) = fminf(*(float *)(a1 + 72), *(float *)v26);
        v34 = *(float *)(a1 + 80);
        v54 = v23;
        v57 = v22;
        v42 = v18;
        *(float *)(a1 + 76) = fminf(v33, *((float *)v26 + 1));
        v35 = *(float *)(a1 + 84);
        *(float *)(a1 + 80) = fmaxf(v34, *(float *)v26);
        v36 = fmaxf(v35, *((float *)v26 + 1));
        v10 = a3;
        *(float *)(a1 + 84) = v36;
      }
      while ( v17 < v16 );
    }
    if ( v16 < *(_DWORD *)(a1 + 8) )
    {
      v37 = v16 - 1;
      v38 = v16 * v21;
      v39 = v16 * v21;
      do
      {
        result = (__int64)SplitVertex(
                            *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * v37),
                            *(_QWORD *)a4 + (int)(*(_DWORD *)(a4 + 8) * v37),
                            a5,
                            (float *)(a1 + 88),
                            &v44[v16],
                            (_QWORD *)(v19 + v38),
                            (_QWORD *)(v20 + v39));
        v39 += v21;
        v19 = v40;
        v16 = v58 + 1;
        v20 = v41;
        v38 += v21;
        v58 = v16;
      }
      while ( v16 < *(_DWORD *)(a1 + 8) );
    }
  }
  return result;
}
