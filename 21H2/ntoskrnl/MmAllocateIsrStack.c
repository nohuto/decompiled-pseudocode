/*
 * XREFs of MmAllocateIsrStack @ 0x14079F938
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA678 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MmSetPageProtection @ 0x140379C80 (MmSetPageProtection.c)
 *     MmAllocateIndependentPagesEx @ 0x140762A0C (MmAllocateIndependentPagesEx.c)
 *     MiMarkBootGuardPage @ 0x14079F9BC (MiMarkBootGuardPage.c)
 */

char __fastcall MmAllocateIsrStack(_QWORD *a1, int a2)
{
  __int64 IndependentPages; // rax
  unsigned __int64 v4; // rbx
  __int64 PteAddress; // rax
  unsigned __int64 v7; // rbx

  if ( *a1 )
  {
    v7 = *a1 - 24576LL;
    if ( MmSetPageProtection(v7, 0x6000uLL, 4u) )
    {
      v4 = v7 - 4096;
      goto LABEL_4;
    }
  }
  else
  {
    IndependentPages = MmAllocateIndependentPagesEx(0x7000uLL, a2, 0LL, 0LL);
    v4 = IndependentPages;
    if ( IndependentPages )
    {
      *a1 = IndependentPages + 28672;
LABEL_4:
      PteAddress = MiGetPteAddress(v4);
      MiMarkBootGuardPage(PteAddress);
      return 1;
    }
  }
  return 0;
}
