/*
 * XREFs of ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007000
 * Callers:
 *     ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9F60 (-VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetContextSchedulingPriority @ 0x1C00DE820 (DxgkGetContextSchedulingPriority.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01178E4 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C011A070 (DxgkQueryResourceInfoFromNtHandle.c)
 *     DxgkGetAllocationPriority @ 0x1C02299E0 (DxgkGetAllocationPriority.c)
 *     DxgkQueryAllocationResidency @ 0x1C022A710 (DxgkQueryAllocationResidency.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C022AE50 (DxgkUpdateGpuVirtualAddress.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F490 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C02591C0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     DxgkGetOverlayState @ 0x1C027BAF0 (DxgkGetOverlayState.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C02811AC (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 *     DxgkCreateProtectedSession @ 0x1C02886D0 (DxgkCreateProtectedSession.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0293BD0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C02BDA40 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkResetTrackedWorkloadStatistics @ 0x1C02BDDB0 (NtDxgkResetTrackedWorkloadStatistics.c)
 * Callees:
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0024800 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 */

DXGDEVICEACCESSLOCKSHARED *__fastcall DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        DXGDEVICEACCESSLOCKSHARED *this,
        struct DXGDEVICE *a2)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  if ( a2 )
    DXGDEVICEACCESSLOCKSHARED::Acquire(this);
  return this;
}
