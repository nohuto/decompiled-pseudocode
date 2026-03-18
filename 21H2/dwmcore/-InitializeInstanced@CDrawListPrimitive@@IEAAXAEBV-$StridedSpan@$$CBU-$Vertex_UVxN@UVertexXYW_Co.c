/*
 * XREFs of ?InitializeInstanced@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NW4Enum@ParticleSortMode@@@Z @ 0x1801E890C
 * Callers:
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NW4Enum@ParticleSortMode@@PEAPEAV1@@Z @ 0x1801E8814 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 * Callees:
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ClampScaleFactor @ 0x1801E87C4 (ClampScaleFactor.c)
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
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned int v15; // r8d
  __int64 result; // rax
  _QWORD *v17; // r11
  __int64 v18; // r9
  int v19; // r10d
  int v20; // ebp
  _QWORD *v21; // r14
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  __int64 v28; // rdi
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rax

  v8 = 0;
  *(_BYTE *)(a1 + 96) = 0;
  v11 = ClampScaleFactor(a6);
  v14 = *(_QWORD *)v13;
  *(_DWORD *)(a1 + 100) = a8;
  *(_QWORD *)(a1 + 88) = v11;
  if ( v14 >= 0x7FFFFFFFFFFFFFFFLL
    || (memcpy_0(*(void **)(a1 + 56), *(const void **)(v13 + 8), 2 * v14),
        v12 = 0x555555555555555LL,
        *(_QWORD *)a5 >= 0x555555555555555uLL) )
  {
    gsl::details::terminate((gsl::details *)v12);
    JUMPOUT(0x1801E8ABBLL);
  }
  memcpy_0(*(void **)(a1 + 64), *(const void **)(a5 + 8), 48LL * *(_QWORD *)a5);
  v15 = *((_DWORD *)a2 + 3);
  result = *(unsigned int *)(a1 + 16);
  v17 = *(_QWORD **)(a1 + 48);
  v18 = *(_QWORD *)(a1 + 32);
  v19 = 8 * result + 16;
  *(_OWORD *)(a1 + 72) = _xmm_ff7fffffff7fffff7f7fffff7f7fffff;
  if ( v15 )
  {
    v20 = 0;
    v21 = v17;
    do
    {
      v22 = *a2;
      v23 = v8 * *((_DWORD *)a2 + 2);
      ++v8;
      v24 = v23;
      result = v20;
      v20 += v19;
      *v21++ = *(_QWORD *)(v24 + *a2);
      *(_OWORD *)(result + v18) = *(_OWORD *)(v24 + v22);
      *(_OWORD *)(result + v18 + 16) = *(_OWORD *)(v24 + v22 + 16);
      v25 = *(float *)(a1 + 76);
      *(float *)(a1 + 72) = fminf(*(float *)(a1 + 72), *(float *)(v24 + v22));
      v26 = *(float *)(a1 + 80);
      *(float *)(a1 + 76) = fminf(v25, *(float *)(v24 + v22 + 4));
      v27 = *(float *)(a1 + 84);
      *(float *)(a1 + 80) = fmaxf(v26, *(float *)(v24 + v22));
      *(float *)(a1 + 84) = fmaxf(v27, *(float *)(v24 + v22 + 4));
    }
    while ( v8 < v15 );
  }
  if ( v15 < *(_DWORD *)(a1 + 8) )
  {
    v28 = v15 - 1;
    v29 = v15 * v19;
    v30 = (int)(v19 * (v15 - 1));
    do
    {
      v31 = v15++;
      v17[v31] = v17[v28];
      result = v29;
      v29 += v19;
      *(_OWORD *)(result + v18) = *(_OWORD *)(v30 + v18);
      *(_OWORD *)(result + v18 + 16) = *(_OWORD *)(v30 + v18 + 16);
    }
    while ( v15 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
