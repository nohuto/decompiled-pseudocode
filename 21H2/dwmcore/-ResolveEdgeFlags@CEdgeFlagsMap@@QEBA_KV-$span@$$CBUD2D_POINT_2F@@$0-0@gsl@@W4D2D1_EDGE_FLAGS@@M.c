/*
 * XREFs of ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBA_KV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@MPEAW44@PEA_N@Z @ 0x1800CA1D8
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CEdgeFlagsMap::ResolveEdgeFlags(
        __int64 *a1,
        unsigned __int64 *a2,
        char a3,
        float a4,
        int *a5,
        bool *a6)
{
  int v6; // r9d
  __int64 v7; // rsi
  __int64 *v9; // r10
  bool *v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbp
  unsigned int v14; // r11d
  int v15; // r8d
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rbx
  float v20; // xmm1_4
  float v21; // xmm0_4
  __int64 v23; // r15
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int64 v26; // r15
  char v27; // r8
  __int64 v28; // rcx
  int *v29; // rdi

  v6 = a3 & 3;
  v7 = 0LL;
  v9 = a1;
  if ( ((a1[1] - *a1) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    v10 = a6;
    v11 = 0LL;
    *a6 = 0;
    if ( *a2 )
    {
      do
      {
        if ( v11 >= *a2 || (a1 = (__int64 *)a2[1], v12 = v11 + 1, v13 = (v11 + 1) % *a2, v13 >= *a2) )
        {
          gsl::details::terminate((gsl::details *)a1);
          JUMPOUT(0x1800CA398LL);
        }
        v14 = 0;
        v15 = v6;
        v16 = (v9[1] - *v9) >> 2;
        if ( v16 )
        {
          v17 = v9[11];
          v18 = 0LL;
          while ( 1 )
          {
            v19 = v9[30];
            v20 = (float)(*((float *)&a1[v11] + 1) - *(float *)(v17 + 8 * v18 + 4)) * *(float *)(v19 + 8 * v18);
            v21 = (float)(*(float *)&a1[v11] - *(float *)(v17 + 8 * v18)) * *(float *)(v19 + 8 * v18 + 4);
            v10 = a6;
            if ( a4 > COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - v21) & _xmm) )
            {
              v23 = v9[30];
              v24 = (float)(*((float *)&a1[v13] + 1) - *(float *)(v17 + 8 * v18 + 4)) * *(float *)(v23 + 8 * v18);
              v25 = (float)(*(float *)&a1[v13] - *(float *)(v17 + 8 * v18)) * *(float *)(v23 + 8 * v18 + 4);
              v26 = *v9;
              if ( a4 > COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - v25) & _xmm) )
                break;
            }
            v18 = ++v14;
            if ( v14 >= v16 )
              goto LABEL_9;
          }
          a1 = (__int64 *)(*(_DWORD *)(v26 + 4 * v18) | 1u);
          if ( (*(_DWORD *)(v26 + 4 * v18) & 0x1010101) == 0 )
            a1 = (__int64 *)*(unsigned int *)(v26 + 4 * v18);
          v27 = (unsigned __int8)a1 | 2;
          if ( ((unsigned int)a1 & 0x2020202) == 0 )
            v27 = (char)a1;
          v15 = v27 & 3;
          ++v7;
        }
LABEL_9:
        if ( v15 == 3 )
          *v10 = 1;
        a5[v11++] = v15;
      }
      while ( v12 < *a2 );
    }
  }
  else
  {
    *a6 = v6 == 3;
    if ( *a2 )
    {
      v28 = *(unsigned int *)a2;
      v29 = a5;
      while ( v28 )
      {
        *v29++ = v6;
        --v28;
      }
    }
  }
  return v7;
}
