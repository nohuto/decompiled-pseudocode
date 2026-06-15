/*
 * XREFs of sub_18007A4D0 @ 0x18007A4D0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800CFDDC @ 0x1800CFDDC (sub_1800CFDDC.c)
 */

void __fastcall __noreturn sub_18007A4D0(__int64 a1, __int64 a2)
{
  sub_1800CFDDC(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 104));
  throw;
}
