/*
 * XREFs of MiAweControlArea @ 0x1402496E8
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x14024B270 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x14054877C (MiReferenceAweHandle.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiDeletePageFileSectionNodes @ 0x140609AD8 (MiDeletePageFileSectionNodes.c)
 *     MmGetSectionInformation @ 0x140661AB0 (MmGetSectionInformation.c)
 *     MiDereferenceFailedControlArea @ 0x140710F04 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAweControlArea(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
