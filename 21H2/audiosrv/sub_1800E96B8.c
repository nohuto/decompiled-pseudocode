/*
 * XREFs of sub_1800E96B8 @ 0x1800E96B8
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800E96B8(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8)
{
  _BYTE v9[32]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  __int64 v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]

  v16 = a8;
  v14 = a7;
  v17 = 8LL;
  v15 = 4LL;
  v13 = 16LL;
  v12 = *a6;
  v11 = 16LL;
  v10 = *a5;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 6, (__int64)v9);
}
