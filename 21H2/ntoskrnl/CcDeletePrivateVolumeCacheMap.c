/*
 * XREFs of CcDeletePrivateVolumeCacheMap @ 0x14053BFB8
 * Callers:
 *     CcCreatePrivateVolumeCacheMap @ 0x14053BE0C (CcCreatePrivateVolumeCacheMap.c)
 *     CcReapPrivateVolumeCachemap @ 0x14053D880 (CcReapPrivateVolumeCachemap.c)
 * Callees:
 *     CcForEachNumaNode @ 0x140258140 (CcForEachNumaNode.c)
 *     CcDereferencePartition @ 0x140276728 (CcDereferencePartition.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x140276AAC (CcDecrementVolumeUseCountWithDelete.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     CcDeleteNumaNode @ 0x14053E61C (CcDeleteNumaNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeletePrivateVolumeCacheMap(char *P)
{
  __int64 *v1; // rdi
  __int64 v3; // rbp
  void *v4; // rcx
  __int64 v5; // rax
  __int64 **v6; // rsi
  __int64 *v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  __int64 **v10; // rsi
  __int64 *v11; // rax
  __int64 *v12; // r15
  __int64 v13; // rcx
  bool v14; // zf
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  char v21; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0LL;
  v21 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcDeletePrivateVolumeCacheMap-BEGIN: PVCM:%p(vid:%2lx)\n",
    KeGetCurrentThread()[1].CycleTime,
    *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime,
    P,
    *((_DWORD *)P + 6));
  v3 = *((_QWORD *)P + 4);
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcDeletePrivateVolumeCacheMap: PVCM:%p(vid:%2lx) Setting ExitEvent\n",
    KeGetCurrentThread()[1].CycleTime,
    *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime,
    P,
    *((_DWORD *)P + 6));
  KeSetEvent((PRKEVENT)P + 49, 0, 0);
  KeSetEvent((PRKEVENT)P + 50, 0, 0);
  v4 = (void *)*((_QWORD *)P + 153);
  if ( v4 )
  {
    ZwWaitForSingleObject(v4, 0, 0LL);
    ZwClose(*((HANDLE *)P + 153));
    *((_QWORD *)P + 153) = 0LL;
  }
  CcDereferencePartition(v3);
  v5 = _InterlockedDecrement64((volatile signed __int64 *)P + 1);
  if ( v5 <= 0 )
  {
    if ( v5 )
      __fastfail(0xEu);
    KeSetEvent((PRKEVENT)P + 50, 0, 0);
  }
  CcDecrementVolumeUseCountWithDelete(*((_DWORD **)P + 5), 0, &v21);
  while ( *((_QWORD *)P + 1) )
    KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
  if ( P[984] )
  {
    P[984] = 0;
    KeCancelTimer((PKTIMER)(P + 920));
  }
  v6 = (__int64 **)(P + 1544);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (__int64 *)v6 )
      break;
    v8 = *v7;
    if ( (__int64 **)v7[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
LABEL_26:
      __fastfail(3u);
    *v6 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v6;
    ExFreePoolWithTag(v7, 0x71576343u);
  }
  v9 = (void *)*((_QWORD *)P + 134);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x70546343u);
    *((_QWORD *)P + 134) = 0LL;
  }
  CcForEachNumaNode(
    (__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))CcUnInitializeAsyncReadForNodeHelper,
    v3,
    (__int64)P,
    0LL);
  v10 = (__int64 **)(P + 48);
  while ( 1 )
  {
    v11 = *v10;
    v12 = v1;
    if ( *v10 == (__int64 *)v10 )
      break;
    v13 = *v11;
    if ( (__int64 **)v11[1] != v10 || *(__int64 **)(v13 + 8) != v11 )
      goto LABEL_26;
    *v10 = (__int64 *)v13;
    v1 = v11 - 4;
    *(_QWORD *)(v13 + 8) = v10;
    CcDeleteNumaNode(v11 - 4);
    if ( v12 )
      v1 = v12;
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x754E6343u);
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcDeletePrivateVolumeCacheMap-END: PVCM:%p(vid:%2lx), PVCMCount:%lu\n",
    KeGetCurrentThread()[1].CycleTime,
    *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime,
    P,
    *((_DWORD *)P + 6),
    *(_DWORD *)(v3 + 48) - 1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 704), &LockHandle);
  v14 = (*(_DWORD *)(v3 + 48))-- == 1;
  if ( v14 )
    KeSetEvent((PRKEVENT)(v3 + 56), 0, 0);
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
        v14 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  ExFreePoolWithTag(P, 0x6D566343u);
}
