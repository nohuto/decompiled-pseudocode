/*
 * XREFs of MiDeleteImageExtentList @ 0x1408CCA10
 * Callers:
 *     MiDeleteFileExtents @ 0x140609194 (MiDeleteFileExtents.c)
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     MiLockImageExtentsExclusive @ 0x1408CCC84 (MiLockImageExtentsExclusive.c)
 *     MiUnlockImageExtentsExclusive @ 0x1408CCCB4 (MiUnlockImageExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteImageExtentList(unsigned __int64 *P)
{
  __int64 i; // rbx

  MiLockImageExtentsExclusive();
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    RtlAvlRemoveNode(&qword_140C4CAA0, &P[6 * i + 1]);
  MiUnlockImageExtentsExclusive();
  ExFreePoolWithTag(P, 0);
}
