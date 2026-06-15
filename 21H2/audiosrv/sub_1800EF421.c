/*
 * XREFs of sub_1800EF421 @ 0x1800EF421
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800EF9F8 @ 0x1800EF9F8 (sub_1800EF9F8.c)
 */

void __fastcall __noreturn sub_1800EF421(__int64 a1, __int64 a2)
{
  sub_1800EF9F8(a1, *(_QWORD *)(a2 + 128));
  throw;
}
