/*
 * XREFs of sub_18006DE8C @ 0x18006DE8C
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18006DE8C(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 48) = sub_1800C437C(
                           *(_QWORD *)(a2 + 40),
                           3922LL,
                           "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp");
  return 0LL;
}
