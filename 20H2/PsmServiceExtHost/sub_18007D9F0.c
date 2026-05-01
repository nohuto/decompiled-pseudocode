/*
 * XREFs of sub_18007D9F0 @ 0x18007D9F0
 * Callers:
 *     sub_18007A4CC @ 0x18007A4CC (sub_18007A4CC.c)
 * Callees:
 *     sub_1800035F4 @ 0x1800035F4 (sub_1800035F4.c)
 *     sub_18000366C @ 0x18000366C (sub_18000366C.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18007E434 @ 0x18007E434 (sub_18007E434.c)
 *     sub_18007E664 @ 0x18007E664 (sub_18007E664.c)
 *     sub_18007E80C @ 0x18007E80C (sub_18007E80C.c)
 *     sub_18007F028 @ 0x18007F028 (sub_18007F028.c)
 */

__int64 __fastcall sub_18007D9F0(__int64 a1)
{
  __int64 v2; // rdx
  char *v3; // rdi
  __int64 v4; // rsi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800093A0(a1, 0);
  v3 = (char *)sub_1800035F4(a1);
  if ( v3 )
  {
    sub_18000A110(a1);
    sub_18007E80C(v3, v6);
    v4 = sub_18007E664(v3, a1);
    sub_18000E244((__int64)v3);
    sub_18007F028(v6);
    sub_18007E434(v6);
    sub_180017F60(v3);
  }
  else
  {
    v4 = sub_18000366C(a1, v2);
    sub_18000A110(a1);
  }
  return v4;
}
