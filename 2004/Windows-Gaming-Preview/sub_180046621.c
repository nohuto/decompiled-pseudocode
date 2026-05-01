/*
 * XREFs of sub_180046621 @ 0x180046621
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800161E4 @ 0x1800161E4 (sub_1800161E4.c)
 *     _CxxThrowException @ 0x1800453D8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180046621(__int64 a1, __int64 a2)
{
  sub_1800161E4(a1, *(_QWORD *)(a2 + 56));
  throw;
}
