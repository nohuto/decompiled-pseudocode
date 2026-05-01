/*
 * XREFs of sub_18002B0A0 @ 0x18002B0A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002B0A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+24h] [rbp-24h]

  v6 = 1;
  v7 = *a5;
  sub_18002B954(a4, &v6, 12LL);
  return 0LL;
}
