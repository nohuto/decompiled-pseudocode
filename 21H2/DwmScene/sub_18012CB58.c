/*
 * XREFs of sub_18012CB58 @ 0x18012CB58
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B3940 @ 0x1800B3940 (sub_1800B3940.c)
 *     sub_1800B3C1C @ 0x1800B3C1C (sub_1800B3C1C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CB58(__int64 a1, __int64 *a2)
{
  sub_1800B3940(a2[6], a2[4], a2[7]);
  sub_1800B3C1C(a2[6], a2[8], a2[5]);
  throw;
}
