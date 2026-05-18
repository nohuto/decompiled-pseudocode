/*
 * XREFs of sub_18012A336 @ 0x18012A336
 * Callers:
 *     <none>
 * Callees:
 *     sub_180068230 @ 0x180068230 (sub_180068230.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A336(__int64 a1, __int64 a2)
{
  sub_180068230(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
