/*
 * XREFs of ExInitializePushLock @ 0x140267800
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1403AB840 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403C5148 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     IommuMapDevice @ 0x1404D3F30 (IommuMapDevice.c)
 *     DbgpInsertDebugPrintCallback @ 0x1405802D4 (DbgpInsertDebugPrintCallback.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     CmpHiveInitialize @ 0x14063B550 (CmpHiveInitialize.c)
 *     IoDiskIoAttributionAllocate @ 0x140656618 (IoDiskIoAttributionAllocate.c)
 *     PspIoRateEntryInitialize @ 0x140657408 (PspIoRateEntryInitialize.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     PfSnBeginTrace @ 0x1406BBAB0 (PfSnBeginTrace.c)
 *     PfSnPrefetchSections @ 0x1406BC9E4 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406BCC90 (PfSnPrefetchSectionsCleanup.c)
 *     SmKmStoreAdd @ 0x1406CF36C (SmKmStoreAdd.c)
 *     SepCreateLogonSessionTrack @ 0x1406F12DC (SepCreateLogonSessionTrack.c)
 *     PfSnAsyncContextInitialize @ 0x1407020CC (PfSnAsyncContextInitialize.c)
 *     PoRegisterCoalescingCallback @ 0x1407825C0 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140782860 (ExAllocateCallBack.c)
 *     PfFbBufferListInitialize @ 0x1407ACC38 (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x1407B7D20 (ObRegisterCallbacks.c)
 *     CmFcpWorkItemInitialize @ 0x1407BFCA0 (CmFcpWorkItemInitialize.c)
 *     VslpSkStartProfiling @ 0x14088D900 (VslpSkStartProfiling.c)
 *     SmcCacheInitialize @ 0x140929ECC (SmcCacheInitialize.c)
 *     PfTAccessTracingInitialize @ 0x140997534 (PfTAccessTracingInitialize.c)
 *     PspInitPhase0 @ 0x140A3A054 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     MiCreateEnclaveRegions @ 0x140A53250 (MiCreateEnclaveRegions.c)
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 *     EtwpInitializeCoverageSampler @ 0x140A62024 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A6605C (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140A66594 (PfpRpInitialize.c)
 *     SmcCacheManagerInitialize @ 0x140A67D50 (SmcCacheManagerInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PKSPIN_LOCK SpinLock)
{
  *SpinLock = 0LL;
}
