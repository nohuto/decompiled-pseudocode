/*
 * XREFs of sub_1800AD630 @ 0x1800AD630
 * Callers:
 *     sub_1800AD16C @ 0x1800AD16C (sub_1800AD16C.c)
 * Callees:
 *     sub_1800194D4 @ 0x1800194D4 (sub_1800194D4.c)
 *     sub_18007E3E4 @ 0x18007E3E4 (sub_18007E3E4.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_OWORD *__fastcall sub_1800AD630(__int64 a1)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _BYTE v14[64]; // [rsp+20h] [rbp-79h] BYREF
  __int128 v15; // [rsp+60h] [rbp-39h] BYREF
  __int128 v16; // [rsp+70h] [rbp-29h]
  __int128 v17; // [rsp+80h] [rbp-19h]
  __int128 v18; // [rsp+90h] [rbp-9h]
  _OWORD v19[4]; // [rsp+A0h] [rbp+7h] BYREF

  v2 = *(_OWORD *)(a1 + 628);
  v15 = *(_OWORD *)(a1 + 612);
  v3 = *(_OWORD *)(a1 + 644);
  v16 = v2;
  v4 = *(_OWORD *)(a1 + 660);
  v17 = v3;
  v5 = *(_OWORD *)(a1 + 932);
  v18 = v4;
  v6 = *(_OWORD *)(a1 + 948);
  v19[0] = v5;
  v7 = *(_OWORD *)(a1 + 964);
  v19[1] = v6;
  v8 = *(_OWORD *)(a1 + 980);
  v19[2] = v7;
  v19[3] = v8;
  v9 = (__int128 *)sub_1800194D4((__int64)v14, &v15, v19);
  v10 = v9[1];
  v15 = *v9;
  v11 = v9[2];
  v16 = v10;
  v12 = v9[3];
  v17 = v11;
  v18 = v12;
  return sub_18007E3E4((_OWORD *)(a1 + 676), &v15);
}
