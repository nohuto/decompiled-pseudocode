/*
 * XREFs of IoRetrievePriorityInfo @ 0x14033FD80
 * Callers:
 *     <none>
 * Callees:
 *     IoGetIoPriorityHint @ 0x140221E10 (IoGetIoPriorityHint.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __stdcall IoRetrievePriorityInfo(
        PIRP Irp,
        PFILE_OBJECT FileObject,
        PETHREAD Thread,
        PIO_PRIORITY_INFO PriorityInfo)
{
  int v4; // r14d
  int v5; // ebp
  _DWORD *FileObjectExtension; // rax
  _IO_PRIORITY_HINT IoPriorityThread; // edx
  unsigned int BasePriority; // eax
  unsigned int v11; // edx
  int v13; // edx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *i; // rcx
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf

  v4 = 0;
  v5 = 2;
  PriorityInfo->IoPriority = IoPriorityNormal;
  if ( !Irp || (Irp->Flags & 0xE0000) == 0 )
  {
    if ( FileObject )
    {
      FileObjectExtension = FileObject->FileObjectExtension;
      if ( FileObjectExtension )
      {
        v13 = FileObjectExtension[20];
        if ( v13 )
        {
          IoPriorityThread = v13 - 1;
        }
        else
        {
          if ( !Thread )
            goto LABEL_42;
          IoPriorityThread = (unsigned int)PsGetIoPriorityThread((__int64)Thread);
        }
        goto LABEL_7;
      }
      if ( Thread )
      {
        IoPriorityThread = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
        if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          IoPriorityThread = IoPriorityVeryLow;
        }
        else if ( (unsigned int)IoPriorityThread >= IoPriorityNormal )
        {
LABEL_7:
          PriorityInfo->IoPriority = IoPriorityThread;
          goto LABEL_8;
        }
        if ( Thread == KeGetCurrentThread() && LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
          IoPriorityThread = IoPriorityNormal;
        goto LABEL_7;
      }
    }
    else if ( Thread )
    {
      PriorityInfo->IoPriority = PsGetIoPriorityThread((__int64)Thread);
      goto LABEL_9;
    }
LABEL_42:
    *(_QWORD *)&PriorityInfo->ThreadPriority = -1LL;
    return 0;
  }
  PriorityInfo->IoPriority = IoGetIoPriorityHint(Irp);
LABEL_8:
  if ( !Thread )
    goto LABEL_42;
LABEL_9:
  if ( Thread->Priority >= 16 || !Thread->SchedulingGroup )
    goto LABEL_11;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulingGroup = Thread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    for ( i = (char *)SchedulingGroup + CurrentPrcb->ScbOffset; i; i = (char *)*((_QWORD *)i + 51) )
    {
      v4 = ((unsigned __int8)i[112] >> 3) & 1;
      if ( v4 )
        break;
    }
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v4 )
    BasePriority = 1;
  else
LABEL_11:
    BasePriority = Thread->BasePriority;
  PriorityInfo->ThreadPriority = BasePriority;
  v11 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
  if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    if ( v11 < 2 )
      v5 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
    v11 = v5;
  }
  PriorityInfo->PagePriority = v11;
  return 0;
}
