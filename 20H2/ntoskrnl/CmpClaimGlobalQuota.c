/*
 * XREFs of CmpClaimGlobalQuota @ 0x1405DE914
 * Callers:
 *     HvpAddBin @ 0x1405DB258 (HvpAddBin.c)
 *     CmpAllocate @ 0x1405DE8B0 (CmpAllocate.c)
 *     HvpMapHiveImageFromViewMap @ 0x140707084 (HvpMapHiveImageFromViewMap.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407AD76C (HvpBuildMapForMemoryBackedHive.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x1405DE968 (CmpUpdateGlobalQuotaAllowed.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
