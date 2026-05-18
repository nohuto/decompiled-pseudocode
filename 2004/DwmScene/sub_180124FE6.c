/*
 * XREFs of sub_180124FE6 @ 0x180124FE6
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B574 @ 0x18007B574 (sub_18007B574.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180124FE6(__int64 a1, __int64 a2)
{
  sub_18007B574(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
