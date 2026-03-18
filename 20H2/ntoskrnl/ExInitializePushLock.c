/*
 * XREFs of ExInitializePushLock @ 0x1402D6A50
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1403ADE10 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403C7B38 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     IommuMapDevice @ 0x1404D74C0 (IommuMapDevice.c)
 *     DbgpInsertDebugPrintCallback @ 0x140583C34 (DbgpInsertDebugPrintCallback.c)
 *     PfSnBeginTrace @ 0x1405D858C (PfSnBeginTrace.c)
 *     CmpHiveInitialize @ 0x1405DE758 (CmpHiveInitialize.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     IoDiskIoAttributionAllocate @ 0x14069F664 (IoDiskIoAttributionAllocate.c)
 *     SepCreateLogonSessionTrack @ 0x1406C46DC (SepCreateLogonSessionTrack.c)
 *     PfSnAsyncContextInitialize @ 0x1406D572C (PfSnAsyncContextInitialize.c)
 *     PfSnPrefetchSections @ 0x1406E7A24 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406E7CD0 (PfSnPrefetchSectionsCleanup.c)
 *     SmKmStoreAdd @ 0x1406EE678 (SmKmStoreAdd.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     PspIoRateEntryInitialize @ 0x140710E78 (PspIoRateEntryInitialize.c)
 *     PoRegisterCoalescingCallback @ 0x1407906E0 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140790980 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x1407BAB78 (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x1407C65B0 (ObRegisterCallbacks.c)
 *     CmFcpWorkItemInitialize @ 0x1407CE530 (CmFcpWorkItemInitialize.c)
 *     VslpSkStartProfiling @ 0x140893450 (VslpSkStartProfiling.c)
 *     SmcCacheInitialize @ 0x14092FCF4 (SmcCacheInitialize.c)
 *     PfTAccessTracingInitialize @ 0x14099D574 (PfTAccessTracingInitialize.c)
 *     PspInitPhase0 @ 0x140A400E8 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     MiCreateEnclaveRegions @ 0x140A538D0 (MiCreateEnclaveRegions.c)
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 *     EtwpInitializeCoverageSampler @ 0x140A693E4 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A6D32C (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140A6D864 (PfpRpInitialize.c)
 *     SmcCacheManagerInitialize @ 0x140A6E578 (SmcCacheManagerInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
