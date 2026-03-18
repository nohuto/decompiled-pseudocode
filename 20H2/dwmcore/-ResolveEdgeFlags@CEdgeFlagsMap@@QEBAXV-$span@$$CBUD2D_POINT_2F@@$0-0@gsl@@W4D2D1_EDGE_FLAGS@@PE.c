/*
 * XREFs of ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1801A2658
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800A08F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180179D04 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019CCB4 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vlibe.c)
 *     ?insert@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@2@V?$basic_iterator@$$CBW4D2D1_EDGE_FLAGS@@@2@_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1801A2900 (-insert@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_ex.c)
 */

unsigned __int64 __fastcall CEdgeFlagsMap::ResolveEdgeFlags(
        _QWORD *a1,
        unsigned __int64 *a2,
        int a3,
        __int64 *a4,
        _BYTE *a5)
{
  __int64 v5; // rbp
  unsigned int v7; // edi
  __int64 v9; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _BYTE *v16; // r13
  int v17; // r12d
  __int64 v18; // r15
  __int64 v19; // rbx
  int v20; // r8d
  char v21; // r11
  unsigned __int64 v22; // rdx
  unsigned int v23; // r10d
  __int64 v24; // rcx
  float *v25; // r9
  __int64 v26; // r13
  float v27; // xmm1_4
  float v28; // xmm0_4
  __int64 v29; // r13
  float v30; // xmm1_4
  float v31; // xmm0_4
  int v32; // edx
  char v33; // cl
  __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  float *v35; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 *v36; // [rsp+A8h] [rbp+10h]
  __int64 v37; // [rsp+B8h] [rbp+20h] BYREF

  v36 = a2;
  v5 = *a2;
  v7 = 0;
  v9 = a4[1];
  v11 = *a4;
  LODWORD(v35) = 0;
  v12 = (v9 - v11) >> 2;
  if ( v5 <= v12 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
      a4,
      (4 * v5) >> 2,
      (v9 - (v11 + 4 * v5)) >> 2);
  }
  else
  {
    v37 = v9;
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::insert(
      (_DWORD)a4,
      (unsigned int)&v34,
      (unsigned int)&v37,
      v5 - v12,
      (__int64)&v35);
  }
  result = a1[1] - *a1;
  if ( (result & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    v16 = a5;
    v17 = 0;
    *a5 = 0;
    if ( v5 > 0 )
    {
      v18 = 0LL;
      do
      {
        v19 = v17 + 1LL;
        v37 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](v36, v17);
        result = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](v36, v19 % v5);
        v20 = 0;
        v21 = 0;
        v22 = (__int64)(a1[1] - *a1) >> 2;
        v23 = 0;
        v35 = (float *)result;
        if ( v22 )
        {
          v24 = a1[11];
          result = 0LL;
          v25 = (float *)v37;
          do
          {
            v26 = a1[30];
            v27 = (float)(v25[1] - *(float *)(v24 + 8 * result + 4)) * *(float *)(v26 + 8 * result);
            v28 = (float)(*v25 - *(float *)(v24 + 8 * result)) * *(float *)(v26 + 8 * result + 4);
            v16 = a5;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 - v28) & _xmm) < 0.0000011920929 )
            {
              v29 = a1[30];
              v25 = (float *)v37;
              v30 = (float)(v35[1] - *(float *)(v24 + 8 * result + 4)) * *(float *)(v29 + 8 * result);
              v31 = (float)(*v35 - *(float *)(v24 + 8 * result)) * *(float *)(v29 + 8 * result + 4);
              v16 = a5;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 - v31) & _xmm) < 0.0000011920929 )
              {
                v21 = 1;
                v20 |= *(_DWORD *)(*a1 + 4 * result);
                if ( (v20 & 0x1010101) != 0 && (v20 & 0x2020202) != 0 )
                  goto LABEL_19;
                v24 = a1[11];
              }
            }
            result = ++v23;
          }
          while ( v23 < v22 );
          if ( !v21 )
            goto LABEL_24;
LABEL_19:
          v32 = v20 | 1;
          if ( (v20 & 0x1010101) == 0 )
            v32 = v20;
          v33 = v32 | 2;
          result = *a4;
          if ( (v32 & 0x2020202) == 0 )
            v33 = v32;
          *(_DWORD *)(v18 + result) = v33 & 3;
        }
        else
        {
LABEL_24:
          *v16 = 1;
        }
        ++v17;
        v18 += 4LL;
      }
      while ( v19 < v5 );
    }
  }
  else
  {
    v14 = *a4;
    *a5 = 1;
    result = (a4[1] - v14) >> 2;
    if ( result )
    {
      v15 = 0LL;
      do
      {
        *(_DWORD *)(v14 + 4 * v15) = a3;
        ++v7;
        v14 = *a4;
        v15 = v7;
        result = (a4[1] - *a4) >> 2;
      }
      while ( v7 < result );
    }
  }
  return result;
}
