/*
 * XREFs of MiDeleteFileExtentList @ 0x140970668
 * Callers:
 *     MiDeleteSegmentPages @ 0x14027034C (MiDeleteSegmentPages.c)
 *     MiEnableImageDirectMap @ 0x14059E4B0 (MiEnableImageDirectMap.c)
 *     MiDeleteFileExtents @ 0x1406F48DC (MiDeleteFileExtents.c)
 *     MiCreateImageFileMap @ 0x140707E70 (MiCreateImageFileMap.c)
 *     MiAllocateFileExtents @ 0x14096F8CC (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     MiGetExtentTable @ 0x14059F224 (MiGetExtentTable.c)
 *     MiLockFileExtentsExclusive @ 0x140970960 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x140970990 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteFileExtentList(_DWORD *P)
{
  __int64 v2; // rbx
  unsigned __int64 *i; // rsi
  unsigned __int64 *v4; // rdx

  MiLockFileExtentsExclusive();
  v2 = 0LL;
  for ( i = (unsigned __int64 *)MiGetExtentTable(P[1]); (unsigned int)v2 < *P; v2 = (unsigned int)(v2 + 1) )
  {
    v4 = (unsigned __int64 *)&P[12 * v2 + 2];
    if ( v4[4] != 0x8000000000000000uLL )
      RtlAvlRemoveNode(i, v4);
  }
  MiUnlockFileExtentsExclusive();
  ExFreePoolWithTag(P, 0);
}
