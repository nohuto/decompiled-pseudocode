/*
 * XREFs of sub_180075FCD @ 0x180075FCD
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_1800EF9F8 @ 0x1800EF9F8 (sub_1800EF9F8.c)
 */

void __fastcall __noreturn sub_180075FCD(__int64 a1, __int64 a2)
{
  sub_1800EF9F8(a1, *(_QWORD *)(a2 + 144));
  throw;
}
