/*
 * XREFs of sub_1800F0A4C @ 0x1800F0A4C
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C437C @ 0x1800C437C (sub_1800C437C.c)
 */

__int64 __fastcall sub_1800F0A4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(a2 + 48) = sub_1800C437C(
                           *(_QWORD *)(a2 + 72),
                           371,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                           a4);
  return 0LL;
}
