/*
 * XREFs of sub_18006171C @ 0x18006171C
 * Callers:
 *     sub_1800AF8EC @ 0x1800AF8EC (sub_1800AF8EC.c)
 * Callees:
 *     sub_1800610BC @ 0x1800610BC (sub_1800610BC.c)
 */

__int64 __fastcall sub_18006171C(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 8) = 1;
  sub_1800610BC(a1, 0);
  return a2;
}
