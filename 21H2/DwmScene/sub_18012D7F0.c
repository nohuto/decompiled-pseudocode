/*
 * XREFs of sub_18012D7F0 @ 0x18012D7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D4E38 @ 0x1800D4E38 (sub_1800D4E38.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D7F0(__int64 a1, __int64 a2)
{
  sub_1800D4E38(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
