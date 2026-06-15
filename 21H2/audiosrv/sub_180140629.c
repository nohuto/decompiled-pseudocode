/*
 * XREFs of sub_180140629 @ 0x180140629
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1801402A4 @ 0x1801402A4 (sub_1801402A4.c)
 */

void __fastcall __noreturn sub_180140629(__int64 a1, __int64 a2)
{
  sub_1801402A4(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 120));
  throw;
}
