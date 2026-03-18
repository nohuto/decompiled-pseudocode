/*
 * XREFs of MmGetImageSectionBasedAddress @ 0x1408C6D90
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 */

__int64 __fastcall MmGetImageSectionBasedAddress(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)MiSectionControlArea(a1) + 32LL);
}
