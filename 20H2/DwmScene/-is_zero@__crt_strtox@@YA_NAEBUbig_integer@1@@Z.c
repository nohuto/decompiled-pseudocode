/*
 * XREFs of ?is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z @ 0x18011CD68
 * Callers:
 *     sub_180117C08 @ 0x180117C08 (sub_180117C08.c)
 *     sub_1801187C4 @ 0x1801187C4 (sub_1801187C4.c)
 * Callees:
 *     <none>
 */

bool __fastcall __crt_strtox::is_zero(__crt_strtox *this, const struct __crt_strtox::big_integer *a2)
{
  return *(_DWORD *)this == 0;
}
