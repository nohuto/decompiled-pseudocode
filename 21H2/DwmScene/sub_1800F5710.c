/*
 * XREFs of sub_1800F5710 @ 0x1800F5710
 * Callers:
 *     sub_180092708 @ 0x180092708 (sub_180092708.c)
 *     sub_1800C6240 @ 0x1800C6240 (sub_1800C6240.c)
 * Callees:
 *     sub_1800F2990 @ 0x1800F2990 (sub_1800F2990.c)
 */

__int64 __fastcall sub_1800F5710(__int64 a1, _QWORD *a2, char a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r8

  v5 = sub_1800F2990(*(_QWORD *)(a1 + 16), a2);
  LOBYTE(v6) = a3;
  return sub_1800F5744(a1, v5, v6);
}
