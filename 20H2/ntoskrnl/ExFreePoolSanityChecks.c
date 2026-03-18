/*
 * XREFs of ExFreePoolSanityChecks @ 0x1409EFF50
 * Callers:
 *     VerifierExFreePool @ 0x1409D81A0 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409D8230 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14033093C (MmDeterminePoolType.c)
 *     ExIsSpecialPoolAddress @ 0x1405B8690 (ExIsSpecialPoolAddress.c)
 *     KevSkipVerification @ 0x1405C8A9C (KevSkipVerification.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ExFreePoolSanityChecks(ULONG_PTR a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int8 CurrentIrql; // di
  unsigned int *v6; // rsi
  char v7; // al
  ULONG_PTR v8; // rdx

  result = KevSkipVerification();
  if ( !(_DWORD)result )
  {
    if ( a1 <= 0x7FFFFFFEFFFFLL )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10uLL, a1, 0LL, 0LL);
    if ( !ExpSpecialAllocations || (result = ExIsSpecialPoolAddress(a1, v3, v4), !(_DWORD)result) )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (a1 & 0xFFF) == 0 )
      {
        result = MmDeterminePoolType(a1);
        if ( (result & 1) != 0 )
        {
          if ( CurrentIrql > 1u )
            return VerifierBugCheckIfAppropriate(0xC4u, 0x11uLL, CurrentIrql, (int)result, a1);
        }
        else if ( CurrentIrql > 2u )
        {
          return VerifierBugCheckIfAppropriate(0xC4u, 0x12uLL, CurrentIrql, (int)result, a1);
        }
        return result;
      }
      if ( (a1 & 0xF) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x16uLL, 0x15A9uLL, a1, 0LL);
      v6 = (unsigned int *)(a1 - 16);
      v7 = *(_BYTE *)(a1 - 16 + 3);
      if ( (v7 & 3) == 0 )
      {
        VerifierBugCheckIfAppropriate(0xC4u, 0x13uLL, 0x15B3uLL, a1 - 16, *v6);
        v7 = *((_BYTE *)v6 + 3);
      }
      result = v7 & 3;
      if ( (result & 1) != 0 )
      {
        if ( CurrentIrql <= 1u )
          goto LABEL_22;
        v8 = 17LL;
      }
      else
      {
        if ( CurrentIrql <= 2u )
          goto LABEL_22;
        v8 = 18LL;
      }
      result = VerifierBugCheckIfAppropriate(0xC4u, v8, CurrentIrql, (unsigned int)result, a1);
LABEL_22:
      if ( (*((_BYTE *)v6 + 3) & 2) == 0 )
        return VerifierBugCheckIfAppropriate(0xC4u, 0x14uLL, 0x15D0uLL, a1 - 16, 0LL);
    }
  }
  return result;
}
