/*
 * XREFs of MmFreeIsrStack @ 0x1408CDC58
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B757C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A45D28 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MmFreeIndependentPages @ 0x1407515D0 (MmFreeIndependentPages.c)
 */

__int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *PteAddress; // rax

  v1 = a1 - 24576;
  MmFreeIndependentPages(a1 - 24576, 0x6000uLL);
  PteAddress = (_QWORD *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_140C4ED40, PteAddress, 1u);
}
