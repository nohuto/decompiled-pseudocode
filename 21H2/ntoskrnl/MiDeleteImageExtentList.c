/*
 * XREFs of MiDeleteImageExtentList @ 0x1408D0010
 * Callers:
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 *     MiDeleteFileExtents @ 0x1406E8278 (MiDeleteFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140234B20 (RtlAvlRemoveNode.c)
 *     MiLockImageExtentsExclusive @ 0x1408D0284 (MiLockImageExtentsExclusive.c)
 *     MiUnlockImageExtentsExclusive @ 0x1408D02B4 (MiUnlockImageExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageExtentList(unsigned __int64 *P)
{
  __int64 i; // rbx

  MiLockImageExtentsExclusive();
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    RtlAvlRemoveNode(&qword_140C4CCA0, &P[6 * i + 1]);
  MiUnlockImageExtentsExclusive();
  ExFreePoolWithTag(P, 0);
}
