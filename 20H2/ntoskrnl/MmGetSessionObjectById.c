/*
 * XREFs of MmGetSessionObjectById @ 0x140209854
 * Callers:
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     SepSetTokenSessionById @ 0x14068F030 (SepSetTokenSessionById.c)
 *     SeSetSessionIdToken @ 0x1406A8CE8 (SeSetSessionIdToken.c)
 *     NtSetInformationObject @ 0x1406BB240 (NtSetInformationObject.c)
 *     SeExchangePrimaryToken @ 0x1407B6FE4 (SeExchangePrimaryToken.c)
 *     IoGetContainerInformation @ 0x1408973F0 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x140897470 (IoRegisterContainerNotification.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionById @ 0x140297320 (MmGetSessionById.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void *__fastcall MmGetSessionObjectById(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  __int64 SessionById; // rax
  struct _DMA_ADAPTER *v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  SessionById = MmGetSessionById(a1, a2);
  v4 = (struct _DMA_ADAPTER *)SessionById;
  if ( SessionById )
  {
    v5 = *(_QWORD *)(SessionById + 1368);
    v2 = *(void **)(v5 + 72);
    KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
    if ( (*(_DWORD *)(v5 + 4) & 2) != 0 )
      v2 = 0LL;
    else
      ObfReferenceObjectWithTag(v2, 0x746C6644u);
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
          v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    HalPutDmaAdapter(v4);
  }
  return v2;
}
