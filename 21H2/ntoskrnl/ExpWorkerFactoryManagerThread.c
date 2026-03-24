/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x1403B75A0
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueue @ 0x140202DD0 (KeRemoveQueue.c)
 *     KeRegisterObjectNotification @ 0x140202F18 (KeRegisterObjectNotification.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140242EF0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140286990 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeTimeOutQueueWaiters @ 0x1402871CC (KeTimeOutQueueWaiters.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x1402CBED4 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
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
        (__int64)&ExpWorkerFactoryThreadCreationBlock);
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
        KeRegisterObjectNotification((__int64)&v2[20].Blink, (__int64)&ExpWorkerFactoryManagerQueue, (__int64)&v2[29]);
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
            v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v14 = (v18 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v18;
            if ( v14 )
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
        ExpWorkerFactoryCheckCreate((char *)v2, &LockHandle, 0);
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v9 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v10 = KeGetCurrentIrql();
            if ( v10 <= 0xFu && LockHandle.OldIrql <= 0xFu && v10 >= 2u )
            {
              v11 = KeGetCurrentPrcb();
              v12 = v11->SchedulerAssist;
              v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v14 = (v13 & v12[5]) == 0;
              v12[5] &= v13;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick(v11);
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
