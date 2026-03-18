/*
 * XREFs of ExInitializePushLock @ 0x1402C0830
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1403AF560 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403C41D8 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     IommuMapDevice @ 0x1404D3A80 (IommuMapDevice.c)
 *     DbgpInsertDebugPrintCallback @ 0x14057FB84 (DbgpInsertDebugPrintCallback.c)
 *     PfSnBeginTrace @ 0x140651FEC (PfSnBeginTrace.c)
 *     SmKmStoreAdd @ 0x140654D0C (SmKmStoreAdd.c)
 *     PspIoRateEntryInitialize @ 0x14065BBF8 (PspIoRateEntryInitialize.c)
 *     IoDiskIoAttributionAllocate @ 0x140675F3C (IoDiskIoAttributionAllocate.c)
 *     CmpHiveInitialize @ 0x1406890D0 (CmpHiveInitialize.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     PfSnPrefetchSections @ 0x1406C3500 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406C37AC (PfSnPrefetchSectionsCleanup.c)
 *     SepCreateLogonSessionTrack @ 0x1406CFF3C (SepCreateLogonSessionTrack.c)
 *     PfSnAsyncContextInitialize @ 0x1406DF33C (PfSnAsyncContextInitialize.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     PoRegisterCoalescingCallback @ 0x140787FE0 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140788280 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x1407A9AD8 (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x1407B4BB0 (ObRegisterCallbacks.c)
 *     CmFcpWorkItemInitialize @ 0x1407BCB30 (CmFcpWorkItemInitialize.c)
 *     VslpSkStartProfiling @ 0x14088C5E0 (VslpSkStartProfiling.c)
 *     SmcCacheInitialize @ 0x140928C1C (SmcCacheInitialize.c)
 *     PfTAccessTracingInitialize @ 0x140996164 (PfTAccessTracingInitialize.c)
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     EtwpInitializeCoverageSampler @ 0x140A468A4 (EtwpInitializeCoverageSampler.c)
 *     MiCreateEnclaveRegions @ 0x140A4D550 (MiCreateEnclaveRegions.c)
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 *     PfInitializeSuperfetch @ 0x140A6667C (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140A66BB4 (PfpRpInitialize.c)
 *     SmcCacheManagerInitialize @ 0x140A678C8 (SmcCacheManagerInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
