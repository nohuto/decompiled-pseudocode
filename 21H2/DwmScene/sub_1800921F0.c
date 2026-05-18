/*
 * XREFs of sub_1800921F0 @ 0x1800921F0
 * Callers:
 *     sub_1800A9CEC @ 0x1800A9CEC (sub_1800A9CEC.c)
 * Callees:
 *     sub_1800F5040 @ 0x1800F5040 (sub_1800F5040.c)
 */

__int64 __fastcall sub_1800921F0(__int64 a1, int a2)
{
  if ( *(_QWORD *)(a1 + 120) )
    sub_1800F5040();
  return sub_180067E60(a1, a2);
}
