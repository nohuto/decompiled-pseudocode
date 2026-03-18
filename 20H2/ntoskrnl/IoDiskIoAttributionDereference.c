/*
 * XREFs of IoDiskIoAttributionDereference @ 0x1402EEE34
 * Callers:
 *     IoNotifyQuotaState @ 0x140201200 (IoNotifyQuotaState.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140248C30 (MiCheckAndUpdateIoAttribution.c)
 *     CcCompleteAsyncRead @ 0x140249324 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x14024B924 (CcPerformReadAhead.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140263C54 (IoSetDiskIoAttributionOnProcess.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     CcUninitializeCacheMap @ 0x14029E760 (CcUninitializeCacheMap.c)
 *     CcCopyReadEx @ 0x1402A3E70 (CcCopyReadEx.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     IoGetIoRateControl @ 0x1402EEAA0 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1402EEC44 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x1402EECC0 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1402EEE34 (IoDiskIoAttributionDereference.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MmUpdateSectionIoAttribution @ 0x140355A70 (MmUpdateSectionIoAttribution.c)
 *     PspIoRateEntryActivate @ 0x1405D5224 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405D532C (PspIoRateEntryDeactivate.c)
 *     MiSegmentDelete @ 0x140681F74 (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x14069F718 (PspRemoveIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1402EEE34 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
