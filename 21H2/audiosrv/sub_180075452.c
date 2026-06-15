/*
 * XREFs of sub_180075452 @ 0x180075452
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_180075452(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 112) = sub_1800C437C(
                            *(_QWORD *)(a2 + 88),
                            1927LL,
                            "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp");
  return 0LL;
}
