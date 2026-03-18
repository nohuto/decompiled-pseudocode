/*
 * XREFs of MiRemoveFaultNode @ 0x140355ABC
 * Callers:
 *     MiMapPagesToZero @ 0x14023D1E0 (MiMapPagesToZero.c)
 *     MiDecrementHugeContext @ 0x1403954E8 (MiDecrementHugeContext.c)
 *     MiScrubNodeLargePageList @ 0x140551998 (MiScrubNodeLargePageList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1)
{
  char v1; // bl
  volatile LONG *v3; // rdi
  __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 71);
  v3 = &dword_140C4E370;
  if ( v1 )
    v3 = &dword_140C4E360;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  v4 = &qword_140C4E378;
  if ( v1 )
    v4 = &qword_140C4E368;
  RtlAvlRemoveNode((unsigned __int64 *)v4, (unsigned __int64 *)a1);
  *(_BYTE *)(a1 + 68) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
}
