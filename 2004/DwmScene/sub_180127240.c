/*
 * XREFs of sub_180127240 @ 0x180127240
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AE070 @ 0x1800AE070 (sub_1800AE070.c)
 *     sub_1800AE34C @ 0x1800AE34C (sub_1800AE34C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180127240(__int64 a1, __int64 *a2)
{
  sub_1800AE070(a2[6], a2[4], a2[7]);
  sub_1800AE34C(a2[6], a2[8], a2[5]);
  throw;
}
