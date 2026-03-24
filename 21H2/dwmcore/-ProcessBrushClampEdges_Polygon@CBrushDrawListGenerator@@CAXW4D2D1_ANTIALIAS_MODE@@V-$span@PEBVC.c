/*
 * XREFs of ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x18019EB58
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094B70 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180098544 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801A2BE0 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 */

_UNKNOWN **__fastcall CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        float *a4,
        __int64 a5)
{
  _UNKNOWN **result; // rax
  signed int v6; // edi
  int v8; // r15d
  int v10; // r14d
  unsigned __int64 v11; // rbx
  __int64 v12; // r10
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float *v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // xmm0_4
  unsigned int v23; // xmm1_4
  unsigned int v24; // xmm0_4
  __int64 v25; // r8
  __int128 v26; // [rsp+28h] [rbp-31h] BYREF
  __int128 v27; // [rsp+38h] [rbp-21h]
  int v28; // [rsp+48h] [rbp-11h]
  float v29[9]; // [rsp+50h] [rbp-9h] BYREF
  float v30[9]; // [rsp+74h] [rbp+1Bh] BYREF
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF

  result = &retaddr;
  v6 = 0;
  v8 = a3;
  v10 = a1;
  if ( *a2 > 0 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= *a2 )
      {
        ((void (__fastcall *)(__int64, __int64 *, __int64, float *, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(
          a1,
          a2,
          a3,
          a4,
          v26);
        __debugbreak();
      }
      v12 = *(_QWORD *)(a2[1] + 8 * v11);
      if ( v12 && *(_BYTE *)(v12 + 52) )
      {
        v13 = *(float *)(v12 + 8);
        v14 = *(float *)(v12 + 12);
        if ( _bittest(&v8, v6) )
        {
          v29[2] = 0.0;
          v29[5] = 0.0;
          v29[0] = v13;
          v15 = *(float *)(v12 + 16);
          v29[1] = v14;
          v16 = *(float *)(v12 + 20);
          v29[3] = v15;
          v17 = *(float *)(v12 + 24);
          v29[4] = v16;
          v18 = *(float *)(v12 + 28);
          v29[6] = v17;
          v29[7] = v18;
          v29[8] = 1.0;
          v19 = Matrix3x3::operator*(v29, v30, a4);
          v20 = *(_OWORD *)v19;
          v21 = *((_OWORD *)v19 + 1);
          *(float *)&v19 = v19[8];
          v26 = v20;
          v28 = (int)v19;
          v27 = v21;
        }
        else
        {
          LODWORD(v26) = *(_DWORD *)(v12 + 8);
          v22 = *(_DWORD *)(v12 + 16);
          *(_QWORD *)((char *)&v26 + 4) = LODWORD(v14);
          v23 = *(_DWORD *)(v12 + 20);
          HIDWORD(v26) = v22;
          v24 = *(_DWORD *)(v12 + 24);
          *(_QWORD *)&v27 = v23;
          *((_QWORD *)&v27 + 1) = __PAIR64__(*(_DWORD *)(v12 + 28), v24);
          v28 = 1065353216;
        }
        if ( v10 == 1 )
          v25 = 0LL;
        else
          v25 = *(unsigned int *)(v12 + 48);
        CEdgeFlagsMap::AddEdgeFlags(a5, v12 + 32, v25, &v26);
      }
      ++v6;
      ++v11;
      result = (_UNKNOWN **)v6;
    }
    while ( v6 < *a2 );
  }
  return result;
}
