/*
 * XREFs of ExAllocatePoolSanityChecks @ 0x1409EDDE4
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     ExpIsPoolTagPrintable @ 0x1409EE0D8 (ExpIsPoolTagPrintable.c)
 */

__int64 __fastcall ExAllocatePoolSanityChecks(int a1, ULONG_PTR a2, unsigned int *a3, __int64 a4)
{
  unsigned int v4; // r11d
  __int64 v6; // rbx
  ULONG_PTR v9; // r11
  __int64 result; // rax
  ULONG_PTR v11; // rdx

  v4 = *a3;
  v6 = a1;
  if ( *a3 )
  {
    if ( v4 == 541542722 )
    {
      if ( (MmVerifierData & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC2u, 0x9CuLL, a1 & 0xFFFFFFFFFFFFFF7FuLL, a2, a4);
      *a3 = 828662082;
    }
    else if ( !(unsigned int)ExpIsPoolTagPrintable(v4) )
    {
      if ( (MmVerifierData & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC2u, 0x9DuLL, v9, v6 & 0xFFFFFFFFFFFFFF7FuLL, a4);
      *a3 = 845439298;
    }
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC2u, 0x9BuLL, a1 & 0xFFFFFFFFFFFFFF7FuLL, a2, a4);
    *a3 = 811884866;
  }
  if ( !a2 && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0LL, KeGetCurrentIrql(), v6 & 0xFFFFFFFFFFFFFF7FuLL, 0LL);
  result = KeGetCurrentIrql();
  if ( (v6 & 1) != 0 )
  {
    if ( (unsigned __int8)result > 1u )
    {
      result = (unsigned int)MmVerifierData;
      if ( (MmVerifierData & 1) != 0 )
      {
        v11 = 1LL;
        return VerifierBugCheckIfAppropriate(0xC4u, v11, KeGetCurrentIrql(), v6 & 0xFFFFFFFFFFFFFF7FuLL, a2);
      }
    }
  }
  else
  {
    v11 = 2LL;
    if ( (unsigned __int8)result > 2u )
    {
      result = (unsigned int)MmVerifierData;
      if ( (MmVerifierData & 1) != 0 )
        return VerifierBugCheckIfAppropriate(0xC4u, v11, KeGetCurrentIrql(), v6 & 0xFFFFFFFFFFFFFF7FuLL, a2);
    }
  }
  return result;
}
