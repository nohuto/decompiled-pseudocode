/*
 * XREFs of IoDiskIoAttributionDereference @ 0x14028A7B4
 * Callers:
 *     IoNotifyQuotaState @ 0x140201210 (IoNotifyQuotaState.c)
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1402535E0 (IoSetDiskIoAttributionOnProcess.c)
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 *     MmUpdateSectionIoAttribution @ 0x14028A198 (MmUpdateSectionIoAttribution.c)
 *     IoGetIoRateControl @ 0x14028A420 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x14028A5C4 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x14028A640 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14028A7B4 (IoDiskIoAttributionDereference.c)
 *     CcUninitializeCacheMap @ 0x1402F68B0 (CcUninitializeCacheMap.c)
 *     CcCompleteAsyncRead @ 0x1402F7640 (CcCompleteAsyncRead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402F8A18 (MiCheckAndUpdateIoAttribution.c)
 *     CcPerformReadAhead @ 0x1402F9DF0 (CcPerformReadAhead.c)
 *     CcCopyReadEx @ 0x140320720 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     PspIoRateEntryActivate @ 0x1405D81B0 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405D82B8 (PspIoRateEntryDeactivate.c)
 *     PspRemoveIoAttribution @ 0x1406804F4 (PspRemoveIoAttribution.c)
 *     MiSegmentDelete @ 0x1406E8110 (MiSegmentDelete.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14028A7B4 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
