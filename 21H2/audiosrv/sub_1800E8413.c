/*
 * XREFs of sub_1800E8413 @ 0x1800E8413
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_1800E8413(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 96) = sub_1800C437C(
                           *(_QWORD *)(a2 + 88),
                           580,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           a4);
  return 0LL;
}
