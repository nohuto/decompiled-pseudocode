/*
 * XREFs of MmAllocateIsrStack @ 0x14079FB38
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MmSetPageProtection @ 0x1403797D0 (MmSetPageProtection.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 *     MiMarkBootGuardPage @ 0x14079FBBC (MiMarkBootGuardPage.c)
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
