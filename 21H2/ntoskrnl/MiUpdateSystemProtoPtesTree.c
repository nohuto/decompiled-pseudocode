/*
 * XREFs of MiUpdateSystemProtoPtesTree @ 0x1402F8260
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140239170 (MiDeleteSubsectionPages.c)
 *     MiDeleteEmptySubsections @ 0x1402BD5BC (MiDeleteEmptySubsections.c)
 *     MiDeletePerSessionProtos @ 0x1402CF174 (MiDeletePerSessionProtos.c)
 *     MiCreatePrototypePtes @ 0x1402F7DF8 (MiCreatePrototypePtes.c)
 *     MiDeleteCachedSubsection @ 0x140528DAC (MiDeleteCachedSubsection.c)
 *     MiCreatePagingFileMap @ 0x14061C548 (MiCreatePagingFileMap.c)
 *     MiExtendSection @ 0x140689798 (MiExtendSection.c)
 *     MiAllocatePerSessionProtos @ 0x1406BCA38 (MiAllocatePerSessionProtos.c)
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x1406D5038 (MiBuildImageControlArea.c)
 *     MiSegmentDelete @ 0x1406E8110 (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x1406E8298 (MiDeletePageFileSectionNodes.c)
 *     MiAllocateFileExtents @ 0x1408CF510 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x140234B20 (RtlAvlRemoveNode.c)
 *     MiObtainProtoBaseFromNode @ 0x1402F8350 (MiObtainProtoBaseFromNode.c)
 *     RtlAvlInsertNodeEx @ 0x140316550 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateSystemProtoPtesTree(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // r8
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = MiObtainProtoBaseFromNode(a1, &v13);
  v5 = ExAcquireSpinLockExclusive(&dword_140C4CB40);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4CB38, a1);
    a1[3] &= ~8uLL;
    goto LABEL_9;
  }
  v7 = (_QWORD *)qword_140C4CB38;
  LOBYTE(v6) = 0;
  if ( !qword_140C4CB38 )
    goto LABEL_8;
  while ( 1 )
  {
    v14 = 0LL;
    if ( v4 < MiObtainProtoBaseFromNode(v7, &v14) )
      break;
    v8 = (_QWORD *)v7[1];
    if ( !v8 )
    {
      LOBYTE(v6) = 1;
      goto LABEL_8;
    }
LABEL_5:
    v7 = v8;
  }
  v8 = (_QWORD *)*v7;
  if ( *v7 )
    goto LABEL_5;
  LOBYTE(v6) = 0;
LABEL_8:
  RtlAvlInsertNodeEx(&qword_140C4CB38, v7, v6, a1);
  a1[3] |= 8uLL;
LABEL_9:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4CB40);
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
