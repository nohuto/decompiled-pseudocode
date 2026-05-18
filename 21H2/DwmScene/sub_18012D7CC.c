/*
 * XREFs of sub_18012D7CC @ 0x18012D7CC
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D4E10 @ 0x1800D4E10 (sub_1800D4E10.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D7CC(__int64 a1, __int64 a2)
{
  sub_1800D4E10(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
