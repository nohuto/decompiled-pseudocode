/*
 * XREFs of EditionMouseSpeedHitTest @ 0x1C006F52C
 * Callers:
 *     ApiSetEditionMouseSpeedHitTest @ 0x1C006F3AC (ApiSetEditionMouseSpeedHitTest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

_OWORD *__fastcall EditionMouseSpeedHitTest(_OWORD *a1, __int64 a2)
{
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _OWORD *result; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD v15[7]; // [rsp+70h] [rbp-78h] BYREF

  if ( qword_1C0253860 )
  {
    v3 = (_OWORD *)((__int64 (__fastcall *)(_OWORD *, __int64))qword_1C0253860)(v15, a2);
    v4 = v3[1];
    *a1 = *v3;
    v5 = v3[2];
    a1[1] = v4;
    v6 = v3[3];
    a1[2] = v5;
    v7 = v3[4];
    a1[3] = v6;
    v8 = v3[5];
    a1[4] = v7;
    v9 = v3[6];
  }
  else
  {
    memset(v15, 0, sizeof(v15));
    v11 = v15[1];
    *a1 = v15[0];
    v12 = v15[2];
    a1[1] = v11;
    v13 = v15[3];
    a1[2] = v12;
    v14 = v15[4];
    a1[3] = v13;
    v8 = v15[5];
    a1[4] = v14;
    v9 = v15[6];
  }
  a1[5] = v8;
  result = a1;
  a1[6] = v9;
  return result;
}
