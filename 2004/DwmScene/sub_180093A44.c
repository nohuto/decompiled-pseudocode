/*
 * XREFs of sub_180093A44 @ 0x180093A44
 * Callers:
 *     sub_180092C20 @ 0x180092C20 (sub_180092C20.c)
 *     sub_18009397C @ 0x18009397C (sub_18009397C.c)
 * Callees:
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_180090F40 @ 0x180090F40 (sub_180090F40.c)
 */

__int64 __fastcall sub_180093A44(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 1u;
  v6 = (_QWORD *)sub_180062680(a1);
  return sub_180090F40((__int64 *)(a1 + 240), a2, a3, *(_DWORD *)(a1 + 124), 4, *(_DWORD *)(a1 + 304), v6);
}
