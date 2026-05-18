/*
 * XREFs of sub_1800D28F4 @ 0x1800D28F4
 * Callers:
 *     sub_1800D29AC @ 0x1800D29AC (sub_1800D29AC.c)
 * Callees:
 *     sub_1800D3308 @ 0x1800D3308 (sub_1800D3308.c)
 */

char __fastcall sub_1800D28F4(__int64 a1, __int64 a2, __int64 a3)
{
  double v3; // xmm1_8
  double v5; // xmm0_8
  double v8; // xmm0_8
  bool v9; // cf
  bool v10; // zf
  double v11; // xmm0_8
  double v12; // xmm0_8
  bool v13; // cf
  bool v14; // zf
  char result; // al
  double v16; // xmm0_8
  double v17; // xmm1_8
  double v18; // xmm0_8
  bool v19; // cf
  bool v20; // zf

  v3 = *(double *)(a2 + 32);
  v5 = *(double *)(a1 + 32);
  if ( v3 == v5 )
  {
    v8 = *(double *)(a1 + 40);
    v9 = v8 < *(double *)(a2 + 40);
    v10 = v8 == *(double *)(a2 + 40);
  }
  else
  {
    v9 = v5 < v3;
    v10 = v5 == v3;
  }
  if ( !v9 && !v10 )
  {
    sub_1800D3308(a2, a1);
    v3 = *(double *)(a2 + 32);
  }
  v11 = *(double *)(a3 + 32);
  if ( v11 == v3 )
  {
    v12 = *(double *)(a2 + 40);
    v13 = v12 < *(double *)(a3 + 40);
    v14 = v12 == *(double *)(a3 + 40);
  }
  else
  {
    v13 = v3 < v11;
    v14 = v3 == v11;
  }
  result = !v13 && !v14;
  if ( !v13 && !v14 )
  {
    sub_1800D3308(a3, a2);
    v16 = *(double *)(a2 + 32);
    v17 = *(double *)(a1 + 32);
    if ( v16 == v17 )
    {
      v18 = *(double *)(a1 + 40);
      v19 = v18 < *(double *)(a2 + 40);
      v20 = v18 == *(double *)(a2 + 40);
    }
    else
    {
      v19 = v17 < v16;
      v20 = v17 == v16;
    }
    result = !v19 && !v20;
    if ( !v19 && !v20 )
      return sub_1800D3308(a2, a1);
  }
  return result;
}
