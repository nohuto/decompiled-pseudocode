/*
 * XREFs of sub_18006B7A4 @ 0x18006B7A4
 * Callers:
 *     sub_18006AA30 @ 0x18006AA30 (sub_18006AA30.c)
 * Callees:
 *     sub_1800CBB3C @ 0x1800CBB3C (sub_1800CBB3C.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 */

__int64 __fastcall sub_18006B7A4(__int64 a1, float a2)
{
  float v3; // xmm2_4
  int v4; // eax
  float v5; // xmm1_4
  float v6; // xmm0_4
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax

  v3 = 1000.0 / a2;
  v4 = *(_DWORD *)(a1 + 3912) + 1;
  *(_DWORD *)(a1 + 3912) = v4;
  *(float *)(a1 + 3904) = a2;
  v5 = a2 + *(float *)(a1 + 3908);
  *(float *)(a1 + 3888) = v3;
  *(float *)(a1 + 3908) = v5;
  if ( v5 < 1000.0 )
  {
    v6 = *(float *)(a1 + 3920);
  }
  else
  {
    *(_DWORD *)(a1 + 3908) = 0;
    *(_DWORD *)(a1 + 3912) = 0;
    *(_DWORD *)(a1 + 3900) = *(_DWORD *)(a1 + 3920);
    *(_DWORD *)(a1 + 3896) = *(_DWORD *)(a1 + 3916);
    *(_DWORD *)(a1 + 3916) = -8388609;
    *(float *)(a1 + 3892) = (float)((float)v4 * 1000.0) / v5;
    v6 = 3.4028235e38;
  }
  if ( v6 > v3 )
    v6 = v3;
  *(float *)(a1 + 3920) = v6;
  if ( v3 <= *(float *)(a1 + 3916) )
    v3 = *(float *)(a1 + 3916);
  *(float *)(a1 + 3916) = v3;
  v7 = sub_1800CBBF8(a1);
  *(_QWORD *)(a1 + 3928) = sub_1800CBB3C(v7, 11LL, 2LL, 3LL);
  v9 = sub_1800CBBF8(v8);
  *(_QWORD *)(a1 + 3952) = sub_1800CBB3C(v9, 6LL, 2LL, 3LL);
  v11 = sub_1800CBBF8(v10);
  *(_QWORD *)(a1 + 3936) = sub_1800CBB3C(v11, 5LL, 2LL, 3LL);
  v13 = sub_1800CBBF8(v12);
  *(_QWORD *)(a1 + 3944) = sub_1800CBB3C(v13, 7LL, 2LL, 3LL);
  v15 = sub_1800CBBF8(v14);
  *(_QWORD *)(a1 + 3960) = sub_1800CBB3C(v15, 3LL, 2LL, 3LL);
  v17 = sub_1800CBBF8(v16);
  result = sub_1800CBB3C(v17, 8LL, 2LL, 3LL);
  *(_QWORD *)(a1 + 3968) = result;
  return result;
}
