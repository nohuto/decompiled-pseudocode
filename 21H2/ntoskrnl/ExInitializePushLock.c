/*
 * XREFs of ExInitializePushLock @ 0x140278EE0
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1403A7DC0 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403B4750 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     IommuMapDevice @ 0x1404D8E90 (IommuMapDevice.c)
 *     DbgpInsertDebugPrintCallback @ 0x140585644 (DbgpInsertDebugPrintCallback.c)
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     IoDiskIoAttributionAllocate @ 0x140680440 (IoDiskIoAttributionAllocate.c)
 *     SepCreateLogonSessionTrack @ 0x1406A07EC (SepCreateLogonSessionTrack.c)
 *     PfSnAsyncContextInitialize @ 0x1406B350C (PfSnAsyncContextInitialize.c)
 *     PfSnPrefetchSections @ 0x1406C6724 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406C69D0 (PfSnPrefetchSectionsCleanup.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     SmKmStoreAdd @ 0x14071109C (SmKmStoreAdd.c)
 *     PfSnBeginTrace @ 0x14071A8AC (PfSnBeginTrace.c)
 *     PspIoRateEntryInitialize @ 0x140720854 (PspIoRateEntryInitialize.c)
 *     CmpHiveInitialize @ 0x140720C84 (CmpHiveInitialize.c)
 *     PoRegisterCoalescingCallback @ 0x14078FDD0 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140790070 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x1407BEF7C (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x1407CA810 (ObRegisterCallbacks.c)
 *     CmFcpWorkItemInitialize @ 0x1407D27E0 (CmFcpWorkItemInitialize.c)
 *     VslpSkStartProfiling @ 0x140890A20 (VslpSkStartProfiling.c)
 *     SmcCacheInitialize @ 0x14092D4C4 (SmcCacheInitialize.c)
 *     PfTAccessTracingInitialize @ 0x14099AAF4 (PfTAccessTracingInitialize.c)
 *     PspInitPhase0 @ 0x140A3DC68 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     EtwpInitializeCoverageSampler @ 0x140A42AE8 (EtwpInitializeCoverageSampler.c)
 *     SmcCacheManagerInitialize @ 0x140A4B660 (SmcCacheManagerInitialize.c)
 *     MiCreateEnclaveRegions @ 0x140A54ED8 (MiCreateEnclaveRegions.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 *     PfInitializeSuperfetch @ 0x140A6A76C (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140A6ACA4 (PfpRpInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
