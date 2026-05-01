/*
 * XREFs of sub_180007534 @ 0x180007534
 * Callers:
 *     sub_1800073FC @ 0x1800073FC (sub_1800073FC.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180007534(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  memset(a4, 0, 0x40uLL);
  *a4 = a1;
  a4[7] = a2;
  result = _InterlockedIncrement64((volatile signed __int64 *)(a3 + 16));
  if ( result <= 1 )
    __fastfail(0xEu);
  a4[5] = -1LL;
  a4[6] = a3;
  return result;
}
