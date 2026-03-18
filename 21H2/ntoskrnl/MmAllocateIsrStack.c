/*
 * XREFs of MmAllocateIsrStack @ 0x140829ACC
 * Callers:
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MmSetPageProtection @ 0x1403C2120 (MmSetPageProtection.c)
 *     MiMarkBootGuardPage @ 0x140829B50 (MiMarkBootGuardPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 */

char __fastcall MmAllocateIsrStack(_QWORD *a1, __int64 a2)
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
    IndependentPages = MmAllocateIndependentPagesEx(28672LL, a2, 0LL, 0LL);
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
