/*
 * XREFs of sub_18003CE24 @ 0x18003CE24
 * Callers:
 *     sub_18000E85C @ 0x18000E85C (sub_18000E85C.c)
 *     sub_18003CAD0 @ 0x18003CAD0 (sub_18003CAD0.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18003CE24(__int64 a1, __int64 a2, _QWORD *a3)
{
  memset(a3, 0, 0x58uLL);
  a3[2] = -1LL;
  a3[4] = a2 + 40;
  a3[3] = 1LL;
  return sub_180009BA8(a1, a3 + 5);
}
