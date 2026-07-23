/*
 * XREFs of ExpWorkerFactoryManagerThread @ 0x1403B7710
 * Callers:
 *     <none>
 * Callees:
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140203B30 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeTimeOutQueueWaiters @ 0x14020436C (KeTimeOutQueueWaiters.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14024A624 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     KeRemoveQueue @ 0x1402A7710 (KeRemoveQueue.c)
 *     KeRegisterObjectNotification @ 0x1402A7858 (KeRegisterObjectNotification.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402E7740 (ExpWorkerFactoryCheckCreate.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall __noreturn ExpWorkerFactoryManagerThread(PVOID StartContext)
{
  PLIST_ENTRY v1; // rax
  PLIST_ENTRY v2; // rbx
  struct _LIST_ENTRY *Flink; // rdi
  unsigned int v4; // r8d
  unsigned int Blink; // eax
  char v6; // di
  unsigned __int64 OldIrql; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
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
        v4 = (unsigned int)v2[18].Flink;
        Blink = (unsigned int)v2[17].Blink;
        if ( v4 > Blink )
          KeTimeOutQueueWaiters((__int64)Flink->Blink, -(__int64)v2[7].Flink, v4 - Blink);
      }
      if ( BYTE1(Flink[2].Flink) )
      {
        v6 = 1;
      }
      else
      {
        v6 = 0;
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
            v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v13 = (v17 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v17;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v6 )
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
        v8 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v9 = KeGetCurrentIrql();
            if ( v9 <= 0xFu && LockHandle.OldIrql <= 0xFu && v9 >= 2u )
            {
              v10 = KeGetCurrentPrcb();
              v11 = v10->SchedulerAssist;
              v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v13 = (v12 & v11[5]) == 0;
              v11[5] &= v12;
              if ( v13 )
                KiRemoveSystemWorkPriorityKick(v10);
            }
          }
        }
        __writecr8(v8);
      }
LABEL_15:
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
    }
  }
}
