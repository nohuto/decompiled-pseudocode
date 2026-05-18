/*
 * XREFs of sub_18012D0F7 @ 0x18012D0F7
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CB778 @ 0x1800CB778 (sub_1800CB778.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D0F7(__int64 a1, __int64 a2)
{
  sub_1800CB778(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
