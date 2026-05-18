/*
 * XREFs of sub_18012A4C5 @ 0x18012A4C5
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D330 @ 0x18006D330 (sub_18006D330.c)
 *     sub_18006D6C8 @ 0x18006D6C8 (sub_18006D6C8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012A4C5(__int64 a1, __int64 *a2)
{
  sub_18006D330(a2[13], a2[4], a2[12]);
  sub_18006D6C8(a2[15], a2[14], a2[8]);
  throw;
}
