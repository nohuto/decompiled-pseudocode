/*
 * XREFs of ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800558D0
 * Callers:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800552F0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180066E68 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 * Callees:
 *     ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x18001C558 (-SplitVertex@@YAXAEBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR.c)
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x180058580 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180088338 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ?IsCloseRealOneMatrixEpsilon@@YA_NM@Z @ 0x1800E2380 (-IsCloseRealOneMatrixEpsilon@@YA_NM@Z.c)
 *     memcpy_0 @ 0x1800F47DB (memcpy_0.c)
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
  __int64 result; // rax
  float v12; // xmm1_4
  unsigned __int64 v13; // xmm0_8
  bool v14; // zf
  unsigned int v15; // r8d
  __int64 v16; // r11
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  int v19; // r14d
  unsigned int v20; // r15d
  int v21; // r9d
  int v22; // r10d
  __int64 v23; // rbp
  __int64 v24; // r14
  __int64 *v25; // rdi
  float v26; // xmm2_4
  __int64 v27; // rsi
  int v28; // r8d
  int v29; // r9d
  int v30; // r10d
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // xmm0_8
  _QWORD *v34; // rax
  __int64 v35; // rcx
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  unsigned int v39; // ebp
  int v40; // edi
  int v41; // esi
  __int64 v42; // [rsp+40h] [rbp-D8h]
  __int64 v43; // [rsp+48h] [rbp-D0h]
  _QWORD *v44; // [rsp+50h] [rbp-C8h]
  _QWORD *v45; // [rsp+58h] [rbp-C0h]
  __int64 v46; // [rsp+60h] [rbp-B8h] BYREF
  float v47; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+74h] [rbp-A4h]
  __int64 v49; // [rsp+7Ch] [rbp-9Ch]
  int v50; // [rsp+84h] [rbp-94h]
  __int64 v51; // [rsp+88h] [rbp-90h]
  __int128 v52; // [rsp+90h] [rbp-88h]
  __int128 v53; // [rsp+A0h] [rbp-78h]
  int v54; // [rsp+B0h] [rbp-68h]
  int v55; // [rsp+120h] [rbp+8h]
  int v56; // [rsp+128h] [rbp+10h]
  int v59; // [rsp+158h] [rbp+40h]
  int v60; // [rsp+160h] [rbp+48h]

  v9 = a4;
  *(_BYTE *)(a1 + 97) = a9;
  result = a8;
  *(_BYTE *)(a1 + 98) = 0;
  *(_BYTE *)(a1 + 96) = a2;
  if ( *(float *)a8 < 0.0049999999
    || *(float *)a8 > 200.0
    || (v12 = *(float *)(a8 + 4), v12 < 0.0049999999)
    || v12 > 200.0 )
  {
    v13 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  }
  else
  {
    v13 = *(_QWORD *)a8;
  }
  v14 = *(_DWORD *)(a1 + 20) == 0;
  *(_QWORD *)(a1 + 88) = v13;
  if ( v14 )
  {
    *(_OWORD *)(a1 + 72) = 0LL;
  }
  else
  {
    memcpy_0(*(void **)(a1 + 56), Src, 2LL * a7);
    v15 = 0;
    v16 = a3;
    v17 = *(_QWORD **)(a1 + 48);
    v18 = *(_QWORD *)(a1 + 32);
    v19 = 8 * *(_DWORD *)(a1 + 16) + 16;
    v20 = *(_DWORD *)(a3 + 12);
    result = *(_QWORD *)(a1 + 40);
    v43 = result;
    v45 = v17;
    v42 = v18;
    v55 = v19;
    v60 = 0;
    *(_OWORD *)(a1 + 72) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( v20 )
    {
      v21 = 0;
      v22 = 0;
      v56 = 0;
      v59 = 0;
      v44 = v17;
      do
      {
        v23 = v43 + v21;
        v24 = *(_QWORD *)v16 + (int)(v15 * *(_DWORD *)(v16 + 8));
        v25 = (__int64 *)(*(_QWORD *)v9 + (int)(v15 * *(_DWORD *)(v9 + 8)));
        *v17 = *(_QWORD *)v24;
        v26 = *(float *)(a1 + 88);
        v27 = v18 + v22;
        if ( IsCloseRealOne(v26, 0.000081380211) && IsCloseRealOneMatrixEpsilon(*(float *)(a1 + 92)) )
        {
          *(_QWORD *)v27 = *(_QWORD *)v24;
          if ( a5 )
          {
            v31 = (_QWORD *)(v27 + 16);
            v32 = a5;
            do
            {
              *v31 = *(_QWORD *)((char *)v31 + v24 - v27);
              ++v31;
              --v32;
            }
            while ( v32 );
          }
          v33 = *v25;
        }
        else
        {
          v50 = *(_DWORD *)(a1 + 92);
          v52 = _xmm;
          v47 = v26;
          v48 = 0LL;
          v49 = 0LL;
          v51 = 0LL;
          v53 = _xmm;
          v54 = 0;
          Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
            v24,
            (_DWORD)v25,
            a5,
            (unsigned int)&v47,
            v27,
            (__int64)&v46);
          v33 = v46;
          v28 = v60;
          v16 = a3;
          v29 = v59;
          v30 = v56;
        }
        *(_QWORD *)v23 = v33;
        *(_DWORD *)(v27 + 8) = *(_DWORD *)(v24 + 8);
        *(_DWORD *)(v27 + 12) = *(_DWORD *)(v24 + 12);
        *(_DWORD *)(v23 + 8) = *((_DWORD *)v25 + 2);
        *(_DWORD *)(v23 + 12) = *((_DWORD *)v25 + 3);
        if ( a5 )
        {
          v34 = (_QWORD *)(v23 + 16);
          v35 = a5;
          do
          {
            *v34 = *(_QWORD *)((char *)v34 + (_QWORD)v25 - v23);
            ++v34;
            --v35;
          }
          while ( v35 );
        }
        v15 = v28 + 1;
        v36 = *(float *)(a1 + 76);
        v19 = v55;
        v17 = v44 + 1;
        v9 = a4;
        v22 = v55 + v30;
        v18 = v42;
        v21 = v55 + v29;
        *(float *)(a1 + 72) = fminf(*(float *)(a1 + 72), *(float *)v25);
        v37 = *(float *)(a1 + 80);
        v60 = v15;
        v56 = v22;
        v59 = v21;
        ++v44;
        *(float *)(a1 + 76) = fminf(v36, *((float *)v25 + 1));
        v38 = *(float *)(a1 + 84);
        *(float *)(a1 + 80) = fmaxf(v37, *(float *)v25);
        *(float *)(a1 + 84) = fmaxf(v38, *((float *)v25 + 1));
      }
      while ( v15 < v20 );
      result = v43;
      v17 = v45;
    }
    if ( v20 < *(_DWORD *)(a1 + 8) )
    {
      v39 = v20 - 1;
      v40 = v20 * v19;
      v41 = v20 * v19;
      do
      {
        SplitVertex(
          *(_QWORD *)v16 + (int)(*(_DWORD *)(v16 + 8) * v39),
          *(_QWORD *)a4 + (int)(*(_DWORD *)(a4 + 8) * v39),
          a5,
          (float *)(a1 + 88),
          &v17[v20],
          (_QWORD *)(v18 + v40),
          (_QWORD *)(result + v41));
        v16 = a3;
        ++v20;
        v18 = v42;
        v41 += v19;
        result = v43;
        v40 += v19;
        v17 = v45;
      }
      while ( v20 < *(_DWORD *)(a1 + 8) );
    }
  }
  return result;
}
