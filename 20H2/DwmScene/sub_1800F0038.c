/*
 * XREFs of sub_1800F0038 @ 0x1800F0038
 * Callers:
 *     sub_18008D1D8 @ 0x18008D1D8 (sub_18008D1D8.c)
 *     sub_1800A133C @ 0x1800A133C (sub_1800A133C.c)
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 *     sub_1800C12C4 @ 0x1800C12C4 (sub_1800C12C4.c)
 *     sub_1800C1AF8 @ 0x1800C1AF8 (sub_1800C1AF8.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 *     sub_18010AF30 @ 0x18010AF30 (sub_18010AF30.c)
 * Callees:
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 */

__int64 __fastcall sub_1800F0038(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax

  v3 = sub_1800ED0C0(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F006C(a1, v3);
}
