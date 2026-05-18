/*
 * XREFs of sub_180098CFC @ 0x180098CFC
 * Callers:
 *     sub_1800984F0 @ 0x1800984F0 (sub_1800984F0.c)
 *     sub_180098C30 @ 0x180098C30 (sub_180098C30.c)
 * Callees:
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_1800969C0 @ 0x1800969C0 (sub_1800969C0.c)
 */

__int64 __fastcall sub_180098CFC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  *(_DWORD *)(a1 + 292) |= 0x400u;
  v8 = (_QWORD *)sub_180067F50(a1);
  sub_1800969C0((__int64 *)(a1 + 208), a2, a4, *(_DWORD *)(a1 + 124), 6, *(_DWORD *)(a1 + 304), v8);
  v9 = (_QWORD *)sub_180067F50(a1);
  return sub_1800969C0((__int64 *)(a1 + 224), a3, a4, *(_DWORD *)(a1 + 124), 7, *(_DWORD *)(a1 + 304), v9);
}
