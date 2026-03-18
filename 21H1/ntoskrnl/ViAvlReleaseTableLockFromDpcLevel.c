/*
 * XREFs of ViAvlReleaseTableLockFromDpcLevel @ 0x14036EB4C
 * Callers:
 *     VfAvlCleanupLockContext @ 0x14036EA64 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14036EAB0 (VfAvlInsertReservedTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14036EB80 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     VfAvlDeleteTreeNode @ 0x14036F604 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14036F6C0 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x1409DD5E8 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
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
