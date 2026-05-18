/*
 * XREFs of sub_180117990 @ 0x180117990
 * Callers:
 *     sub_180117688 @ 0x180117688 (sub_180117688.c)
 * Callees:
 *     sub_180117588 @ 0x180117588 (sub_180117588.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180117990(__int64 a1)
{
  GUID v3; // [rsp+20h] [rbp-38h] BYREF
  GUID pguid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)(a1 + 152) = 64LL;
  pguid = 0LL;
  CoCreateGuid(&pguid);
  v3 = pguid;
  sub_180117588(a1, (__int128 *)&v3);
  return a1;
}
