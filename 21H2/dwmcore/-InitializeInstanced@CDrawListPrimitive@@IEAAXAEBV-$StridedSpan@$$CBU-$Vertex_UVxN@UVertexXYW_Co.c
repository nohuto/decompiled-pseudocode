/*
 * XREFs of ?InitializeInstanced@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NW4Enum@ParticleSortMode@@@Z @ 0x1801A3850
 * Callers:
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NW4Enum@ParticleSortMode@@PEAPEAV1@@Z @ 0x1801A3758 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 * Callees:
 *     memcpy_0 @ 0x1800F47DB (memcpy_0.c)
 *     ClampScaleFactor @ 0x1801A3708 (ClampScaleFactor.c)
 */

__int64 __fastcall CDrawListPrimitive::InitializeInstanced(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        float *a6,
        __int64 a7,
        int a8)
{
  unsigned int v8; // edi
  unsigned __int64 v11; // rax
  _QWORD *v12; // r9
  const void *v13; // rdx
  size_t v14; // r8
  void *v15; // rcx
  unsigned int v16; // r8d
  __int64 result; // rax
  _QWORD *v18; // r11
  __int64 v19; // r9
  int v20; // r10d
  int v21; // esi
  _QWORD *v22; // rbp
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  __int64 v29; // rdi
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rax

  *(_WORD *)(a1 + 97) = 512;
  v8 = 0;
  *(_BYTE *)(a1 + 96) = 0;
  v11 = ClampScaleFactor(a6);
  v13 = (const void *)v12[1];
  v14 = 2LL * *v12;
  v15 = *(void **)(a1 + 56);
  *(_QWORD *)(a1 + 88) = v11;
  *(_DWORD *)(a1 + 100) = a8;
  memcpy_0(v15, v13, v14);
  memcpy_0(*(void **)(a1 + 64), *(const void **)(a5 + 8), 48LL * *(_QWORD *)a5);
  v16 = *((_DWORD *)a2 + 3);
  result = *(unsigned int *)(a1 + 16);
  v18 = *(_QWORD **)(a1 + 48);
  v19 = *(_QWORD *)(a1 + 32);
  v20 = 8 * result + 16;
  *(_OWORD *)(a1 + 72) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  if ( v16 )
  {
    v21 = 0;
    v22 = v18;
    do
    {
      v23 = *a2;
      v24 = *((_DWORD *)a2 + 2) * v8++;
      v25 = v24;
      result = v21;
      v21 += v20;
      *v22++ = *(_QWORD *)(v25 + *a2);
      *(_OWORD *)(result + v19) = *(_OWORD *)(v25 + v23);
      *(_OWORD *)(result + v19 + 16) = *(_OWORD *)(v25 + v23 + 16);
      v26 = *(float *)(a1 + 76);
      *(float *)(a1 + 72) = fminf(*(float *)(a1 + 72), *(float *)(v25 + v23));
      v27 = *(float *)(a1 + 80);
      *(float *)(a1 + 76) = fminf(v26, *(float *)(v25 + v23 + 4));
      v28 = *(float *)(a1 + 84);
      *(float *)(a1 + 80) = fmaxf(v27, *(float *)(v25 + v23));
      *(float *)(a1 + 84) = fmaxf(v28, *(float *)(v25 + v23 + 4));
    }
    while ( v8 < v16 );
  }
  if ( v16 < *(_DWORD *)(a1 + 8) )
  {
    v29 = v16 - 1;
    v30 = v16 * v20;
    v31 = (int)(v20 * (v16 - 1));
    do
    {
      v32 = v16++;
      v18[v32] = v18[v29];
      result = v30;
      v30 += v20;
      *(_OWORD *)(result + v19) = *(_OWORD *)(v31 + v19);
      *(_OWORD *)(result + v19 + 16) = *(_OWORD *)(v31 + v19 + 16);
    }
    while ( v16 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
