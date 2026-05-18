/*
 * XREFs of sub_1800672C0 @ 0x1800672C0
 * Callers:
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067014 @ 0x180067014 (sub_180067014.c)
 *     sub_180067098 @ 0x180067098 (sub_180067098.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_180067288 @ 0x180067288 (sub_180067288.c)
 * Callees:
 *     sub_180066DEC @ 0x180066DEC (sub_180066DEC.c)
 *     sub_180066F8C @ 0x180066F8C (sub_180066F8C.c)
 */

bool __fastcall sub_1800672C0(__int64 a1, char a2)
{
  __int64 v4; // rdi
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(sub_180066F8C() + 8);
  return *sub_180066DEC(a1, &v6, a2) != v4;
}
