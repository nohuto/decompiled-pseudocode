/*
 * XREFs of MmFreeIsrStack @ 0x1408D3A98
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BD198 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MmFreeIndependentPages @ 0x1407601B0 (MmFreeIndependentPages.c)
 */

char __fastcall MmFreeIsrStack(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *PteAddress; // rax

  v1 = a1 - 24576;
  MmFreeIndependentPages(a1 - 24576, 0x6000uLL);
  PteAddress = (_QWORD *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_140C4EDC0, PteAddress, 1u);
}
