/*
 * XREFs of ExInitializePushLock @ 0x140266E80
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1403A8B50 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403B48C0 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     IommuMapDevice @ 0x1404D90D0 (IommuMapDevice.c)
 *     DbgpInsertDebugPrintCallback @ 0x140585874 (DbgpInsertDebugPrintCallback.c)
 *     IoDiskIoAttributionAllocate @ 0x1405DAEE0 (IoDiskIoAttributionAllocate.c)
 *     SepCreateLogonSessionTrack @ 0x1405FFB2C (SepCreateLogonSessionTrack.c)
 *     PfSnAsyncContextInitialize @ 0x1406126DC (PfSnAsyncContextInitialize.c)
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     PfSnPrefetchSections @ 0x140675014 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406752C0 (PfSnPrefetchSectionsCleanup.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     SmKmStoreAdd @ 0x1406BF6EC (SmKmStoreAdd.c)
 *     PfSnBeginTrace @ 0x1406C859C (PfSnBeginTrace.c)
 *     PspIoRateEntryInitialize @ 0x1406F703C (PspIoRateEntryInitialize.c)
 *     CmpHiveInitialize @ 0x1406F80F8 (CmpHiveInitialize.c)
 *     PoRegisterCoalescingCallback @ 0x140791380 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140791620 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x1407BF498 (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x1407CAB30 (ObRegisterCallbacks.c)
 *     CmFcpWorkItemInitialize @ 0x1407D2950 (CmFcpWorkItemInitialize.c)
 *     VslpSkStartProfiling @ 0x140890B80 (VslpSkStartProfiling.c)
 *     SmcCacheInitialize @ 0x14092D624 (SmcCacheInitialize.c)
 *     PfTAccessTracingInitialize @ 0x14099BAF4 (PfTAccessTracingInitialize.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 *     EtwpInitializeCoverageSampler @ 0x140A43AE8 (EtwpInitializeCoverageSampler.c)
 *     SmcCacheManagerInitialize @ 0x140A4C660 (SmcCacheManagerInitialize.c)
 *     MiCreateEnclaveRegions @ 0x140A55ED8 (MiCreateEnclaveRegions.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 *     PfInitializeSuperfetch @ 0x140A6B76C (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140A6BCA4 (PfpRpInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
