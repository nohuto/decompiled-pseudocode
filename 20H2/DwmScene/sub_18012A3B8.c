/*
 * XREFs of sub_18012A3B8 @ 0x18012A3B8
 * Callers:
 *     <none>
 * Callees:
 *     sub_180089BB4 @ 0x180089BB4 (sub_180089BB4.c)
 *     sub_1801078A4 @ 0x1801078A4 (sub_1801078A4.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A3B8(__int64 a1, __int64 *a2)
{
  sub_180089BB4(a2[4], a2 + 5, a2[19]);
  sub_1801078A4(a2[4], (__int64)(a2 + 6));
  throw;
}
