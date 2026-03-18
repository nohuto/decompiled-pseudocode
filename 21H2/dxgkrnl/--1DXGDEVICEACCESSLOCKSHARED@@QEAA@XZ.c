/*
 * XREFs of ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824
 * Callers:
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C016A1A0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C01708C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     DxgkQueryResourceInfo @ 0x1C0184B60 (DxgkQueryResourceInfo.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01CD9C0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkGetAllocationPriority @ 0x1C02D8080 (DxgkGetAllocationPriority.c)
 *     DxgkQueryAllocationResidency @ 0x1C02D8F70 (DxgkQueryAllocationResidency.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C02D96E0 (DxgkUpdateGpuVirtualAddress.c)
 *     DxgkWslQueryResourceInfoFromNtHandle @ 0x1C02DA760 (DxgkWslQueryResourceInfoFromNtHandle.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C02E9D40 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetContextSchedulingPriority @ 0x1C02EA1D0 (DxgkGetContextSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1C032B480 (DxgkGetOverlayState.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0331BE8 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 *     DxgkCreateProtectedSession @ 0x1C033A220 (DxgkCreateProtectedSession.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0343870 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C0346A50 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x1C0346D70 (NtDxgkResetTrackedWorkloadStatistics.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0381650 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED(DXGDEVICEACCESSLOCKSHARED *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v2 + 136));
      KeLeaveCriticalRegion();
    }
  }
}
