/*
 * XREFs of sub_18003C0A7 @ 0x18003C0A7
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019300 @ 0x180019300 (sub_180019300.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18003C0A7(__int64 a1, __int64 a2)
{
  sub_180019300(a1, *(_QWORD **)(a2 + 112));
  throw;
}
