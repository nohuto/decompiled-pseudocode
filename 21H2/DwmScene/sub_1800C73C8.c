/*
 * XREFs of sub_1800C73C8 @ 0x1800C73C8
 * Callers:
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 * Callees:
 *     _o_powf @ 0x180123946 (_o_powf.c)
 */

double __fastcall sub_1800C73C8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  o_powf();
  return sub_1800F5908(*a4);
}
