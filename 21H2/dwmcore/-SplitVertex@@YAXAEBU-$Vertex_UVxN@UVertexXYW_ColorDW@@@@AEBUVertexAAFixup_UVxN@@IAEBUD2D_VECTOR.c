/*
 * XREFs of ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x18001C558
 * Callers:
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800558D0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 * Callees:
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x180058580 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180088338 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ?IsCloseRealOneMatrixEpsilon@@YA_NM@Z @ 0x1800E2380 (-IsCloseRealOneMatrixEpsilon@@YA_NM@Z.c)
 */

_QWORD *__fastcall SplitVertex(__int64 a1, __int64 a2, unsigned int a3, float *a4, _QWORD *a5, _QWORD *a6, _QWORD *a7)
{
  __int64 v9; // r14
  float v10; // xmm2_4
  int v11; // edx
  char *v12; // rcx
  __int64 v13; // r9
  int v14; // r8d
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  signed __int64 v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // xmm0_8
  int v20; // xmm0_4
  _QWORD *v21; // rcx
  _QWORD *result; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  _DWORD v25[8]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+50h] [rbp-30h]
  __int128 v27; // [rsp+60h] [rbp-20h]
  int v28; // [rsp+70h] [rbp-10h]

  v9 = a3;
  *a5 = *(_QWORD *)a1;
  v10 = *a4;
  if ( IsCloseRealOne(*a4, 0.000081380211) && IsCloseRealOneMatrixEpsilon(*(float *)(v13 + 4)) )
  {
    v15 = a6;
    *a6 = *(_QWORD *)v12;
    if ( v14 )
    {
      v16 = v15 + 2;
      v17 = v12 - (char *)v15;
      v18 = (unsigned int)v9;
      do
      {
        *v16 = *(_QWORD *)((char *)v16 + v17);
        ++v16;
        --v18;
      }
      while ( v18 );
    }
    v19 = *(_QWORD **)a2;
  }
  else
  {
    v20 = *(_DWORD *)(v13 + 4);
    v15 = a6;
    v25[1] = 0;
    v25[2] = 0;
    v25[3] = 0;
    v25[4] = 0;
    v25[6] = 0;
    v25[7] = 0;
    v28 = 0;
    v25[5] = v20;
    v26 = _xmm;
    *(float *)v25 = v10;
    v27 = _xmm;
    Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
      (_DWORD)v12,
      v11,
      v9,
      (unsigned int)v25,
      (__int64)a6,
      (__int64)&a5);
    v19 = a5;
  }
  v21 = a7;
  *a7 = v19;
  *((_DWORD *)v15 + 2) = *(_DWORD *)(a1 + 8);
  *((_DWORD *)v15 + 3) = *(_DWORD *)(a1 + 12);
  *((_DWORD *)v21 + 2) = *(_DWORD *)(a2 + 8);
  result = (_QWORD *)*(unsigned int *)(a2 + 12);
  *((_DWORD *)v21 + 3) = (_DWORD)result;
  if ( (_DWORD)v9 )
  {
    result = v21 + 2;
    v23 = a2 - (_QWORD)v21;
    v24 = v9;
    do
    {
      *result = *(_QWORD *)((char *)result + v23);
      ++result;
      --v24;
    }
    while ( v24 );
  }
  return result;
}
