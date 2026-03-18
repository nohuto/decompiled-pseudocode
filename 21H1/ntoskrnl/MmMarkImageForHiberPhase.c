/*
 * XREFs of MmMarkImageForHiberPhase @ 0x1409ACBE4
 * Callers:
 *     PoSetHiberRange @ 0x1403847F0 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140324C98 (MiLookupDataTableEntry.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1409AC7A4 (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  __int64 v1; // rax

  v1 = MiLookupDataTableEntry(a1, 2);
  return MiMarkNonPagedHiberPhasePages(*(_QWORD *)(v1 + 48), *(_QWORD *)(v1 + 48) + *(unsigned int *)(v1 + 64) - 1LL, 0);
}
