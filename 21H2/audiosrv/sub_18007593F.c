/*
 * XREFs of sub_18007593F @ 0x18007593F
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18007593F(__int64 a1, __int64 a2)
{
  sub_1800583E4(*(__int64 **)(a2 + 120), *(__int64 **)(a2 + 40));
  sub_1800472E0(*(_QWORD *)(a2 + 112), 8LL * *(_QWORD *)(a2 + 136));
  throw;
}
