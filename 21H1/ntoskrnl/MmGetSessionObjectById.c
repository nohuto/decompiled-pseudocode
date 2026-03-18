/*
 * XREFs of MmGetSessionObjectById @ 0x14025B084
 * Callers:
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     NtSetInformationObject @ 0x1406C12A0 (NtSetInformationObject.c)
 *     SeSetSessionIdToken @ 0x1406E4A08 (SeSetSessionIdToken.c)
 *     SepSetTokenSessionById @ 0x1406F7AEC (SepSetTokenSessionById.c)
 *     SeExchangePrimaryToken @ 0x1407A36C8 (SeExchangePrimaryToken.c)
 *     IoGetContainerInformation @ 0x140890450 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x1408904D0 (IoRegisterContainerNotification.c)
 * Callees:
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void *__fastcall MmGetSessionObjectById(unsigned int a1)
{
  void *v1; // rdi
  __int64 SessionById; // rax
  struct _DMA_ADAPTER *v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v1 = 0LL;
  SessionById = MmGetSessionById(a1);
  v3 = (struct _DMA_ADAPTER *)SessionById;
  if ( SessionById )
  {
    v4 = *(_QWORD *)(SessionById + 1368);
    v1 = *(void **)(v4 + 72);
    KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
    if ( (*(_DWORD *)(v4 + 4) & 2) != 0 )
      v1 = 0LL;
    else
      ObfReferenceObjectWithTag(v1, 0x746C6644u);
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
          v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    HalPutDmaAdapter(v3);
  }
  return v1;
}
