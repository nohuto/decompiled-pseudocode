/*
 * XREFs of sub_180128319 @ 0x180128319
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DD178 @ 0x1800DD178 (sub_1800DD178.c)
 *     sub_1800DD2B8 @ 0x1800DD2B8 (sub_1800DD2B8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180128319(__int64 a1, __int64 *a2)
{
  sub_1800DD178(a2[14], a2[7], a2[13]);
  sub_1800DD2B8(a2[15], a2[9], a2[8]);
  throw;
}
