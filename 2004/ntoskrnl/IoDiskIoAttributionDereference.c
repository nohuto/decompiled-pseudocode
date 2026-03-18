/*
 * XREFs of IoDiskIoAttributionDereference @ 0x14027A2C4
 * Callers:
 *     IoNotifyQuotaState @ 0x140201200 (IoNotifyQuotaState.c)
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     CcCopyReadEx @ 0x14022EBC0 (CcCopyReadEx.c)
 *     CcPerformReadAhead @ 0x140264AD4 (CcPerformReadAhead.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x14026ACE8 (IoSetDiskIoAttributionOnProcess.c)
 *     MmUpdateSectionIoAttribution @ 0x140278A58 (MmUpdateSectionIoAttribution.c)
 *     IoGetIoRateControl @ 0x140279F30 (IoGetIoRateControl.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x14027A0D4 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x14027A150 (IoRecordIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14027A2C4 (IoDiskIoAttributionDereference.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     CcUninitializeCacheMap @ 0x1402C4180 (CcUninitializeCacheMap.c)
 *     CcCompleteAsyncRead @ 0x1402C7C20 (CcCompleteAsyncRead.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402C8508 (MiCheckAndUpdateIoAttribution.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     PspIoRateEntryActivate @ 0x1405CED80 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405CEE88 (PspIoRateEntryDeactivate.c)
 *     MiSegmentDelete @ 0x1406091B4 (MiSegmentDelete.c)
 *     PspRemoveIoAttribution @ 0x1406564E0 (PspRemoveIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14027A2C4 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
