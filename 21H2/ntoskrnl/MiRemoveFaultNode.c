/*
 * XREFs of MiRemoveFaultNode @ 0x1402458FC
 * Callers:
 *     MiMapPagesToZero @ 0x1402D88C0 (MiMapPagesToZero.c)
 *     MiDecrementHugeContext @ 0x140397F68 (MiDecrementHugeContext.c)
 *     MiScrubNodeLargePageList @ 0x140557078 (MiScrubNodeLargePageList.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  char v1; // bl
  volatile LONG *v3; // rdi
  __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 71);
  v3 = &dword_140C4E5B0;
  if ( v1 )
    v3 = &dword_140C4E5A0;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  v4 = &qword_140C4E5B8;
  if ( v1 )
    v4 = &qword_140C4E5A8;
  RtlAvlRemoveNode(v4, a1);
  *(_BYTE *)(a1 + 68) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
}
