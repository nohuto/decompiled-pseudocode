/*
 * XREFs of sub_1800465A9 @ 0x1800465A9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018610 @ 0x180018610 (sub_180018610.c)
 *     _CxxThrowException @ 0x1800453D8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1800465A9(__int64 a1, __int64 a2)
{
  sub_180018610(a1, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
