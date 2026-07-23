/*
 * XREFs of PnprInitiateReplaceOperation @ 0x1409AE72C
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PnprCompleteWake @ 0x14050F368 (PnprCompleteWake.c)
 *     PnprQuiesce @ 0x14050F958 (PnprQuiesce.c)
 *     PnprSwap @ 0x14050FCA8 (PnprSwap.c)
 *     PnprReplaceStart @ 0x1408AE89C (PnprReplaceStart.c)
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 *     PnprWakeProcessors @ 0x1409AFD4C (PnprWakeProcessors.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 PnprInitiateReplaceOperation()
{
  char v0; // r14
  char v1; // r15
  struct _WORK_QUEUE_ITEM *v2; // rdi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  unsigned int v26; // eax
  __int128 v28; // [rsp+30h] [rbp-48h] BYREF
  __int128 v29; // [rsp+40h] [rbp-38h]
  __int64 v30; // [rsp+50h] [rbp-28h]

  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v0 = 0;
  v1 = 0;
  v2 = 0LL;
  KeInitializeEvent((PRKEVENT)(PnprContext + 20760), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 20784), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 20808), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 20832), NotificationEvent, 0);
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) == 0 )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x51706E50u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = PnprContext;
      v5 = -1073741670;
      v6 = *(_DWORD *)(PnprContext + 20984);
      if ( !v6 )
        v6 = 1663;
      v7 = *(_DWORD *)(PnprContext + 20988);
      *(_DWORD *)(PnprContext + 20984) = v6;
      if ( !v7 )
        v7 = 10;
      *(_DWORD *)(v4 + 20988) = v7;
      goto LABEL_46;
    }
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PnprQuiesceWorker;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
  }
  v5 = PnprReplaceStart();
  if ( v5 < 0 )
  {
    v8 = PnprContext;
    v9 = *(_DWORD *)(PnprContext + 20984);
    if ( !v9 )
      v9 = 1678;
    *(_DWORD *)(PnprContext + 20984) = v9;
    v10 = *(_DWORD *)(v8 + 20988);
    if ( !v10 )
      v10 = 1;
    *(_DWORD *)(v8 + 20988) = v10;
    goto LABEL_46;
  }
  v1 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    goto LABEL_25;
  if ( (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    *((_QWORD *)&v29 + 1) = 0LL;
    *(_QWORD *)&v28 = PnprStartMirroring;
    *((_QWORD *)&v28 + 1) = PnprEndMirroring;
    *(_QWORD *)&v29 = PnprMirrorPhysicalMemory;
    v30 = 8LL;
    v5 = MmDuplicateMemory((__int64)&v28);
    if ( v5 == 1073742484 )
      v5 = 0;
    goto LABEL_46;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(PnprContext + 20952))(*(_QWORD *)(PnprContext + 20880));
  if ( v5 < 0 )
  {
    v11 = PnprContext;
    v12 = *(_DWORD *)(PnprContext + 20984);
    if ( !v12 )
      v12 = 1746;
    *(_DWORD *)(PnprContext + 20984) = v12;
    v13 = *(_DWORD *)(v11 + 20988);
    if ( !v13 )
      v13 = 8;
    *(_DWORD *)(v11 + 20988) = v13;
  }
  else
  {
LABEL_25:
    CurrentIrql = KeGetCurrentIrql();
    v5 = PnprQuiesce();
    if ( v5 < 0 )
    {
      v18 = PnprContext;
      v19 = *(_DWORD *)(PnprContext + 20984);
      if ( !v19 )
        v19 = 1779;
      *(_DWORD *)(PnprContext + 20984) = v19;
      v20 = *(_DWORD *)(v18 + 20988);
      if ( !v20 )
        v20 = 1;
      *(_DWORD *)(v18 + 20988) = v20;
    }
    else
    {
      v0 = 1;
      v5 = PnprSwap();
      if ( v5 < 0 )
      {
        ((void (__fastcall *)(__int64, _QWORD))off_140C00688[0])(3LL, *(_QWORD *)(PnprContext + 20872));
        v15 = PnprContext;
        v16 = *(_DWORD *)(PnprContext + 20984);
        if ( !v16 )
          v16 = 1769;
        *(_DWORD *)(PnprContext + 20984) = v16;
        v17 = *(_DWORD *)(v15 + 20988);
        if ( !v17 )
          v17 = 1;
        *(_DWORD *)(v15 + 20988) = v17;
      }
      PnprWakeProcessors();
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v25 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_46:
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    if ( v0 )
      PnprCompleteWake();
  }
  else if ( v2 )
  {
    KeSetEvent((PRKEVENT)(PnprContext + 20808), 0, 0);
    KeWaitForSingleObject((PVOID)(PnprContext + 20832), Executive, 0, 0, 0LL);
  }
  if ( *(_QWORD *)(PnprContext + 20872) )
    off_140C00690[0]();
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD))(PnprContext + 20920))(*(_QWORD *)(PnprContext + 20880));
      if ( v5 >= 0 )
        return v26;
    }
  }
  return (unsigned int)v5;
}
