/*
 * XREFs of sub_1800F0588 @ 0x1800F0588
 * Callers:
 *     sub_18008D54C @ 0x18008D54C (sub_18008D54C.c)
 *     sub_1800A13D0 @ 0x1800A13D0 (sub_1800A13D0.c)
 *     sub_1800C0970 @ 0x1800C0970 (sub_1800C0970.c)
 *     sub_1800C1B38 @ 0x1800C1B38 (sub_1800C1B38.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 *     sub_1800E9AE0 @ 0x1800E9AE0 (sub_1800E9AE0.c)
 * Callees:
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 */

__int64 __fastcall sub_1800F0588(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v5; // ax

  v5 = sub_1800ED0C0(*(_QWORD *)(a1 + 16), a2);
  return sub_1800EE560(a1, v5, a3);
}
