/*
 * XREFs of sub_180066D08 @ 0x180066D08
 * Callers:
 *     sub_18006A838 @ 0x18006A838 (sub_18006A838.c)
 *     sub_18006F208 @ 0x18006F208 (sub_18006F208.c)
 *     sub_180076FC8 @ 0x180076FC8 (sub_180076FC8.c)
 *     sub_18008B0B8 @ 0x18008B0B8 (sub_18008B0B8.c)
 *     sub_18008B1D0 @ 0x18008B1D0 (sub_18008B1D0.c)
 * Callees:
 *     sub_18011C188 @ 0x18011C188 (sub_18011C188.c)
 */

__int64 __fastcall sub_180066D08(__int64 a1, unsigned int a2)
{
  sub_18011C188();
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
