/*
 * XREFs of sub_180111670 @ 0x180111670
 * Callers:
 *     sub_1801104AC @ 0x1801104AC (sub_1801104AC.c)
 *     sub_180110BC8 @ 0x180110BC8 (sub_180110BC8.c)
 * Callees:
 *     sub_18007E6A4 @ 0x18007E6A4 (sub_18007E6A4.c)
 *     sub_18007E720 @ 0x18007E720 (sub_18007E720.c)
 *     sub_18007F978 @ 0x18007F978 (sub_18007F978.c)
 *     sub_18007FB74 @ 0x18007FB74 (sub_18007FB74.c)
 *     sub_1800BD228 @ 0x1800BD228 (sub_1800BD228.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

void __fastcall sub_180111670(__m128 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r12
  __m128 *v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r15
  int v12; // eax
  unsigned __int64 v13; // xmm0_8
  int v14; // eax
  unsigned __int64 v15; // xmm0_8
  int v16; // eax
  double v17; // xmm0_8
  unsigned __int64 *v18; // rax
  int v19; // xmm1_4
  unsigned __int64 *v20; // rax
  float v21; // xmm0_4
  int v22[3]; // [rsp+20h] [rbp-59h] BYREF
  int v23[3]; // [rsp+2Ch] [rbp-4Dh] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-41h] BYREF
  int v25; // [rsp+40h] [rbp-39h]
  unsigned __int64 v26; // [rsp+48h] [rbp-31h] BYREF
  int v27; // [rsp+50h] [rbp-29h]
  _DWORD v28[4]; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-11h] BYREF
  int v30; // [rsp+70h] [rbp-9h]

  if ( a2 )
  {
    v6 = &a1->m128_u64[1];
    v7 = a4;
    v8 = a2;
    v9 = a1;
    v10 = a3 - a4;
    v11 = a5 - a4;
    do
    {
      v12 = *(_DWORD *)(v10 + v7 + 8);
      v26 = *(_QWORD *)(v10 + v7);
      v13 = *(_QWORD *)v7;
      v27 = v12;
      v14 = *(_DWORD *)(v7 + 8);
      v24 = v13;
      v15 = *(_QWORD *)(v11 + v7);
      v25 = v14;
      v16 = *(_DWORD *)(v11 + v7 + 8);
      v29 = v15;
      v30 = v16;
      *(_QWORD *)&v17 = sub_18007FB74(&v26, &v24).m128_u64[0];
      v18 = (unsigned __int64 *)sub_18007E6A4(v22, &v26, v17);
      sub_18007E720(v28, &v24, v18);
      v19 = v28[1];
      *((_DWORD *)v6 - 2) = v28[0];
      *(_DWORD *)v6 = v28[2];
      *((_DWORD *)v6 - 1) = v19;
      sub_1800BD228(v9);
      v20 = (unsigned __int64 *)sub_18007F978(&v26, v23, &v24);
      if ( sub_18007FB74(v20, &v29).m128_f32[0] >= 0.0 )
        v21 = 1.0;
      else
        v21 = -1.0;
      if ( a6 )
        v21 = -v21;
      *((float *)v6 + 1) = v21;
      ++v9;
      v6 += 2;
      v7 += 12LL;
      --v8;
    }
    while ( v8 );
  }
}
