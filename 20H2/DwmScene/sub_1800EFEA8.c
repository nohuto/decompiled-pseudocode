/*
 * XREFs of sub_1800EFEA8 @ 0x1800EFEA8
 * Callers:
 *     sub_18008CE44 @ 0x18008CE44 (sub_18008CE44.c)
 *     sub_1800A1324 @ 0x1800A1324 (sub_1800A1324.c)
 *     sub_1800C19D0 @ 0x1800C19D0 (sub_1800C19D0.c)
 * Callees:
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 */

__int64 __fastcall sub_1800EFEA8(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800ED0C0(*(_QWORD *)(a1 + 16), a2);
  return sub_1800EE4A8(a1, v5, a3);
}
