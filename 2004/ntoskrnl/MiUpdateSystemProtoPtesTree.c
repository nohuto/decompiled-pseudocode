/*
 * XREFs of MiUpdateSystemProtoPtesTree @ 0x1402639D0
 * Callers:
 *     MiDeleteSubsectionPages @ 0x14022A1F0 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x14026356C (MiCreatePrototypePtes.c)
 *     MiDeleteEmptySubsections @ 0x140265820 (MiDeleteEmptySubsections.c)
 *     MiDeletePerSessionProtos @ 0x14035CCDC (MiDeletePerSessionProtos.c)
 *     MiDeleteCachedSubsection @ 0x1405238FC (MiDeleteCachedSubsection.c)
 *     MiSegmentDelete @ 0x1406091B4 (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x140609AD8 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x14060A014 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 *     MiExtendSection @ 0x14060CDB0 (MiExtendSection.c)
 *     MiBuildImageControlArea @ 0x1406F14F0 (MiBuildImageControlArea.c)
 *     MiAllocatePerSessionProtos @ 0x14070A848 (MiAllocatePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140249BF0 (RtlAvlInsertNodeEx.c)
 *     MiObtainProtoBaseFromNode @ 0x140263AC0 (MiObtainProtoBaseFromNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  v5 = ExAcquireSpinLockExclusive(&dword_140C4C940);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4C938, a1);
    a1[3] &= ~8uLL;
    goto LABEL_9;
  }
  v6 = (_QWORD *)qword_140C4C938;
  v7 = 0;
  if ( !qword_140C4C938 )
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
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4C938, (unsigned __int64)v6, v7, a1);
  a1[3] |= 8uLL;
LABEL_9:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C940);
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
