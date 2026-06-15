/*
 * XREFs of sub_1800EF03D @ 0x1800EF03D
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1800EF03D(__int64 a1, __int64 a2)
{
  sub_1800472E0(*(_QWORD *)(a2 + 112), 0x30uLL);
  throw;
}
