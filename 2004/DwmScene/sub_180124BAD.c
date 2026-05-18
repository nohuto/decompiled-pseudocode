/*
 * XREFs of sub_180124BAD @ 0x180124BAD
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067A60 @ 0x180067A60 (sub_180067A60.c)
 *     sub_180067DF8 @ 0x180067DF8 (sub_180067DF8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180124BAD(__int64 a1, __int64 *a2)
{
  sub_180067A60(a2[13], a2[4], a2[12]);
  sub_180067DF8(a2[15], a2[14], a2[8]);
  throw;
}
