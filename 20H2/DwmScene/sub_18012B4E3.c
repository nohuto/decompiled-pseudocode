/*
 * XREFs of sub_18012B4E3 @ 0x18012B4E3
 * Callers:
 *     <none>
 * Callees:
 *     sub_180089BB4 @ 0x180089BB4 (sub_180089BB4.c)
 *     sub_18011A62C @ 0x18011A62C (sub_18011A62C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012B4E3(__int64 a1, __int64 *a2)
{
  sub_180089BB4(a2[4], a2 + 5, a2[19]);
  sub_18011A62C(a2[4], (__int64)(a2 + 6));
  throw;
}
