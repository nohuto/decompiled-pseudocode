/*
 * XREFs of ExInitializePushLock @ 0x1402A0840
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1403C75D0 (IoRegisterPriorityCallback.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403D6F40 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     PspInitializeSyscallProvider @ 0x140419DA0 (PspInitializeSyscallProvider.c)
 *     IommuMapDevice @ 0x1405264A0 (IommuMapDevice.c)
 *     DbgpInsertDebugPrintCallback @ 0x1405E4244 (DbgpInsertDebugPrintCallback.c)
 *     PspIoRateEntryInitialize @ 0x140681FE4 (PspIoRateEntryInitialize.c)
 *     CmpHiveInitialize @ 0x14068AF4C (CmpHiveInitialize.c)
 *     SepCreateLogonSessionTrack @ 0x1406BBC4C (SepCreateLogonSessionTrack.c)
 *     IoDiskIoAttributionAllocate @ 0x1406D4D48 (IoDiskIoAttributionAllocate.c)
 *     SmKmStoreAdd @ 0x1406ED88C (SmKmStoreAdd.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     PfSnPrefetchSections @ 0x1407D7100 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1407D7544 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnAsyncContextInitialize @ 0x1407D7B88 (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x1407DA91C (PfSnBeginTrace.c)
 *     PoRegisterCoalescingCallback @ 0x140832790 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140832A20 (ExAllocateCallBack.c)
 *     CmpWorkItemInitialize @ 0x140833748 (CmpWorkItemInitialize.c)
 *     PfFbBufferListInitialize @ 0x14084FC2C (PfFbBufferListInitialize.c)
 *     ObRegisterCallbacks @ 0x14085AE70 (ObRegisterCallbacks.c)
 *     SmcCacheInitialize @ 0x1409D7A10 (SmcCacheInitialize.c)
 *     VmpProcessContextSetup @ 0x1409DA570 (VmpProcessContextSetup.c)
 *     PfTAccessTracingInitialize @ 0x140A485D4 (PfTAccessTracingInitialize.c)
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     MiCreateEnclaveRegions @ 0x140B08E90 (MiCreateEnclaveRegions.c)
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 *     PfInitializeSuperfetch @ 0x140B23A48 (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x140B23F80 (PfpRpInitialize.c)
 *     SmcCacheManagerInitialize @ 0x140B25808 (SmcCacheManagerInitialize.c)
 *     EtwpInitializeCoverageSampler @ 0x140B2FABC (EtwpInitializeCoverageSampler.c)
 * Callees:
 *     <none>
 */

void __stdcall ExInitializePushLock(PEX_RUNDOWN_REF RunRef)
{
  RunRef->Count = 0LL;
}
