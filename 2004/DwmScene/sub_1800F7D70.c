/*
 * XREFs of sub_1800F7D70 @ 0x1800F7D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800F7D70(__int64 a1, __int64 a2, int a3, char a4, int a5, char a6, char a7, float a8)
{
  float v11; // xmm0_4
  bool v12; // zf
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // [rsp+24h] [rbp-24h]

  v22 = *((float *)&a2 + 1);
  if ( *(float *)(a1 + 1892) <= *(float *)(a1 + 1856) )
  {
    if ( a4 && a7 )
      *(float *)(a1 + 1900) = (float)((float)(*(float *)&a2 * a8) * 0.89999998) + *(float *)(a1 + 1900);
  }
  else if ( !*(_BYTE *)(a1 + 1898) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 264LL))(a1);
  }
  *(float *)(a1 + 1872) = (float)(a8 * *(float *)(a1 + 1900)) + *(float *)(a1 + 1872);
  v11 = o_remainderf();
  v12 = *(_BYTE *)(a1 + 1898) == 0;
  *(float *)(a1 + 1872) = v11;
  if ( v12 )
  {
    v13 = *(float *)(a1 + 1900) * 0.80000001;
    *(float *)(a1 + 1900) = v13;
    if ( fabs(v13) < 1.0e-12 )
      *(_DWORD *)(a1 + 1900) = 0;
  }
  v14 = *(float *)(a1 + 1892);
  v15 = *(float *)(a1 + 1844);
  if ( v14 > v15 )
  {
    if ( *(float *)(a1 + 1876) < 0.050000001 && *(_BYTE *)(a1 + 1897) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL))(a1);
      v14 = *(float *)(a1 + 1892);
      v15 = *(float *)(a1 + 1844);
    }
    goto LABEL_17;
  }
  v16 = *(float *)(a1 + 1892);
  v17 = *(float *)(a1 + 1844);
  if ( a4 && a7 )
  {
    *(float *)(a1 + 1884) = (float)((float)(v22 * a8) * 0.89999998) + *(float *)(a1 + 1884);
LABEL_17:
    v17 = v15;
    v16 = v14;
  }
  if ( v17 >= v16 )
  {
    v18 = *(float *)(a1 + 1884);
    *(float *)(a1 + 1884) = v18 * 0.80000001;
    *(float *)(a1 + 1876) = (float)(v18 * a8) + *(float *)(a1 + 1876);
    if ( fabs(v18 * 0.80000001) < 1.0e-12 )
      *(_DWORD *)(a1 + 1884) = 0;
  }
  if ( a6 )
  {
    v19 = (float)((float)a3 * -0.0099999998) + *(float *)(a1 + 1888);
    *(float *)(a1 + 1888) = v19;
  }
  else
  {
    v19 = *(float *)(a1 + 1888);
  }
  if ( v19 != 0.0 )
  {
    v20 = v19;
    v21 = v19 * 0.80000001;
    *(float *)(a1 + 1888) = v21;
    *(float *)(a1 + 1880) = (float)(v20 * a8) + *(float *)(a1 + 1880);
    if ( fabs(v21) < 1.0e-12 )
      *(_DWORD *)(a1 + 1888) = 0;
  }
}
