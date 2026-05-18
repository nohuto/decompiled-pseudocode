/*
 * XREFs of sub_1801120C0 @ 0x1801120C0
 * Callers:
 *     sub_180111DB8 @ 0x180111DB8 (sub_180111DB8.c)
 * Callees:
 *     sub_180111CB8 @ 0x180111CB8 (sub_180111CB8.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1801120C0(__int64 a1)
{
  GUID v3; // [rsp+20h] [rbp-38h] BYREF
  GUID pguid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)(a1 + 152) = 64LL;
  pguid = 0LL;
  CoCreateGuid(&pguid);
  v3 = pguid;
  sub_180111CB8(a1, (__int128 *)&v3);
  return a1;
}
