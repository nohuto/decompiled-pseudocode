/*
 * XREFs of IoDiskIoAttributionDereference @ 0x1402DB1B4
 * Callers:
 *     IoNotifyQuotaState @ 0x140201200 (IoNotifyQuotaState.c)
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     CcUninitializeCacheMap @ 0x140231350 (CcUninitializeCacheMap.c)
 *     CcCompleteAsyncRead @ 0x140234DF0 (CcCompleteAsyncRead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402356D8 (MiCheckAndUpdateIoAttribution.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     CcCopyReadEx @ 0x140287C10 (CcCopyReadEx.c)
 *     CcPerformReadAhead @ 0x1402BDB04 (CcPerformReadAhead.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1402D4688 (IoSetDiskIoAttributionOnProcess.c)
 *     IoGetIoRateControl @ 0x1402DAE20 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1402DAFC4 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x1402DB040 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1402DB1B4 (IoDiskIoAttributionDereference.c)
 *     MmUpdateSectionIoAttribution @ 0x1402DCBA4 (MmUpdateSectionIoAttribution.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     PspIoRateEntryActivate @ 0x1405CD9B0 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405CDAB8 (PspIoRateEntryDeactivate.c)
 *     MiSegmentDelete @ 0x14063E304 (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x140675FF0 (PspRemoveIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1402DB1B4 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall IoDiskIoAttributionDereference(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *(_QWORD *)(a1 + 176);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
