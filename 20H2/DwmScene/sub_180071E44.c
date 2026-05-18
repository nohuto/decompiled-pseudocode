/*
 * XREFs of sub_180071E44 @ 0x180071E44
 * Callers:
 *     sub_18006C318 @ 0x18006C318 (sub_18006C318.c)
 *     sub_18006C734 @ 0x18006C734 (sub_18006C734.c)
 *     sub_1800B49EC @ 0x1800B49EC (sub_1800B49EC.c)
 *     sub_1800B5F5C @ 0x1800B5F5C (sub_1800B5F5C.c)
 *     sub_18011C120 @ 0x18011C120 (sub_18011C120.c)
 * Callees:
 *     sub_180115398 @ 0x180115398 (sub_180115398.c)
 */

_QWORD *__fastcall sub_180071E44(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  LOBYTE(a4) = a3;
  sub_180115398(a1, 2147942487LL, a2, a4);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
