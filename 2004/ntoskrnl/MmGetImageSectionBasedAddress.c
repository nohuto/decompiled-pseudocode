/*
 * XREFs of MmGetImageSectionBasedAddress @ 0x1408C0F50
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 */

__int64 __fastcall MmGetImageSectionBasedAddress(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)MiSectionControlArea(a1) + 32LL);
}
