/*
 * XREFs of HvlpSetupPageListIteration @ 0x1404FB74C
 * Callers:
 *     HvlpStartPageListIteration @ 0x1404FB7CC (HvlpStartPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1404FB7F4 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 */

int *__fastcall HvlpSetupPageListIteration(int a1, char a2)
{
  int *v3; // rbx
  PVOID v4; // rcx
  PVOID v5; // rax
  int *result; // rax

  v3 = &HvlpIteratorCrashdump;
  if ( !a1 )
    v3 = &HvlpIteratorHibernate;
  *v3 = 0;
  if ( a1 == 1 )
  {
    v4 = HvlpFallbackScratchPage;
    v5 = HvlpHibernateScratchPage;
  }
  else
  {
    v4 = HvlpHibernateScratchPage;
    v5 = HvlpFallbackScratchPage;
  }
  if ( !v4 )
    v4 = v5;
  *((_QWORD *)v3 + 1) = v4;
  if ( !v4 )
    return 0LL;
  *((PHYSICAL_ADDRESS *)v3 + 2) = MmGetPhysicalAddress(v4);
  result = v3;
  *((_BYTE *)v3 + 3) = a2;
  *((_BYTE *)v3 + 2) = 1;
  return result;
}
