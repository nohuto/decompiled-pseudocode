/*
 * XREFs of RtlpFreeAtom @ 0x1405D5D5C
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x140203018 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x1402030EC (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x14020317C (RtlpFreeAllAtom.c)
 *     RtlAddAtomToAtomTableEx @ 0x1402A8F50 (RtlAddAtomToAtomTableEx.c)
 *     RtlCreateAtomTableEx @ 0x1402E50E0 (RtlCreateAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1402E51B8 (RtlpAllocateAtomTableEntry.c)
 *     RtlDestroyAtomTable @ 0x1405D5B30 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x14090EA20 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x14061551C (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
