/*
 * XREFs of sub_180046315 @ 0x180046315
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D998 @ 0x18000D998 (sub_18000D998.c)
 *     sub_18000D9DC @ 0x18000D9DC (sub_18000D9DC.c)
 *     _CxxThrowException @ 0x1800453D8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180046315(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  sub_18000D998(a1, *(__int64 **)(a2 + 120), *(__int64 **)(a2 + 48));
  sub_18000D9DC(v3, *(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 136));
  throw;
}
