/*
 * XREFs of sub_1801265B5 @ 0x1801265B5
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031060 @ 0x180031060 (sub_180031060.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801265B5(__int64 a1, __int64 a2)
{
  sub_180031060(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
