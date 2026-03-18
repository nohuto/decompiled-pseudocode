/*
 * XREFs of RtlpFreeAtom @ 0x1406F1D5C
 * Callers:
 *     RtlCreateAtomTableEx @ 0x140201810 (RtlCreateAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1402018E8 (RtlpAllocateAtomTableEntry.c)
 *     RtlAddAtomToAtomTableEx @ 0x14024FF20 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140349684 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x140349758 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x1403497E8 (RtlpFreeAllAtom.c)
 *     RtlDestroyAtomTable @ 0x1406F1B30 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x14090FDC0 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x14066A7FC (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL);
  ExFreePoolWithTag(v1, 0);
}
