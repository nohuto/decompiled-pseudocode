/*
 * XREFs of MmGetImageSectionBasedAddress @ 0x140881A7E
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 */

__int64 __fastcall MmGetImageSectionBasedAddress(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)MiSectionControlArea(a1) + 32LL);
}
