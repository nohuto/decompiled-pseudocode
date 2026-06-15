/*
 * XREFs of sub_1801325AC @ 0x1801325AC
 * Callers:
 *     sub_180054490 @ 0x180054490 (sub_180054490.c)
 * Callees:
 *     sub_180065CE0 @ 0x180065CE0 (sub_180065CE0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

char __fastcall sub_1801325AC(HKEY hKey, GUID *a2)
{
  GUID rguid; // [rsp+20h] [rbp-78h] BYREF
  OLECHAR sz[40]; // [rsp+30h] [rbp-68h] BYREF

  rguid = *a2;
  if ( StringFromGUID2(&rguid, sz, 39) > 0 )
    return sub_180065CE0(hKey, (__int64)sz);
  else
    return 0;
}
