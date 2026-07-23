/*
 * XREFs of MiDeleteImageExtentList @ 0x1408D0170
 * Callers:
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 *     MiDeleteFileExtents @ 0x1406FF658 (MiDeleteFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     MiLockImageExtentsExclusive @ 0x1408D03E4 (MiLockImageExtentsExclusive.c)
 *     MiUnlockImageExtentsExclusive @ 0x1408D0414 (MiUnlockImageExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageExtentList(unsigned __int64 *P)
{
  __int64 i; // rbx

  MiLockImageExtentsExclusive();
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    RtlAvlRemoveNode(&qword_140C4CCE0, &P[6 * i + 1]);
  MiUnlockImageExtentsExclusive();
  ExFreePoolWithTag(P, 0);
}
