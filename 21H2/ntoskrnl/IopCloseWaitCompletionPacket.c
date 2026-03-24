/*
 * XREFs of IopCloseWaitCompletionPacket @ 0x140359B90
 * Callers:
 *     <none>
 * Callees:
 *     IopCancelWaitCompletionPacket @ 0x140202CF0 (IopCancelWaitCompletionPacket.c)
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     Feature_2208782651__private_IsEnabledDeviceUsage @ 0x1403F1350 (Feature_2208782651__private_IsEnabledDeviceUsage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall IopCloseWaitCompletionPacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  KSPIN_LOCK *v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a4 == 1 )
  {
    v4 = (KSPIN_LOCK *)(a2 + 96);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    if ( (unsigned int)Feature_2208782651__private_IsEnabledDeviceUsage(v8, v7) )
      *(_BYTE *)(a2 + 105) = 1;
    v9 = *(KSPIN_LOCK **)(a2 + 88);
    if ( v9 )
      ObfReferenceObjectWithTag(*(PVOID *)(a2 + 88), 0x746C6644u);
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    if ( v9 )
    {
      KeAcquireInStackQueuedSpinLock(v9 + 8, &LockHandle);
      v15 = KeAcquireSpinLockRaiseToDpc(v4);
      Feature_2208782651__private_IsEnabledDeviceUsage(v17, v16);
      if ( !*(_BYTE *)(a2 + 104) || !IopCancelWaitCompletionPacket((_QWORD *)a2, 1, v15) )
      {
        KxReleaseSpinLock(v4);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v18 = KeGetCurrentIrql();
            if ( v18 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v18 >= 2u )
            {
              v19 = KeGetCurrentPrcb();
              v20 = v19->SchedulerAssist;
              v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
              v14 = (v21 & v20[5]) == 0;
              v20[5] &= v21;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
        }
        __writecr8(v15);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && LockHandle.OldIrql <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v14 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      __writecr8(OldIrql);
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
    }
  }
}
