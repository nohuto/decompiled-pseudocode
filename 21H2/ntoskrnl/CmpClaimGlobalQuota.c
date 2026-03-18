/*
 * XREFs of CmpClaimGlobalQuota @ 0x14068B144
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x14053F520 (CmpAllocateForNonPagedHive.c)
 *     CmpAllocate @ 0x14068B0E0 (CmpAllocate.c)
 *     HvpMapHiveImageFromViewMap @ 0x14068C154 (HvpMapHiveImageFromViewMap.c)
 *     HvpAddBin @ 0x14068C820 (HvpAddBin.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1408410FC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAllocateNonPagedBin @ 0x140924648 (HvpAllocateNonPagedBin.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x14068B198 (CmpUpdateGlobalQuotaAllowed.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpClaimGlobalQuota(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  CmpUpdateGlobalQuotaAllowed(a1, a2, (unsigned int)a1);
  if ( !(_DWORD)v2 || v2 >= CmpGlobalQuotaAllowed - CmpGlobalQuotaUsed )
    return 0;
  _InterlockedExchangeAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, v2);
  if ( CmpGlobalQuotaUsed > (unsigned __int64)CmpGlobalQuotaWarning
    && !CmpQuotaWarningPopupDisplayed
    && ExReadyForErrors )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
      CmpQuotaWarningPopupDisplayed = 1;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
  }
  return 1;
}
