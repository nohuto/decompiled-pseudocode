/*
 * XREFs of sub_1800936D4 @ 0x1800936D4
 * Callers:
 *     sub_180092C20 @ 0x180092C20 (sub_180092C20.c)
 *     sub_18009360C @ 0x18009360C (sub_18009360C.c)
 * Callees:
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_180091018 @ 0x180091018 (sub_180091018.c)
 */

__int64 __fastcall sub_1800936D4(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x100u;
  v6 = (_QWORD *)sub_180062680(a1);
  return sub_180091018((__int64 *)(a1 + 144), a2, a3, *(_DWORD *)(a1 + 124), 0, *(_DWORD *)(a1 + 304), v6);
}
