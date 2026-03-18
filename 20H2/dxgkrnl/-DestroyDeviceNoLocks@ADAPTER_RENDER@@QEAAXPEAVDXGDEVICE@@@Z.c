/*
 * XREFs of ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4
 * Callers:
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00040D0 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00043E4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0016AF0 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0024CA0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C00255A0 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C0047F50 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00DC870 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00DFCD0 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1C00DFE40 (DxgkUnlock.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00E0510 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00E06B0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkCreateContext @ 0x1C00E2190 (DxgkCreateContext.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00E28D8 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00E29A0 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00E2C5C (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00E4BD0 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00E545C (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00E7990 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C00E8AD0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00F5280 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkGetDeviceStateInternal @ 0x1C00F6630 (DxgkGetDeviceStateInternal.c)
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 *     DxgkLock2 @ 0x1C0100130 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C0100710 (DxgkUnlock2.c)
 *     DxgkLock @ 0x1C01011F0 (DxgkLock.c)
 *     DxgkReclaimAllocations @ 0x1C0101780 (DxgkReclaimAllocations.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z @ 0x1C01029A0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAD@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01072F0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C010B5D0 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0111A1C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0114EC4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     DxgkQueryResourceInfo @ 0x1C0115850 (DxgkQueryResourceInfo.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C0115DA0 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C0116270 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0117724 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkConfigureSharedResource @ 0x1C0118D00 (DxgkConfigureSharedResource.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C0118EF0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0119594 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0123720 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013E42C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013F778 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkShutdownBootGraphics @ 0x1C0140450 (DxgkShutdownBootGraphics.c)
 *     DxgkSetDisplayMode @ 0x1C0147C10 (DxgkSetDisplayMode.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C014874C (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     DxgkDisplayOnOff @ 0x1C014A330 (DxgkDisplayOnOff.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C014B728 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkOfferAllocations @ 0x1C014BB30 (DxgkOfferAllocations.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C014DA50 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C014DB30 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C014E53C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C014FB68 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C0150950 (DxgkSetQueuedLimit.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0151480 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C0164AC0 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0164ED0 (-DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0166968 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C016CCF0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     NtDxgkUnpinResources @ 0x1C016D230 (NtDxgkUnpinResources.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C016E68C (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02113C0 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C0221D74 (DxgkCreateLightweightDeviceAndContext.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0222510 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C0224FA0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkGetAllocationPriority @ 0x1C0228830 (DxgkGetAllocationPriority.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C0228BE0 (DxgkGetResourcePresentPrivateDriverData.c)
 *     DxgkQueryAllocationResidency @ 0x1C0229560 (DxgkQueryAllocationResidency.c)
 *     DxgkSetAllocationPriority @ 0x1C0229930 (DxgkSetAllocationPriority.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0229CA0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkInvalidateCache @ 0x1C022ACB0 (DxgkInvalidateCache.c)
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C022B560 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022B880 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C022BC40 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C022C700 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C022C8E0 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0239DC4 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023AB60 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02400E0 (-VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240540 (-VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241C90 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0242290 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243380 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024D2A0 (-VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024D680 (-VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024E3E0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0253630 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C02564B0 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C0256B10 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0257170 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkEnableUnorderedWaitsForDevice @ 0x1C0258050 (DxgkEnableUnorderedWaitsForDevice.c)
 *     DxgkMarkDeviceAsError @ 0x1C02586C0 (DxgkMarkDeviceAsError.c)
 *     DxgkSetGammaRamp @ 0x1C0258B50 (DxgkSetGammaRamp.c)
 *     DxgkWaitForIdle @ 0x1C0259130 (DxgkWaitForIdle.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025E2E4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C0265A24 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C02669B0 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C026B72C (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0270CD0 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkCreateOverlay @ 0x1C0279A20 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C027A0B0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C027A650 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C027AB10 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C027B110 (DxgkUpdateOverlay.c)
 *     DxgkPresentRedirected @ 0x1C0281DD0 (DxgkPresentRedirected.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0292BF0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C02AAA28 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 *     DxgkCreateSwapChain @ 0x1C02AC570 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C02AD000 (DxgkOpenSwapChain.c)
 *     ??1VIDPNSOURCEINFO@@QEAA@XZ @ 0x1C02B7FA0 (--1VIDPNSOURCEINFO@@QEAA@XZ.c)
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C02BAF2C (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C02BB0D8 (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 * Callees:
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E3144 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDeviceNoLocks(ADAPTER_RENDER *this, struct DXGDEVICE *a2)
{
  __int64 v3; // rdi
  char *v5; // rcx

  v3 = *((_QWORD *)a2 + 5);
  if ( *((_DWORD *)a2 + 108) == 2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3 + 176, 0LL);
    *(_QWORD *)(v3 + 184) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 48, 0LL);
    *((_QWORD *)this + 7) = KeGetCurrentThread();
    ADAPTER_RENDER::DestroyDeviceNoLocksInternal(this, a2);
    *((_QWORD *)this + 7) = 0LL;
    v5 = (char *)this + 48;
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v3 + 176, 0LL);
    *(_QWORD *)(v3 + 184) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 24, 0LL);
    *((_QWORD *)this + 4) = KeGetCurrentThread();
    ADAPTER_RENDER::DestroyDeviceNoLocksInternal(this, a2);
    *((_QWORD *)this + 4) = 0LL;
    v5 = (char *)this + 24;
  }
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v3 + 184) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 176, 0LL);
  KeLeaveCriticalRegion();
}
