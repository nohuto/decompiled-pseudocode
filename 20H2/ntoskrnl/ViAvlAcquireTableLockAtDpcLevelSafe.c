/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371700
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140371630 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140372184 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140372240 (VfAvlLookupTreeNode.c)
 *     VfAvlEnumerateNodes @ 0x1409E3668 (VfAvlEnumerateNodes.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402971C0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403716CC (ViAvlReleaseTableLockFromDpcLevel.c)
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
