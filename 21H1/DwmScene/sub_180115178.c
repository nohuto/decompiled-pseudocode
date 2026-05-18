/*
 * XREFs of sub_180115178 @ 0x180115178
 * Callers:
 *     sub_1800BCD8C @ 0x1800BCD8C (sub_1800BCD8C.c)
 *     sub_1800C0970 @ 0x1800C0970 (sub_1800C0970.c)
 * Callees:
 *     floorf @ 0x18011F790 (floorf.c)
 */

__int64 __fastcall sub_180115178(__int64 a1, float a2, float a3, float a4)
{
  float v5; // xmm0_4
  float v6; // xmm9_4
  float v7; // xmm0_4
  float v8; // xmm10_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm9_4
  int v14; // ecx
  float v15; // xmm9_4
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 result; // rax

  v5 = fmaxf(a2, 0.0);
  v6 = fminf(v5, 360.0);
  v7 = fmaxf(a3 / 100.0, 0.0);
  v8 = fminf(v7, 1.0);
  v9 = fmaxf(a4 / 100.0, 0.0);
  v10 = fminf(v9, 1.0);
  v11 = v10;
  if ( v8 == 0.0 )
  {
    v12 = v10;
    goto LABEL_15;
  }
  v13 = v6 / 60.0;
  v14 = (int)floorf(v13);
  v15 = v13 - (float)v14;
  if ( !v14 )
  {
    v10 = v11;
    v12 = (float)(1.0 - (float)((float)(1.0 - v15) * v8)) * v11;
    goto LABEL_14;
  }
  v16 = v14 - 1;
  if ( !v16 )
  {
    v10 = (float)(1.0 - (float)(v15 * v8)) * v11;
    v12 = v11;
LABEL_14:
    v11 = (float)(1.0 - v8) * v11;
    goto LABEL_15;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v12 = (float)(1.0 - v8) * v11;
      if ( v18 == 1 )
      {
        v10 = (float)(1.0 - (float)((float)(1.0 - v15) * v8)) * v11;
      }
      else
      {
        v10 = v11;
        v11 = (float)(1.0 - (float)(v15 * v8)) * v11;
      }
    }
    else
    {
      v10 = (float)(1.0 - v8) * v11;
      v12 = (float)(1.0 - (float)(v15 * v8)) * v11;
    }
  }
  else
  {
    v12 = v11;
    v10 = (float)(1.0 - v8) * v11;
    v11 = (float)(1.0 - (float)((float)(1.0 - v15) * v8)) * v11;
  }
LABEL_15:
  result = a1;
  *(float *)(a1 + 8) = v11;
  *(float *)a1 = v10;
  *(float *)(a1 + 4) = v12;
  *(_DWORD *)(a1 + 12) = 1065353216;
  return result;
}
