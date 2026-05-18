/*
 * XREFs of sub_18012C916 @ 0x18012C916
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AB19C @ 0x1800AB19C (sub_1800AB19C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012C916(__int64 a1, __int64 a2)
{
  sub_1800AB19C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
