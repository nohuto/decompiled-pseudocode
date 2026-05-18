/*
 * XREFs of sub_18012A67B @ 0x18012A67B
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800713D8 @ 0x1800713D8 (sub_1800713D8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A67B(__int64 a1, __int64 a2)
{
  sub_1800713D8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
