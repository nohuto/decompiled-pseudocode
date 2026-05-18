/*
 * XREFs of sub_18012D982 @ 0x18012D982
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DA534 @ 0x1800DA534 (sub_1800DA534.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D982(__int64 a1, __int64 a2)
{
  sub_1800DA534(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
