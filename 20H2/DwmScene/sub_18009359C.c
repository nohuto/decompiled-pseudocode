/*
 * XREFs of sub_18009359C @ 0x18009359C
 * Callers:
 *     sub_180092C20 @ 0x180092C20 (sub_180092C20.c)
 *     sub_1800934D0 @ 0x1800934D0 (sub_1800934D0.c)
 * Callees:
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_180091018 @ 0x180091018 (sub_180091018.c)
 */

__int64 __fastcall sub_18009359C(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  _QWORD *v7; // rax

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x10u;
  *(_DWORD *)(a1 + 292) |= 0x10u;
  v7 = (_QWORD *)sub_180062680(a1);
  return sub_180091018((__int64 *)(a1 + 160), a2, a3, *(_DWORD *)(a1 + 124), 1, *(_DWORD *)(a1 + 304), v7);
}
