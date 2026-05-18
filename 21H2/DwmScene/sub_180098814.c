/*
 * XREFs of sub_180098814 @ 0x180098814
 * Callers:
 *     sub_1800984F0 @ 0x1800984F0 (sub_1800984F0.c)
 *     sub_18009874C @ 0x18009874C (sub_18009874C.c)
 * Callees:
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_1800969C0 @ 0x1800969C0 (sub_1800969C0.c)
 */

__int64 __fastcall sub_180098814(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 0x80u;
  v6 = (_QWORD *)sub_180067F50(a1);
  return sub_1800969C0((__int64 *)(a1 + 176), a2, a3, *(_DWORD *)(a1 + 124), 3, *(_DWORD *)(a1 + 304), v6);
}
