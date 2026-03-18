/*
 * XREFs of MiRemoveFaultNode @ 0x140317F9C
 * Callers:
 *     MiMapPagesToZero @ 0x140296210 (MiMapPagesToZero.c)
 *     MiDecrementHugeContext @ 0x140394918 (MiDecrementHugeContext.c)
 *     MiScrubNodeLargePageList @ 0x140551348 (MiScrubNodeLargePageList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  char v1; // bl
  volatile LONG *v3; // rdi
  __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 71);
  v3 = &dword_140C4E4B0;
  if ( v1 )
    v3 = &dword_140C4E4A0;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  v4 = &qword_140C4E4B8;
  if ( v1 )
    v4 = &qword_140C4E4A8;
  RtlAvlRemoveNode((unsigned __int64 *)v4, (unsigned __int64 *)a1);
  *(_BYTE *)(a1 + 68) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
}
