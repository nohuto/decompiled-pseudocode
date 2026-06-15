/*
 * XREFs of sub_18007C5A4 @ 0x18007C5A4
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_180137F70 @ 0x180137F70 (sub_180137F70.c)
 */

void __fastcall __noreturn sub_18007C5A4(__int64 a1, __int64 a2)
{
  sub_180137F70(*(_QWORD *)(a2 + 96), a2 + 112, *(_QWORD *)(a2 + 120));
  throw;
}
