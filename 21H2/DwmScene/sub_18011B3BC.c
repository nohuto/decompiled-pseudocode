/*
 * XREFs of sub_18011B3BC @ 0x18011B3BC
 * Callers:
 *     sub_18011B9C8 @ 0x18011B9C8 (sub_18011B9C8.c)
 * Callees:
 *     unknown_libname_100 @ 0x180010C5C (unknown_libname_100.c)
 */

__int64 *__fastcall sub_18011B3BC(__int64 a1, __int64 *a2)
{
  _BYTE *v3; // rdx

  v3 = *(_BYTE **)(a1 + 16);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  unknown_libname_100(a2, v3);
  return a2;
}
