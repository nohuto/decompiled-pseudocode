/*
 * XREFs of sub_180127539 @ 0x180127539
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B0374 @ 0x1800B0374 (sub_1800B0374.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180127539(__int64 a1, __int64 a2)
{
  sub_1800B0374(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
