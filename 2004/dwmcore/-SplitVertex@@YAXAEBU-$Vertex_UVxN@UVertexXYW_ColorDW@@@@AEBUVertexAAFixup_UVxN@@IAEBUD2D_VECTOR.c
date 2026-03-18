/*
 * XREFs of ?SplitVertex@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBUD2D_VECTOR_2F@@PEAUD2D_POINT_2F@@PEAU1@PEAU2@@Z @ 0x18001DC00
 * Callers:
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x180054600 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 * Callees:
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x1800C2828 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 */

_QWORD *__fastcall SplitVertex(__int64 a1, __int64 a2, unsigned int a3, float *a4, _QWORD *a5, _QWORD *a6, _QWORD *a7)
{
  float v9; // xmm5_4
  __int64 v10; // r14
  float v11; // xmm1_4
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // xmm0_8
  _QWORD *v17; // rcx
  _QWORD *result; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  _DWORD v21[8]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h]
  __int128 v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+70h] [rbp-10h]

  *a5 = *(_QWORD *)a1;
  v9 = *a4;
  v10 = a3;
  v11 = a4[1];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*a4 - 1.0) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v12 = a6;
    v21[1] = 0;
    v21[2] = 0;
    v21[3] = 0;
    v21[4] = 0;
    v21[6] = 0;
    v21[7] = 0;
    v24 = 0;
    *(float *)&v21[5] = v11;
    v23 = _xmm;
    *(float *)v21 = v9;
    v22 = _xmm;
    Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(a1, a2, a3, (unsigned int)v21, (__int64)a6, (__int64)&a5);
    v16 = a5;
  }
  else
  {
    v12 = a6;
    *a6 = *(_QWORD *)a1;
    if ( a3 )
    {
      v13 = v12 + 2;
      v14 = a1 - (_QWORD)v12;
      v15 = a3;
      do
      {
        *v13 = *(_QWORD *)((char *)v13 + v14);
        ++v13;
        --v15;
      }
      while ( v15 );
    }
    v16 = *(_QWORD **)a2;
  }
  v17 = a7;
  *a7 = v16;
  *((_DWORD *)v12 + 2) = *(_DWORD *)(a1 + 8);
  *((_DWORD *)v12 + 3) = *(_DWORD *)(a1 + 12);
  *((_DWORD *)v17 + 2) = *(_DWORD *)(a2 + 8);
  result = (_QWORD *)*(unsigned int *)(a2 + 12);
  *((_DWORD *)v17 + 3) = (_DWORD)result;
  if ( (_DWORD)v10 )
  {
    result = v17 + 2;
    v19 = a2 - (_QWORD)v17;
    v20 = v10;
    do
    {
      *result = *(_QWORD *)((char *)result + v19);
      ++result;
      --v20;
    }
    while ( v20 );
  }
  return result;
}
