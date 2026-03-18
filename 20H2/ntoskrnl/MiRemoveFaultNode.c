/*
 * XREFs of MiRemoveFaultNode @ 0x14032677C
 * Callers:
 *     MiMapPagesToZero @ 0x1402C2890 (MiMapPagesToZero.c)
 *     MiDecrementHugeContext @ 0x1403979A8 (MiDecrementHugeContext.c)
 *     MiScrubNodeLargePageList @ 0x140555368 (MiScrubNodeLargePageList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  char v1; // bl
  volatile LONG *v3; // rdi
  __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 71);
  v3 = &dword_140C4E3F0;
  if ( v1 )
    v3 = &dword_140C4E3E0;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  v4 = &qword_140C4E3F8;
  if ( v1 )
    v4 = &qword_140C4E3E8;
  RtlAvlRemoveNode((unsigned __int64 *)v4, (unsigned __int64 *)a1);
  *(_BYTE *)(a1 + 68) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
}
