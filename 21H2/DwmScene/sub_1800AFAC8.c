/*
 * XREFs of sub_1800AFAC8 @ 0x1800AFAC8
 * Callers:
 *     sub_1800B2510 @ 0x1800B2510 (sub_1800B2510.c)
 * Callees:
 *     sub_180019F78 @ 0x180019F78 (sub_180019F78.c)
 *     sub_1800204C8 @ 0x1800204C8 (sub_1800204C8.c)
 *     sub_180083CB4 @ 0x180083CB4 (sub_180083CB4.c)
 *     sub_1800AF9DC @ 0x1800AF9DC (sub_1800AF9DC.c)
 *     sub_1800B2350 @ 0x1800B2350 (sub_1800B2350.c)
 *     sub_1800B255C @ 0x1800B255C (sub_1800B255C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800AFAC8(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, int a5, int a6, _OWORD *a7, int a8)
{
  _OWORD *v11; // rax
  _OWORD *v12; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // rax
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm1
  _OWORD *v18; // rax
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  __int128 v21; // xmm1
  _OWORD *v22; // rax
  __m128 v24; // [rsp+20h] [rbp-C9h] BYREF
  _BYTE v25[64]; // [rsp+30h] [rbp-B9h] BYREF
  int v26; // [rsp+70h] [rbp-79h] BYREF
  __int128 v27; // [rsp+74h] [rbp-75h]
  int v28; // [rsp+84h] [rbp-65h]
  __int128 v29; // [rsp+88h] [rbp-61h]
  int v30; // [rsp+98h] [rbp-51h]
  _BYTE v31[20]; // [rsp+9Ch] [rbp-4Dh]
  _BYTE v32[64]; // [rsp+B0h] [rbp-39h] BYREF

  v27 = 0LL;
  v26 = 1065353216;
  v29 = 0LL;
  v28 = 1065353216;
  *(_OWORD *)v31 = 0LL;
  v30 = 1065353216;
  *(_DWORD *)&v31[16] = 1065353216;
  if ( a8 != 1 )
  {
    v14 = (_OWORD *)sub_1800AF9DC(a1, a6, a5);
    sub_180083CB4(&v26, v14);
    if ( a4 )
    {
      v15 = a4[2];
      v16 = a4[3];
      *(_OWORD *)&v32[4] = 0LL;
      *(_OWORD *)&v32[24] = 0LL;
      v17 = a4[1];
      *(_OWORD *)&v32[44] = 0LL;
      *(__m128 *)v32 = sub_1800204C8(&v24, *(double *)&v17, *(double *)&v15, *(double *)&v16);
      *(_OWORD *)&v32[16] = v17;
      *(_OWORD *)&v32[32] = v15;
      *(_OWORD *)&v32[48] = v16;
      v18 = (_OWORD *)sub_180019F78((__int64)v25, &v26, v32);
      sub_180083CB4(&v26, v18);
    }
    if ( a7 )
    {
      v19 = a7[2];
      v20 = a7[3];
      *(_OWORD *)&v32[4] = 0LL;
      *(_OWORD *)&v32[24] = 0LL;
      v21 = a7[1];
      *(_OWORD *)&v32[44] = 0LL;
      *(__m128 *)v32 = sub_1800204C8(&v24, *(double *)&v21, *(double *)&v19, *(double *)&v20);
      *(_OWORD *)&v32[16] = v21;
      *(_OWORD *)&v32[32] = v19;
      *(_OWORD *)&v32[48] = v20;
      v22 = (_OWORD *)sub_180019F78((__int64)v25, v32, &v26);
      sub_180083CB4(&v26, v22);
    }
    *(_OWORD *)&v31[4] = 0LL;
    v13 = (_OWORD *)sub_1800B255C(&v26, v25);
    goto LABEL_11;
  }
  v11 = (_OWORD *)sub_1800AF9DC(a1, a5, a6);
  sub_180083CB4(&v26, v11);
  if ( a4 )
  {
    v12 = (_OWORD *)sub_180019F78((__int64)v32, a4, &v26);
    sub_180083CB4(&v26, v12);
  }
  if ( a7 )
  {
    v13 = (_OWORD *)sub_180019F78((__int64)v32, &v26, a7);
LABEL_11:
    sub_180083CB4(&v26, v13);
  }
  sub_1800B2350(a2, a3, &v26);
  return a2;
}
