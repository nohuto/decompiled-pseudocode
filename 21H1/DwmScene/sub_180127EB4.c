/*
 * XREFs of sub_180127EB4 @ 0x180127EB4
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF540 @ 0x1800CF540 (sub_1800CF540.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180127EB4(__int64 a1, __int64 a2)
{
  sub_1800CF540(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
