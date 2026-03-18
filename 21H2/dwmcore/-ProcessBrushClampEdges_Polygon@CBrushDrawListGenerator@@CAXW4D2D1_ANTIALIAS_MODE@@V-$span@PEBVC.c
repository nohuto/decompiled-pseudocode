/*
 * XREFs of ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801E6300
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800A8F20 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180056568 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1800B9CE4 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 *     ??A?$span@PEBVCDrawListBrush@@$0?0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z @ 0x1800EAF50 (--A-$span@PEBVCDrawListBrush@@$0-0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z.c)
 */

__int64 *__fastcall CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        int a1,
        gsl::details *a2,
        int a3,
        float *a4,
        __int64 a5)
{
  __int64 *result; // rax
  unsigned __int64 i; // rbx
  __int64 v11; // r10
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float *v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // xmm0_4
  unsigned int v22; // xmm1_4
  unsigned int v23; // xmm0_4
  int v24; // r8d
  __int128 v25; // [rsp+28h] [rbp-31h] BYREF
  __int128 v26; // [rsp+38h] [rbp-21h]
  int v27; // [rsp+48h] [rbp-11h]
  float v28[9]; // [rsp+50h] [rbp-9h] BYREF
  float v29[9]; // [rsp+74h] [rbp+1Bh] BYREF
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF

  result = (__int64 *)&retaddr;
  for ( i = 0LL; i < *(_QWORD *)a2; ++i )
  {
    result = (__int64 *)gsl::span<CDrawListBrush const *,-1>::operator[](a2, i);
    v11 = *result;
    if ( *result && *(_BYTE *)(v11 + 52) )
    {
      v12 = *(float *)(v11 + 8);
      v13 = *(float *)(v11 + 12);
      if ( ((1 << i) & a3) != 0 )
      {
        v28[2] = 0.0;
        v28[5] = 0.0;
        v28[0] = v12;
        v14 = *(float *)(v11 + 16);
        v28[1] = v13;
        v15 = *(float *)(v11 + 20);
        v28[3] = v14;
        v16 = *(float *)(v11 + 24);
        v28[4] = v15;
        v17 = *(float *)(v11 + 28);
        v28[6] = v16;
        v28[7] = v17;
        v28[8] = 1.0;
        v18 = Matrix3x3::operator*(v28, v29, a4);
        v19 = *(_OWORD *)v18;
        v20 = *((_OWORD *)v18 + 1);
        *(float *)&v18 = v18[8];
        v25 = v19;
        v27 = (int)v18;
        v26 = v20;
      }
      else
      {
        LODWORD(v25) = *(_DWORD *)(v11 + 8);
        v21 = *(_DWORD *)(v11 + 16);
        *(_QWORD *)((char *)&v25 + 4) = LODWORD(v13);
        v22 = *(_DWORD *)(v11 + 20);
        HIDWORD(v25) = v21;
        v23 = *(_DWORD *)(v11 + 24);
        *(_QWORD *)&v26 = v22;
        *((_QWORD *)&v26 + 1) = __PAIR64__(*(_DWORD *)(v11 + 28), v23);
        v27 = 1065353216;
      }
      if ( a1 == 1 )
        v24 = 0;
      else
        v24 = *(_DWORD *)(v11 + 48);
      result = (__int64 *)CEdgeFlagsMap::AddEdgeFlags(a5, (float *)(v11 + 32), v24, (float *)&v25);
    }
  }
  return result;
}
