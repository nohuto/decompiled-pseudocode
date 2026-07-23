/*
 * XREFs of IoDiskIoAttributionDereference @ 0x140207954
 * Callers:
 *     IoNotifyQuotaState @ 0x140201210 (IoNotifyQuotaState.c)
 *     MmUpdateSectionIoAttribution @ 0x140207338 (MmUpdateSectionIoAttribution.c)
 *     IoGetIoRateControl @ 0x1402075C0 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x140207764 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x1402077E0 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x140207954 (IoDiskIoAttributionDereference.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140274B54 (IoSetDiskIoAttributionOnProcess.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     CcUninitializeCacheMap @ 0x140301600 (CcUninitializeCacheMap.c)
 *     CcCompleteAsyncRead @ 0x140302390 (CcCompleteAsyncRead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140303768 (MiCheckAndUpdateIoAttribution.c)
 *     CcPerformReadAhead @ 0x140304B40 (CcPerformReadAhead.c)
 *     CcCopyReadEx @ 0x14032B470 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 *     PspIoRateEntryActivate @ 0x1405D81B0 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405D82B8 (PspIoRateEntryDeactivate.c)
 *     PspRemoveIoAttribution @ 0x1405DAF94 (PspRemoveIoAttribution.c)
 *     MiSegmentDelete @ 0x1406FF4F0 (MiSegmentDelete.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x140207954 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
