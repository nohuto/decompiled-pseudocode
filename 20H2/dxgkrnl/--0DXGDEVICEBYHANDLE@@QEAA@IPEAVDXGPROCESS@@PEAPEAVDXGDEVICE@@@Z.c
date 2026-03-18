/*
 * XREFs of ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34
 * Callers:
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C00D5F34 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET_CBLT@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?VmBusMakeResidentCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D7900 (-VmBusMakeResidentCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8FD0 (-VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00DFCD0 (-DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z.c)
 *     DxgkUnlock @ 0x1C00DFE40 (DxgkUnlock.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00E0510 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     DxgkCreateContext @ 0x1C00E2190 (DxgkCreateContext.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00E4BD0 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00E545C (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00EE620 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00F5280 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     DxgkGetDeviceStateInternal @ 0x1C00F6630 (DxgkGetDeviceStateInternal.c)
 *     DxgkLock2 @ 0x1C0100130 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C0100710 (DxgkUnlock2.c)
 *     DxgkLock @ 0x1C01011F0 (DxgkLock.c)
 *     DxgkReclaimAllocations @ 0x1C0101780 (DxgkReclaimAllocations.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C010B5D0 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0114EC4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     DxgkQueryResourceInfo @ 0x1C0115850 (DxgkQueryResourceInfo.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C0115DA0 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C0116270 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0117724 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkConfigureSharedResource @ 0x1C0118D00 (DxgkConfigureSharedResource.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C0118EF0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0119594 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0123720 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013F778 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkShutdownBootGraphics @ 0x1C0140450 (DxgkShutdownBootGraphics.c)
 *     DxgkSetDisplayMode @ 0x1C0147C10 (DxgkSetDisplayMode.c)
 *     DxgkOfferAllocations @ 0x1C014BB30 (DxgkOfferAllocations.c)
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C014DA50 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z @ 0x1C014DB30 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEAD@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C014E53C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C014FB68 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C0150950 (DxgkSetQueuedLimit.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0151480 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0166968 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C016CCF0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     NtDxgkUnpinResources @ 0x1C016D230 (NtDxgkUnpinResources.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C016E68C (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
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
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023AB60 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02400E0 (-VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240540 (-VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241C90 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0242290 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243380 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024D2A0 (-VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024D680 (-VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024E3E0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C02564B0 (DxgkCheckMultiPlaneOverlaySupport.c)
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C0256B10 (DxgkCheckMultiPlaneOverlaySupport2.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0257170 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkEnableUnorderedWaitsForDevice @ 0x1C0258050 (DxgkEnableUnorderedWaitsForDevice.c)
 *     DxgkMarkDeviceAsError @ 0x1C02586C0 (DxgkMarkDeviceAsError.c)
 *     DxgkSetGammaRamp @ 0x1C0258B50 (DxgkSetGammaRamp.c)
 *     DxgkWaitForIdle @ 0x1C0259130 (DxgkWaitForIdle.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025E2E4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0270CD0 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkCreateOverlay @ 0x1C0279A20 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C027A0B0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C027A650 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C027AB10 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C027B110 (DxgkUpdateOverlay.c)
 *     DxgkPresentRedirected @ 0x1C0281DD0 (DxgkPresentRedirected.c)
 *     DxgkCreateProtectedSession @ 0x1C02876F0 (DxgkCreateProtectedSession.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0292BF0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkCreateSwapChain @ 0x1C02AC570 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C02AD000 (DxgkOpenSwapChain.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 */

DXGDEVICEBYHANDLE *__fastcall DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
        DXGDEVICEBYHANDLE *this,
        __int64 a2,
        struct _KTHREAD **a3,
        struct DXGDEVICE **a4)
{
  char *v4; // rbx
  unsigned int v7; // esi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  struct _KTHREAD *v12; // r8
  int v13; // ecx
  __int64 v14; // rcx
  volatile signed __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // r9

  v4 = (char *)(a3 + 26);
  v7 = a2;
  if ( a3 != (struct _KTHREAD **)-208LL && a3[27] == KeGetCurrentThread() )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v18 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v18);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *((unsigned int *)v4 + 6);
      if ( (_DWORD)v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventBlockThread, v10, v19);
    }
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  v11 = (v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 < *((_DWORD *)a3 + 64) )
  {
    v12 = a3[30];
    v13 = *((_DWORD *)v12 + 4 * v11 + 2);
    if ( ((v7 >> 25) & 0x60) == (*((_BYTE *)v12 + 16 * v11 + 8) & 0x60) && (v13 & 0x2000) == 0 && (v13 & 0x1F) != 0 )
    {
      v14 = v13 & 0x1F;
      if ( (_BYTE)v14 == 3 )
      {
        v15 = (volatile signed __int64 *)*((_QWORD *)v12 + 2 * (unsigned int)v11);
        goto LABEL_13;
      }
      v16 = WdLogNewEntry5_WdError(v14, 2LL * (unsigned int)v11);
      *(_QWORD *)(v16 + 24) = 267LL;
      WdLogEvent5_WdError(v16);
    }
  }
  v15 = 0LL;
LABEL_13:
  *(_QWORD *)this = v15;
  if ( v15 )
  {
    _InterlockedIncrement64(v15 + 8);
    v15 = *(volatile signed __int64 **)this;
  }
  *a4 = (struct DXGDEVICE *)v15;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
