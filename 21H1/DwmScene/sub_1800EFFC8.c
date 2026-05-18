/*
 * XREFs of sub_1800EFFC8 @ 0x1800EFFC8
 * Callers:
 *     sub_1800A1330 @ 0x1800A1330 (sub_1800A1330.c)
 *     sub_1800E63B0 @ 0x1800E63B0 (sub_1800E63B0.c)
 *     sub_18010AF30 @ 0x18010AF30 (sub_18010AF30.c)
 * Callees:
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 */

int __fastcall sub_1800EFFC8(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800ED0C0(*(_QWORD *)(a1 + 16), a2);
  return sub_1800EE4F0(a1, v5, a3);
}
