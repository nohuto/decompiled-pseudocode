/*
 * XREFs of sub_1800463BB @ 0x1800463BB
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F3E0 @ 0x18000F3E0 (sub_18000F3E0.c)
 *     _CxxThrowException @ 0x1800453D8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1800463BB(__int64 a1, __int64 a2)
{
  sub_18000F3E0(a1, *(_QWORD *)(a2 + 128));
  throw;
}
