/*
 * XREFs of sub_1800090D8 @ 0x1800090D8
 * Callers:
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 * Callees:
 *     sub_180009F08 @ 0x180009F08 (sub_180009F08.c)
 */

__int64 __fastcall sub_1800090D8(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = sub_180009F08(a1 + 64, 0x100000LL, a2);
  if ( (int)result >= 0 )
  {
    result = sub_180009F08(a1 + 72, 0x100000LL, a3);
    if ( (int)result >= 0 )
    {
      result = TpAllocWait(a1 + 80, sub_1800037C0, a1, 0LL);
      if ( (int)result >= 0 )
      {
        result = TpAllocWait(a1 + 88, sub_1800037C0, a1, 0LL);
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}
