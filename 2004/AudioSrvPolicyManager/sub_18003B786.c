/*
 * XREFs of sub_18003B786 @ 0x18003B786
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009230 @ 0x180009230 (sub_180009230.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003B786(__int64 a1, __int64 a2)
{
  sub_180009230(a1, *(void **)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
