/*
 * XREFs of MmGetImageSectionBasedAddress @ 0x1408C4550
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 */

__int64 __fastcall MmGetImageSectionBasedAddress(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)MiSectionControlArea(a1) + 32LL);
}
