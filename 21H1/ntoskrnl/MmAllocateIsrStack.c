/*
 * XREFs of MmAllocateIsrStack @ 0x140781D84
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B625C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MmSetPageProtection @ 0x140376CE0 (MmSetPageProtection.c)
 *     MmAllocateIndependentPagesEx @ 0x14074B21C (MmAllocateIndependentPagesEx.c)
 *     MiMarkBootGuardPage @ 0x140781E08 (MiMarkBootGuardPage.c)
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
    IndependentPages = MmAllocateIndependentPagesEx(0x7000uLL, a2, 0LL, 0);
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
