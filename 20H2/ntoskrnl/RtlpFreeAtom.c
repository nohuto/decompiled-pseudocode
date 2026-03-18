/*
 * XREFs of RtlpFreeAtom @ 0x14068D0CC
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140233C50 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1402E12E0 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x1402E13B4 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x1402E1444 (RtlpFreeAllAtom.c)
 *     RtlpAllocateAtomTableEntry @ 0x14033BA90 (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x14033BB70 (RtlCreateAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x14068CEA0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140915900 (RtlEmptyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1405F70FC (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL);
  ExFreePoolWithTag(v1, 0);
}
