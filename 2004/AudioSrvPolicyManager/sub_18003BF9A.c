/*
 * XREFs of sub_18003BF9A @ 0x18003BF9A
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018754 @ 0x180018754 (sub_180018754.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003BF9A(__int64 a1, __int64 a2)
{
  sub_180018754(*(__int64 **)(a2 + 96), *(_QWORD *)(a2 + 120));
  throw;
}
