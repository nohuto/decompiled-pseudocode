/*
 * XREFs of CcDeletePartition @ 0x14053DAFC
 * Callers:
 *     CcGetPartitionWithCreate @ 0x14023EB0C (CcGetPartitionWithCreate.c)
 *     CcCreatePartition @ 0x1403D0F2C (CcCreatePartition.c)
 *     CcExitPartition @ 0x14053E098 (CcExitPartition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     CcForEachNumaNode @ 0x140258140 (CcForEachNumaNode.c)
 *     CcDereferencePartition @ 0x140276728 (CcDereferencePartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     CcUninitializePartitionVacbs @ 0x14053E3AC (CcUninitializePartitionVacbs.c)
 *     CcDeleteNumaNode @ 0x14053E61C (CcDeleteNumaNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeletePartition(char *P)
{
  __int64 *v2; // rdi
  void *v3; // rcx
  KIRQL v4; // al
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  int v16; // eax
  void *v17; // rcx
  __int64 **v18; // rsi
  __int64 *v19; // rax
  __int64 *v20; // rbp
  __int64 v21; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  KeSetEvent((PRKEVENT)(P + 1240), 0, 0);
  CcDereferencePartition((__int64)P);
  v3 = (void *)*((_QWORD *)P + 161);
  if ( v3 )
  {
    ZwWaitForSingleObject(v3, 0, 0LL);
    ZwClose(*((HANDLE *)P + 161));
    *((_QWORD *)P + 161) = 0LL;
  }
  if ( P[984] )
  {
    P[984] = 0;
    KeCancelTimer((PKTIMER)(P + 920));
  }
  if ( P[1229] )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v5 = *((_QWORD *)P + 1);
    v6 = v4;
    --CcPartitionCount;
    *(_QWORD *)(v5 + 8) = 0LL;
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  if ( CcEnablePerVolumeLazyWriter == 1 && *((_QWORD *)P + 154) )
  {
    KeWaitForSingleObject(P + 56, Executive, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)P + 88, &LockHandle);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v11 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)v14);
        }
      }
    }
    __writecr8(OldIrql);
  }
  v17 = (void *)*((_QWORD *)P + 134);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x70546343u);
    *((_QWORD *)P + 134) = 0LL;
  }
  CcUninitializePartitionVacbs(P);
  if ( CcEnablePerVolumeLazyWriter != 1 )
    CcForEachNumaNode(
      (__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))CcUnInitializeAsyncReadForNodeHelper,
      (__int64)P,
      0LL,
      0LL);
  v18 = (__int64 **)(P + 16);
  while ( 1 )
  {
    v19 = *v18;
    v20 = v2;
    if ( *v18 == (__int64 *)v18 )
      break;
    v21 = *v19;
    if ( (__int64 **)v19[1] != v18 || *(__int64 **)(v21 + 8) != v19 )
      __fastfail(3u);
    *v18 = (__int64 *)v21;
    v2 = v19 - 4;
    *(_QWORD *)(v21 + 8) = v18;
    CcDeleteNumaNode(v19 - 4);
    if ( v20 )
      v2 = v20;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x754E6343u);
  DbgPrintEx(0x7Fu, 2u, "CcDeletePartition: Partition Deleted=%p, PartitionObject=%p \n", P, *((const void **)P + 1));
  ExFreePoolWithTag(P, 0x72506343u);
}
