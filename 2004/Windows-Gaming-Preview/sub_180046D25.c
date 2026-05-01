/*
 * XREFs of sub_180046D25 @ 0x180046D25
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003B3B4 @ 0x18003B3B4 (sub_18003B3B4.c)
 *     _CxxThrowException @ 0x1800453D8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180046D25(__int64 a1, __int64 a2)
{
  sub_18003B3B4(a1, *(_QWORD *)(a2 + 128));
  throw;
}
