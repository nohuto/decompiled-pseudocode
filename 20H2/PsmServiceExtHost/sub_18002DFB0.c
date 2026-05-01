/*
 * XREFs of sub_18002DFB0 @ 0x18002DFB0
 * Callers:
 *     sub_18002C924 @ 0x18002C924 (sub_18002C924.c)
 *     sub_18002CD00 @ 0x18002CD00 (sub_18002CD00.c)
 *     sub_18002D660 @ 0x18002D660 (sub_18002D660.c)
 *     sub_18002DE3C @ 0x18002DE3C (sub_18002DE3C.c)
 * Callees:
 *     memcmp @ 0x180046816 (memcmp.c)
 */

bool __fastcall sub_18002DFB0(__int64 a1, const wchar_t *a2, const wchar_t *a3)
{
  return !wcsicmp(a2, a3) && memcmp(a2 + 232, a3 + 232, 0x58uLL) == 0;
}
