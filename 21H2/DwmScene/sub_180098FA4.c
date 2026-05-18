/*
 * XREFs of sub_180098FA4 @ 0x180098FA4
 * Callers:
 *     sub_1800984F0 @ 0x1800984F0 (sub_1800984F0.c)
 *     sub_180098EDC @ 0x180098EDC (sub_180098EDC.c)
 * Callees:
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_1800968E8 @ 0x1800968E8 (sub_1800968E8.c)
 */

__int64 __fastcall sub_180098FA4(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x100u;
  v6 = (_QWORD *)sub_180067F50(a1);
  return sub_1800968E8((__int64 *)(a1 + 144), a2, a3, *(_DWORD *)(a1 + 124), 0, *(_DWORD *)(a1 + 304), v6);
}
