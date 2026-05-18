/*
 * XREFs of sub_180092F44 @ 0x180092F44
 * Callers:
 *     sub_180092C20 @ 0x180092C20 (sub_180092C20.c)
 *     sub_180092E7C @ 0x180092E7C (sub_180092E7C.c)
 * Callees:
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_1800910F0 @ 0x1800910F0 (sub_1800910F0.c)
 */

__int64 __fastcall sub_180092F44(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x80u;
  v6 = (_QWORD *)sub_180062680(a1);
  return sub_1800910F0((__int64 *)(a1 + 176), a2, a3, *(_DWORD *)(a1 + 124), 3, *(_DWORD *)(a1 + 304), v6);
}
