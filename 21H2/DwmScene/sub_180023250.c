/*
 * XREFs of sub_180023250 @ 0x180023250
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18008CCEC @ 0x18008CCEC (sub_18008CCEC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
float *__fastcall sub_180023250(__int64 a1, float *a2, float *a3)
{
  float *result; // rax
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  _QWORD v11[5]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h] BYREF

  v12 = 0LL;
  sub_180066E84(*(_QWORD *)(a1 + 16) + 16LL, &v12);
  v11[2] = 0LL;
  v11[3] = 0LL;
  sub_18001277C(v11, (__int64)&unk_18020F708);
  result = (float *)sub_18008CCEC(*(_QWORD *)(a1 + 16), v11);
  v7 = result[2] - result[5];
  v8 = result[1] - result[4];
  *a2 = *result - result[3];
  a2[1] = v8;
  a2[2] = v7;
  v9 = result[5] + result[2];
  v10 = result[1] + result[4];
  *a3 = *result + result[3];
  a3[1] = v10;
  a3[2] = v9;
  if ( BYTE8(v12) )
    return (float *)sub_180067304(v12);
  return result;
}
