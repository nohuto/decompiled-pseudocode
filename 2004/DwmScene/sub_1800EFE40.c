/*
 * XREFs of sub_1800EFE40 @ 0x1800EFE40
 * Callers:
 *     sub_18008CE38 @ 0x18008CE38 (sub_18008CE38.c)
 *     sub_1800C0970 @ 0x1800C0970 (sub_1800C0970.c)
 * Callees:
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 */

__int64 __fastcall sub_1800EFE40(__int64 a1, _QWORD *a2, char a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r8

  v5 = sub_1800ED0C0(*(_QWORD *)(a1 + 16), a2);
  LOBYTE(v6) = a3;
  return sub_1800EFE74(a1, v5, v6);
}
