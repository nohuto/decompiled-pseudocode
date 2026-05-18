/*
 * XREFs of sub_18012DC31 @ 0x18012DC31
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E2A48 @ 0x1800E2A48 (sub_1800E2A48.c)
 *     sub_1800E2B88 @ 0x1800E2B88 (sub_1800E2B88.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012DC31(__int64 a1, __int64 *a2)
{
  sub_1800E2A48(a2[14], a2[7], a2[13]);
  sub_1800E2B88(a2[15], a2[9], a2[8]);
  throw;
}
