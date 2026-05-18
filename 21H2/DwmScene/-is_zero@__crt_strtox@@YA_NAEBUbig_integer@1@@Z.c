/*
 * XREFs of ?is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z @ 0x180122638
 * Callers:
 *     sub_18011D4D8 @ 0x18011D4D8 (sub_18011D4D8.c)
 *     sub_18011E094 @ 0x18011E094 (sub_18011E094.c)
 * Callees:
 *     <none>
 */

bool __fastcall __crt_strtox::is_zero(__crt_strtox *this, const struct __crt_strtox::big_integer *a2)
{
  return *(_DWORD *)this == 0;
}
