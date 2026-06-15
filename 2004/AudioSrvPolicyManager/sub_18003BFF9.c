/*
 * XREFs of sub_18003BFF9 @ 0x18003BFF9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009230 @ 0x180009230 (sub_180009230.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003BFF9(__int64 a1, __int64 a2)
{
  sub_180009230(a1, *(void **)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
