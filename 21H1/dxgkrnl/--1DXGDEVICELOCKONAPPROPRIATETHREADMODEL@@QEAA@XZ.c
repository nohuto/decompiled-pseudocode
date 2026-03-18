/*
 * XREFs of ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000E83C
 * Callers:
 *     DxgkRender @ 0x1C00F2C60 (DxgkRender.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00F95F0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLock2 @ 0x1C0101890 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C0101E70 (DxgkUnlock2.c)
 *     DxgkLock @ 0x1C0102950 (DxgkLock.c)
 *     DxgkReclaimAllocations @ 0x1C0102EE0 (DxgkReclaimAllocations.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0103720 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     DxgkReclaimAllocations2 @ 0x1C010EE80 (DxgkReclaimAllocations2.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C011F10C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01237E4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     DxgkUnlock @ 0x1C0141940 (DxgkUnlock.c)
 *     DxgkOfferAllocations @ 0x1C0142010 (DxgkOfferAllocations.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C0144130 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C0144A1C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0145D30 (DxgkMapGpuVirtualAddress.c)
 *     DxgkInvalidateCache @ 0x1C0227C20 (DxgkInvalidateCache.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C022B334 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0232470 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0236CBC (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0239410 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023F0C0 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024A440 (-VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C026D408 (DxgkSubmitCommandToHwQueueInternal.c)
 *     DxgkUpdateAllocationProperty @ 0x1C02782A0 (DxgkUpdateAllocationProperty.c)
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C02B91C0 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02B9A70 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  if ( *((_DWORD *)this + 2) )
    ExReleasePushLockSharedEx(v1 + 144, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 136));
  KeLeaveCriticalRegion();
}
