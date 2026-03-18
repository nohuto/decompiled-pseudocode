/*
 * XREFs of MmMarkImageForHiberPhase @ 0x140A4F9F4
 * Callers:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140A4FA24 (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  _QWORD *v1; // rax

  v1 = MiLookupDataTableEntry(a1, 2);
  return MiMarkNonPagedHiberPhasePages(v1[6], v1[6] + *((unsigned int *)v1 + 16) - 1LL, 0LL);
}
