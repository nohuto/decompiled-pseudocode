/*
 * XREFs of ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x1800B4300
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x1800B3CC4 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B3EB0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 * Callees:
 *     ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IPEBVCMILMatrix@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x1800132D4 (-SplitVertex@@YAXAEBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IPEBVCMILMatrix.c)
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800D7164 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800D9AAC (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

char __fastcall CDrawListPrimitive::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        unsigned int a6,
        float *a7,
        char a8)
{
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rbp
  __int64 v13; // r15
  float v14; // xmm1_4
  unsigned __int64 v15; // xmm0_8
  bool v16; // zf
  _QWORD *v17; // rdx
  __int64 v18; // r10
  int v19; // r13d
  __int64 v20; // r11
  unsigned int v21; // r9d
  float v22; // xmm0_4
  unsigned int v23; // r12d
  _BYTE *v24; // rcx
  int v25; // r13d
  _QWORD *v26; // r8
  __int64 v27; // rsi
  __int64 *v28; // rdi
  __int64 v29; // r14
  __int64 v30; // rbp
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // xmm0_8
  __int64 v34; // rcx
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  unsigned int v38; // esi
  int v39; // edi
  __int64 v40; // r10
  _QWORD *v41; // r8
  _QWORD *v42; // r11
  _BYTE *v43; // r9
  int v45; // [rsp+40h] [rbp-D8h]
  __int64 v46; // [rsp+48h] [rbp-D0h]
  __int64 v47; // [rsp+50h] [rbp-C8h]
  _QWORD *v48; // [rsp+58h] [rbp-C0h]
  _QWORD *v49; // [rsp+60h] [rbp-B8h]
  __int64 v50; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE *v51; // [rsp+70h] [rbp-A8h]
  _BYTE v52[64]; // [rsp+80h] [rbp-98h] BYREF
  int v53; // [rsp+C0h] [rbp-58h]
  int v54; // [rsp+120h] [rbp+8h]
  unsigned int v57; // [rsp+150h] [rbp+38h]
  char v58; // [rsp+158h] [rbp+40h]

  v9 = a3;
  LOBYTE(v10) = a8;
  v11 = a2;
  *(_BYTE *)(a1 + 96) = a8;
  v13 = a4;
  if ( *a7 < 0.0049999999 || *a7 > 200.0 || (v14 = a7[1], v14 < 0.0049999999) || v14 > 200.0 )
    v15 = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  else
    v15 = *(_QWORD *)a7;
  v16 = *(_DWORD *)(a1 + 20) == 0;
  *(_QWORD *)(a1 + 88) = v15;
  if ( v16 )
  {
    *(_OWORD *)(a1 + 72) = 0LL;
  }
  else
  {
    memcpy_0(*(void **)(a1 + 56), Src, 2LL * a6);
    v17 = *(_QWORD **)(a1 + 48);
    v18 = *(_QWORD *)(a1 + 32);
    v19 = 8 * *(_DWORD *)(a1 + 16) + 16;
    v20 = *(_QWORD *)(a1 + 40);
    LOBYTE(v10) = 0;
    v21 = *(_DWORD *)(v11 + 12);
    LODWORD(v22) = COERCE_UNSIGNED_INT(*(float *)(a1 + 88) - 1.0) & _xmm;
    v49 = v17;
    v46 = v18;
    v45 = v19;
    v47 = v20;
    v54 = v19;
    v57 = v21;
    v53 = 0;
    v58 = 0;
    if ( v22 >= 0.000081380211 || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 92) - 1.0) & _xmm) >= 0.000081380211 )
    {
      CMILMatrix::SetScale((CMILMatrix *)v52, *a7, a7[1], 1.0, 0.0, 0.0, 0.0);
      v21 = v57;
      LOBYTE(v10) = 1;
      v18 = v46;
      v20 = v47;
      v17 = v49;
      v58 = 1;
    }
    v23 = 0;
    *(_OWORD *)(a1 + 72) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
    if ( v21 )
    {
      v48 = v17;
      v24 = v52;
      v25 = 0;
      if ( !(_BYTE)v10 )
        v24 = 0LL;
      v26 = v17;
      v51 = v24;
      do
      {
        v27 = *(_QWORD *)v11 + (int)(v23 * *(_DWORD *)(v11 + 8));
        v28 = (__int64 *)(*(_QWORD *)v9 + (int)(v23 * *(_DWORD *)(v9 + 8)));
        *v26 = *(_QWORD *)v27;
        v29 = v18 + v25;
        v30 = v20 + v25;
        if ( v24 )
        {
          Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
            v27,
            (_DWORD)v28,
            v13,
            (_DWORD)v24,
            v18 + v25,
            (__int64)&v50);
          v33 = v50;
          v26 = v48;
          v21 = v57;
          v18 = v46;
          v20 = v47;
        }
        else
        {
          *(_QWORD *)v29 = *(_QWORD *)v27;
          if ( (_DWORD)v13 )
          {
            v31 = (_QWORD *)(v29 + 16);
            v32 = v13;
            do
            {
              *v31 = *(_QWORD *)((char *)v31 + v27 - v29);
              ++v31;
              --v32;
            }
            while ( v32 );
          }
          v33 = *v28;
        }
        *(_QWORD *)v30 = v33;
        *(_DWORD *)(v29 + 8) = *(_DWORD *)(v27 + 8);
        *(_DWORD *)(v29 + 12) = *(_DWORD *)(v27 + 12);
        *(_DWORD *)(v30 + 8) = *((_DWORD *)v28 + 2);
        LODWORD(v10) = *((_DWORD *)v28 + 3);
        *(_DWORD *)(v30 + 12) = (_DWORD)v10;
        if ( (_DWORD)v13 )
        {
          v10 = (_QWORD *)(v30 + 16);
          v34 = v13;
          do
          {
            *v10 = *(_QWORD *)((char *)v10 + (_QWORD)v28 - v30);
            ++v10;
            --v34;
          }
          while ( v34 );
        }
        ++v26;
        v35 = *(float *)(a1 + 76);
        ++v23;
        v25 += v45;
        v24 = v51;
        v11 = a2;
        v9 = a3;
        *(float *)(a1 + 72) = fminf(*(float *)(a1 + 72), *(float *)v28);
        v36 = *(float *)(a1 + 80);
        v48 = v26;
        *(float *)(a1 + 76) = fminf(v35, *((float *)v28 + 1));
        v37 = *(float *)(a1 + 84);
        *(float *)(a1 + 80) = fmaxf(v36, *(float *)v28);
        *(float *)(a1 + 84) = fmaxf(v37, *((float *)v28 + 1));
      }
      while ( v23 < v21 );
      v19 = v54;
    }
    if ( v21 < *(_DWORD *)(a1 + 8) )
    {
      v38 = v21 - 1;
      v39 = v21 * v19;
      do
      {
        v40 = v39 + v18;
        v41 = (_QWORD *)(v20 + v39);
        v42 = &v49[v21];
        if ( v58 )
          v43 = v52;
        else
          v43 = 0LL;
        LOBYTE(v10) = (unsigned __int8)SplitVertex(
                                         *(_QWORD *)v11 + (int)(*(_DWORD *)(v11 + 8) * v38),
                                         *(_QWORD *)v9 + (int)(*(_DWORD *)(v9 + 8) * v38),
                                         v13,
                                         (__int64)v43,
                                         v42,
                                         v40,
                                         v41);
        v39 += v54;
        v21 = v57 + 1;
        v18 = v46;
        v20 = v47;
        v57 = v21;
      }
      while ( v21 < *(_DWORD *)(a1 + 8) );
    }
  }
  return (char)v10;
}
