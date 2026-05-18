/*
 * XREFs of sub_180098E6C @ 0x180098E6C
 * Callers:
 *     sub_1800984F0 @ 0x1800984F0 (sub_1800984F0.c)
 *     sub_180098DA0 @ 0x180098DA0 (sub_180098DA0.c)
 * Callees:
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_1800968E8 @ 0x1800968E8 (sub_1800968E8.c)
 */

__int64 __fastcall sub_180098E6C(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  _QWORD *v7; // rax

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x10u;
  *(_DWORD *)(a1 + 292) |= 0x10u;
  v7 = (_QWORD *)sub_180067F50(a1);
  return sub_1800968E8((__int64 *)(a1 + 160), a2, a3, *(_DWORD *)(a1 + 124), 1, *(_DWORD *)(a1 + 304), v7);
}
