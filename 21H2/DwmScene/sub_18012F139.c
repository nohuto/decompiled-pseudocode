/*
 * XREFs of sub_18012F139 @ 0x18012F139
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F3790 @ 0x1800F3790 (sub_1800F3790.c)
 *     sub_1800F39A8 @ 0x1800F39A8 (sub_1800F39A8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F139(__int64 a1, __int64 *a2)
{
  sub_1800F3790(a2[16], a2[19], a2[5]);
  sub_1800F39A8(a2[16], a2[6], a2[4]);
  throw;
}
