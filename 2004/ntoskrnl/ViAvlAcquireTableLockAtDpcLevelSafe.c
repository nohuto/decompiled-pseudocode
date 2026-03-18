/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14036F7B0
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14036F6E0 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140370234 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1403702F0 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x1409DD648 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14036F77C (ViAvlReleaseTableLockFromDpcLevel.c)
 */

void __fastcall ViAvlAcquireTableLockAtDpcLevelSafe(__int64 a1, __int64 a2)
{
  char v2; // al
  volatile LONG *v5; // rcx

  v2 = *(_BYTE *)(a2 + 9);
  if ( (v2 & 2) == 0 )
    goto LABEL_2;
  if ( *(_QWORD *)a2 != a1 )
  {
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a2, a2);
    v2 = *(_BYTE *)(a2 + 9);
  }
  if ( (v2 & 2) == 0 )
  {
LABEL_2:
    v5 = (volatile LONG *)(a1 + 128);
    if ( (v2 & 4) != 0 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    *(_BYTE *)(a2 + 9) |= 2u;
    *(_QWORD *)a2 = a1;
  }
}
