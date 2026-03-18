/*
 * XREFs of MiDeleteImageExtentList @ 0x1408D2850
 * Callers:
 *     MiDeleteFileExtents @ 0x140681F54 (MiDeleteFileExtents.c)
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     MiLockImageExtentsExclusive @ 0x1408D2AC4 (MiLockImageExtentsExclusive.c)
 *     MiUnlockImageExtentsExclusive @ 0x1408D2AF4 (MiUnlockImageExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageExtentList(unsigned __int64 *P)
{
  __int64 i; // rbx

  MiLockImageExtentsExclusive();
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    RtlAvlRemoveNode(&qword_140C4CB20, &P[6 * i + 1]);
  MiUnlockImageExtentsExclusive();
  ExFreePoolWithTag(P, 0);
}
