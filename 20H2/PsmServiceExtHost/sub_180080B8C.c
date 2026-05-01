/*
 * XREFs of sub_180080B8C @ 0x180080B8C
 * Callers:
 *     sub_18001E880 @ 0x18001E880 (sub_18001E880.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180080B8C(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // r8d
  int v3; // edx
  _DWORD v5[2]; // [rsp+0h] [rbp-2Ch]
  __int64 v6; // [rsp+8h] [rbp-24h]
  int v7; // [rsp+10h] [rbp-1Ch]

  v2 = *(unsigned __int8 *)(a1 + 548);
  v5[1] = 12;
  v6 = 2LL;
  v7 = 14;
  v3 = v5[a2];
  return _bittest(&v3, v2);
}
