/*
 * XREFs of sub_180077554 @ 0x180077554
 * Callers:
 *     sub_18007DC40 @ 0x18007DC40 (sub_18007DC40.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180077554(__int64 a1, __int64 a2)
{
  int v4[4]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v5[256]; // [rsp+30h] [rbp-118h] BYREF

  v4[0] = 256;
  PsmGetPackageFullNameFromKey(a1 + 24, v5, v4);
  return EdpUtilGetEnterpriseContextByName(v5, 1LL, a2);
}
