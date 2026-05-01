/*
 * XREFs of sub_180009B2C @ 0x180009B2C
 * Callers:
 *     sub_1800063F8 @ 0x1800063F8 (sub_1800063F8.c)
 *     sub_18000E85C @ 0x18000E85C (sub_18000E85C.c)
 *     sub_18003DB40 @ 0x18003DB40 (sub_18003DB40.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180009B2C(__int64 a1, __int64 a2, _QWORD *a3)
{
  memset(a3, 0, 0x58uLL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 24)) <= 1 )
    __fastfail(0xEu);
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = -1LL;
  a3[3] = 1LL;
  a3[4] = a2 + 40;
  return sub_180009BA8(a1, a3 + 5);
}
