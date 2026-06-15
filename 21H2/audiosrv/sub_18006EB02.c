/*
 * XREFs of sub_18006EB02 @ 0x18006EB02
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_18006EB02(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 64) = sub_1800C437C(
                           *(_QWORD *)(a2 + 296),
                           956LL,
                           "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp");
  return 0LL;
}
