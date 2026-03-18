/*
 * XREFs of MiUpdateSystemProtoPtesTree @ 0x1402D5630
 * Callers:
 *     MiDeleteSubsectionPages @ 0x1402C7990 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x1402D51CC (MiCreatePrototypePtes.c)
 *     MiDeleteEmptySubsections @ 0x140300C50 (MiDeleteEmptySubsections.c)
 *     MiDeletePerSessionProtos @ 0x14032D664 (MiDeletePerSessionProtos.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 *     MiSegmentDelete @ 0x140681F74 (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x140682688 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 *     MiAllocatePerSessionProtos @ 0x1406DCC38 (MiAllocatePerSessionProtos.c)
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 *     MiExtendSection @ 0x140708F38 (MiExtendSection.c)
 *     MiBuildImageControlArea @ 0x14070AFF8 (MiBuildImageControlArea.c)
 *     MiAllocateFileExtents @ 0x1408D1D50 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiObtainProtoBaseFromNode @ 0x1402D5720 (MiObtainProtoBaseFromNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateSystemProtoPtesTree(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  _QWORD *v6; // r10
  bool v7; // r8
  _QWORD *v8; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = MiObtainProtoBaseFromNode(a1, &v13);
  v5 = ExAcquireSpinLockExclusive(&dword_140C4C9C0);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4C9B8, a1);
    a1[3] &= ~8uLL;
    goto LABEL_9;
  }
  v6 = (_QWORD *)qword_140C4C9B8;
  v7 = 0;
  if ( !qword_140C4C9B8 )
    goto LABEL_8;
  while ( 1 )
  {
    v14 = 0LL;
    if ( v4 < MiObtainProtoBaseFromNode(v6, &v14) )
      break;
    v8 = (_QWORD *)v6[1];
    if ( !v8 )
    {
      v7 = 1;
      goto LABEL_8;
    }
LABEL_5:
    v6 = v8;
  }
  v8 = (_QWORD *)*v6;
  if ( *v6 )
    goto LABEL_5;
  v7 = 0;
LABEL_8:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4C9B8, (unsigned __int64)v6, v7, a1);
  a1[3] |= 8uLL;
LABEL_9:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
