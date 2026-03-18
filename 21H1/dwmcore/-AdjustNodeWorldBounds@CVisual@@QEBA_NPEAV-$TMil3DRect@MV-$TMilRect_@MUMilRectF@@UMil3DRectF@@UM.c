/*
 * XREFs of ?AdjustNodeWorldBounds@CVisual@@QEBA_NPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800BA7E8
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisual::AdjustNodeWorldBounds(__int64 a1, float *a2, char a3)
{
  float v4; // xmm6_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  int v7; // eax
  char v8; // r8
  float v9; // xmm0_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  float v15; // xmm1_4

  v4 = a2[2];
  if ( v4 <= *a2 )
    return 0;
  v5 = a2[3];
  v6 = a2[1];
  if ( v5 <= v6 )
    return 0;
  v7 = *(_DWORD *)(a1 + 88);
  v8 = 1;
  if ( a3 || (v7 & 0x200) != 0 )
  {
    v9 = FLOAT_4_0;
  }
  else if ( (v7 & 0x800) != 0 )
  {
    v9 = FLOAT_0_5;
  }
  else
  {
    v9 = 0.0;
  }
  if ( (v7 & 0x1000) != 0 )
    v9 = v9 + 0.5;
  if ( v9 != 0.0 )
  {
    v10 = *a2 - v9;
    v11 = v6 - v9;
    v12 = v4 + v9;
    v13 = v5 + v9;
    v14 = a2[4] - 0.0;
    v15 = a2[5] + 0.0;
    *a2 = v10;
    a2[1] = v11;
    a2[2] = v12;
    a2[3] = v13;
    a2[4] = v14;
    a2[5] = v15;
  }
  return v8;
}
