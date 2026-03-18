/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x1403B27A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140245EC0 (ExpWorkerFactoryCheckCreate.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1402BFBF0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x1402C048C (KeRegisterObjectNotification.c)
 *     KeTimeOutQueueWaiters @ 0x1403059C0 (KeTimeOutQueueWaiters.c)
 *     KeRemoveQueue @ 0x14030A540 (KeRemoveQueue.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14031C624 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall __noreturn ExpWorkerFactoryManagerThread(PVOID StartContext)
{
  PLIST_ENTRY v1; // rax
  PLIST_ENTRY v2; // rbx
  struct _LIST_ENTRY *Flink; // rdi
  _DWORD *v4; // r9
  unsigned int v5; // r8d
  unsigned int Blink; // eax
  char v7; // di
  unsigned __int64 OldIrql; // rsi
  unsigned __int64 v9; // rdi
  _DWORD *v10; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    while ( 1 )
    {
      v1 = KeRemoveQueue(&ExpWorkerFactoryManagerQueue, 0, 0LL);
      if ( v1 != (PLIST_ENTRY)&ExpWorkerFactoryThreadCreationBlock )
        break;
      ExpWorkerFactoryDeferredThreadCreation();
      KeRegisterObjectNotification(
        (__int64)&ExpWorkerFactoryThreadCreationTimer,
        (__int64)&ExpWorkerFactoryManagerQueue,
        (__int64)&ExpWorkerFactoryThreadCreationBlock,
        v10);
    }
    if ( LODWORD(v1[3].Flink) )
    {
      v2 = v1 - 29;
      Flink = v1[-28].Flink;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Flink, &LockHandle);
      if ( !LODWORD(v2[19].Flink) )
      {
        v5 = (unsigned int)v2[18].Flink;
        Blink = (unsigned int)v2[17].Blink;
        if ( v5 > Blink )
          KeTimeOutQueueWaiters((__int64)Flink->Blink, -(__int64)v2[7].Flink, v5 - Blink, v4);
      }
      if ( BYTE1(Flink[2].Flink) )
      {
        v7 = 1;
      }
      else
      {
        v7 = 0;
        KeRegisterObjectNotification(
          (__int64)&v2[20].Blink,
          (__int64)&ExpWorkerFactoryManagerQueue,
          (__int64)&v2[29],
          v4);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v15 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v7 )
        goto LABEL_15;
    }
    else
    {
      v2 = (PLIST_ENTRY)((char *)v1 - 520);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v1[-32].Blink, &LockHandle);
      LODWORD(v2[19].Blink) &= ~0x400u;
      if ( ((__int64)v2[19].Blink & 0x200) != 0 && ExpTryEnterWorkerFactoryAwayMode(v2) )
      {
        ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)v2, &LockHandle, 0);
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v9 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v11 = KeGetCurrentIrql();
            if ( v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
            {
              v12 = KeGetCurrentPrcb();
              v13 = v12->SchedulerAssist;
              v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v15 = (v14 & v13[5]) == 0;
              v13[5] &= v14;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick(v12);
            }
          }
        }
        __writecr8(v9);
      }
LABEL_15:
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    }
  }
}
