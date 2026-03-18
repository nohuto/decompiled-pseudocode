/*
 * XREFs of bCvtPts @ 0x1C00C38C4
 * Callers:
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C00C3810 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C013EA60 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C013EAD0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 * Callees:
 *     bFToL @ 0x1C009B360 (bFToL.c)
 */

__int64 __fastcall bCvtPts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  int *v5; // rsi
  __int64 v6; // rdi
  signed __int64 v8; // rsi
  int v9; // eax
  float v11; // xmm3_4
  float v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  float v20; // xmm3_4
  float v21; // xmm2_4
  unsigned int v22; // r8d
  int v23[6]; // [rsp+20h] [rbp-18h] BYREF
  float v24; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)a3;
  v5 = (int *)a2;
  LODWORD(a3) = 0;
  LODWORD(a2) = 0;
  v24 = 0.0;
  v6 = a4;
  v23[0] = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) == 0 )
  {
LABEL_29:
    if ( a4 )
    {
      do
      {
        v20 = (float)*v5;
        v21 = (float)v5[1];
        bFToL((float)(v21 * *(float *)(a1 + 8)) + (float)(v20 * *(float *)a1), (int *)&v24, 6u);
        bFToL((float)(v20 * *(float *)(a1 + 4)) + (float)(v21 * *(float *)(a1 + 12)), v23, v22);
        v5 += 2;
        *(_DWORD *)v4 = *(_DWORD *)(a1 + 24) + LODWORD(v24);
        *((_DWORD *)v4 + 1) = v23[0] + *(_DWORD *)(a1 + 28);
        v4 += 8;
        --v6;
      }
      while ( v6 );
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0xB) == 1 )
  {
LABEL_11:
    if ( a4 )
    {
      do
      {
        v11 = (float)v5[1] * *(float *)(a1 + 12);
        v12 = (float)*v5 * *(float *)a1;
        v13 = (unsigned __int8)(SLODWORD(v12) >> 23);
        if ( v13 <= 0x9E )
        {
          v14 = LODWORD(v12) & 0x7FFFFF | 0x800000LL;
          v15 = v13 < 0x76 ? v14 >> (118 - (unsigned __int8)v13) : v14 << ((unsigned __int8)v13 - 118);
          a3 = (v15 + 0x80000000LL) >> 32;
          if ( v12 < 0.0 )
            LODWORD(a3) = -(int)a3;
        }
        v24 = (float)v5[1] * *(float *)(a1 + 12);
        v16 = (unsigned __int8)(SLODWORD(v11) >> 23);
        if ( v16 <= 0x9E )
        {
          v17 = LODWORD(v11) & 0x7FFFFF | 0x800000LL;
          v18 = v16 < 0x76 ? v17 >> (118 - (unsigned __int8)v16) : v17 << ((unsigned __int8)v16 - 118);
          a2 = (v18 + 0x80000000LL) >> 32;
          if ( v11 < 0.0 )
            LODWORD(a2) = -(int)a2;
        }
        v5 += 2;
        *(_DWORD *)v4 = a3 + *(_DWORD *)(a1 + 24);
        *((_DWORD *)v4 + 1) = a2 + *(_DWORD *)(a1 + 28);
        v4 += 8;
        --v6;
      }
      while ( v6 );
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 3 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 0xB) != 8 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0xB) != 9 )
      {
        if ( (*(_DWORD *)(a1 + 32) & 0xB) == 0xB && a4 )
        {
          v8 = (char *)v5 - v4;
          do
          {
            *(_DWORD *)v4 = *(_DWORD *)(a1 + 24) + 16 * *(_DWORD *)&v4[v8];
            v9 = *(_DWORD *)&v4[v8 + 4];
            v4 += 8;
            *((_DWORD *)v4 - 1) = *(_DWORD *)(a1 + 28) + 16 * v9;
            --v6;
          }
          while ( v6 );
        }
        return 1LL;
      }
      goto LABEL_11;
    }
    goto LABEL_29;
  }
  if ( a4 )
  {
    do
    {
      v19 = *v5;
      v5 += 2;
      *(_DWORD *)v4 = *(_DWORD *)(a1 + 24) + (((v19 >> 3) + 1) >> 1);
      v4 += 8;
      *((_DWORD *)v4 - 1) = *(_DWORD *)(a1 + 28) + (((*(v5 - 1) >> 3) + 1) >> 1);
      --v6;
    }
    while ( v6 );
  }
  return 1LL;
}
