/*
 * XREFs of ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IPEBVCMILMatrix@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x1800132D4
 * Callers:
 *     ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x1800B4300 (-Initialize@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@.c)
 * Callees:
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800D7164 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 */

_QWORD *__fastcall SplitVertex(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5, __int64 a6, _QWORD *a7)
{
  __int64 v9; // rdi
  __int64 v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // xmm0_8
  _QWORD *v15; // rcx
  _QWORD *result; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx

  v9 = a6;
  v10 = a3;
  *a5 = *(_QWORD *)a1;
  if ( a4 )
  {
    Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(a1, a2, a3, a4, v9, (__int64)&a5);
    v14 = a5;
  }
  else
  {
    *(_QWORD *)v9 = *(_QWORD *)a1;
    if ( a3 )
    {
      v11 = (_QWORD *)(v9 + 16);
      v12 = a1 - v9;
      v13 = a3;
      do
      {
        *v11 = *(_QWORD *)((char *)v11 + v12);
        ++v11;
        --v13;
      }
      while ( v13 );
    }
    v14 = *(_QWORD **)a2;
  }
  v15 = a7;
  *a7 = v14;
  *(_DWORD *)(v9 + 8) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v9 + 12) = *(_DWORD *)(a1 + 12);
  *((_DWORD *)v15 + 2) = *(_DWORD *)(a2 + 8);
  result = (_QWORD *)*(unsigned int *)(a2 + 12);
  *((_DWORD *)v15 + 3) = (_DWORD)result;
  if ( (_DWORD)v10 )
  {
    result = v15 + 2;
    v17 = a2 - (_QWORD)v15;
    v18 = v10;
    do
    {
      *result = *(_QWORD *)((char *)result + v17);
      ++result;
      --v18;
    }
    while ( v18 );
  }
  return result;
}
