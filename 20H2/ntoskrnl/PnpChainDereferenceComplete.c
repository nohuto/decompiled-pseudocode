/*
 * XREFs of PnpChainDereferenceComplete @ 0x140742A20
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140203590 (IopCompleteUnloadOrDelete.c)
 *     PnpIsChainDereferenced @ 0x14036FF88 (PnpIsChainDereferenced.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     IopSetRelationsTag @ 0x140740710 (IopSetRelationsTag.c)
 *     PnpDelayedRemoveWorker @ 0x14076D540 (PnpDelayedRemoveWorker.c)
 */

void __fastcall PnpChainDereferenceComplete(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rbx
  int *v6; // rcx
  _QWORD *v7; // rax
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rcx
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  for ( i = (PVOID *)IopPendingSurpriseRemovals; ; i = (PVOID *)*i )
  {
    if ( i == &IopPendingSurpriseRemovals )
      goto LABEL_14;
    if ( !*((_BYTE *)i + 104) && (int)IopSetRelationsTag((__int64 *)i[8], a1) >= 0 )
    {
      v6 = *(int **)i[8];
      v7 = i[7];
      v8 = v6[2];
      v9 = *v6;
      v10 = v7 ? *(_QWORD *)(v7[39] + 40LL) : 0LL;
      if ( v8 == v9 && *(_DWORD *)(v10 + 300) != 782 )
        break;
    }
  }
  v11 = PnpDelayedRemovePending == 0;
  *((_BYTE *)i + 104) = 1;
  if ( !v11 )
  {
LABEL_14:
    ExReleaseResourceLite(&IopSurpriseRemoveListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return;
  }
  PnpDelayedRemovePending = 1;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( a2 && KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    PnpDelayedRemoveWorker(0LL);
  }
  else
  {
    PnpDelayedRemoveWorkItem.Parameter = 0LL;
    PnpDelayedRemoveWorkItem.List.Flink = 0LL;
    PnpDelayedRemoveWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDelayedRemoveWorker;
    ExQueueWorkItem(&PnpDelayedRemoveWorkItem, DelayedWorkQueue);
  }
}
