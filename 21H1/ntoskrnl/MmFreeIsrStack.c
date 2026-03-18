/*
 * XREFs of MmFreeIsrStack @ 0x1408CC908
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B625C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A404CC (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MmFreeIndependentPages @ 0x14074CF40 (MmFreeIndependentPages.c)
 */

__int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *PteAddress; // rax

  v1 = a1 - 24576;
  MmFreeIndependentPages(a1 - 24576, 0x6000uLL);
  PteAddress = (_QWORD *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_140C4EE80, PteAddress, 1u);
}
