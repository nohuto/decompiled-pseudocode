/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x1403716CC
 * Callers:
 *     VfAvlCleanupLockContext @ 0x1403715E4 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140371630 (VfAvlInsertReservedTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371700 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlDeleteTreeNode @ 0x140372184 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140372240 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x1409E3668 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall ViAvlReleaseTableLockFromDpcLevel(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rcx

  v2 = (volatile LONG *)(a1 + 128);
  if ( (*(_BYTE *)(a2 + 9) & 4) != 0 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v2);
  *(_BYTE *)(a2 + 9) &= ~2u;
  *(_QWORD *)a2 = 0LL;
}
