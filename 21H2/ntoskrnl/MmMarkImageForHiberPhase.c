/*
 * XREFs of MmMarkImageForHiberPhase @ 0x1409B08B4
 * Callers:
 *     PoSetHiberRange @ 0x140388060 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1409B0474 (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = MiLookupDataTableEntry(a1, 2LL, a3, a4);
  return MiMarkNonPagedHiberPhasePages(*(_QWORD *)(v4 + 48), *(_QWORD *)(v4 + 48) + *(unsigned int *)(v4 + 64) - 1LL, 0);
}
