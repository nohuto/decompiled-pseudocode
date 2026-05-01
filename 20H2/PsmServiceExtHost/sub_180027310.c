/*
 * XREFs of sub_180027310 @ 0x180027310
 * Callers:
 *     sub_1800271B8 @ 0x1800271B8 (sub_1800271B8.c)
 *     sub_1800276D4 @ 0x1800276D4 (sub_1800276D4.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180027310(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  memset(a2, 0, 0x58uLL);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24)) <= 1 )
    __fastfail(0xEu);
  *a2 = 0LL;
  result = a1 + 40;
  a2[1] = 0LL;
  a2[2] = -1LL;
  a2[3] = 1LL;
  a2[4] = a1 + 40;
  return result;
}
