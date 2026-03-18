/*
 * XREFs of MmMarkImageForHiberPhase @ 0x1409ADA44
 * Callers:
 *     PoSetHiberRange @ 0x140385760 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1409AD604 (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  __int64 v1; // rax

  v1 = MiLookupDataTableEntry(a1, 2);
  return MiMarkNonPagedHiberPhasePages(*(_QWORD *)(v1 + 48), *(_QWORD *)(v1 + 48) + *(unsigned int *)(v1 + 64) - 1LL, 0);
}
