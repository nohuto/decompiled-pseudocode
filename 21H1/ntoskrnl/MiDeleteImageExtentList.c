/*
 * XREFs of MiDeleteImageExtentList @ 0x1408CB6C0
 * Callers:
 *     MiDeleteFileExtents @ 0x14063E2E4 (MiDeleteFileExtents.c)
 *     MiCreateImageFileMap @ 0x1406415A4 (MiCreateImageFileMap.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     MiLockImageExtentsExclusive @ 0x1408CB934 (MiLockImageExtentsExclusive.c)
 *     MiUnlockImageExtentsExclusive @ 0x1408CB964 (MiUnlockImageExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageExtentList(unsigned __int64 *P)
{
  __int64 i; // rbx

  MiLockImageExtentsExclusive();
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    RtlAvlRemoveNode(&qword_140C4CBE0, &P[6 * i + 1]);
  MiUnlockImageExtentsExclusive();
  ExFreePoolWithTag(P, 0);
}
