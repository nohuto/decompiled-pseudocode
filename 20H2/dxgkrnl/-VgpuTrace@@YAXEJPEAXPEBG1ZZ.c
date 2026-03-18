/*
 * XREFs of ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F144
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C022FFA8 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C023001C (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetBackingResource @ 0x1C023008C (DxgkDdiGetBackingResource.c)
 *     DxgkDdiGetDeviceLocation @ 0x1C0230104 (DxgkDdiGetDeviceLocation.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C02301CC (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetMmioRangeCount @ 0x1C023023C (DxgkDdiGetMmioRangeCount.c)
 *     DxgkDdiGetMmioRanges @ 0x1C02302AC (DxgkDdiGetMmioRanges.c)
 *     DxgkDdiGetResourceForBar @ 0x1C0230320 (DxgkDdiGetResourceForBar.c)
 *     DxgkDdiGetVendorAndDevice @ 0x1C02303B8 (DxgkDdiGetVendorAndDevice.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C0230450 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C0230534 (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C02305A4 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C023060C (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C0230680 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiQueryProbedBars @ 0x1C02306FC (DxgkDdiQueryProbedBars.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C02307A8 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x1C0230864 (DxgkDdiQueryVirtualFunctionLuid.c)
 *     DxgkDdiResetVirtualFunction @ 0x1C0230AA8 (DxgkDdiResetVirtualFunction.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C0230B44 (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkDdiSetVirtualFunctionPowerState @ 0x1C0230BB4 (DxgkDdiSetVirtualFunctionPowerState.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C0230C64 (DxgkDdiSetVirtualGpuVmBus.c)
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C02351D0 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     ?InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0239720 (-InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023BD90 (-VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023BE10 (-VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023BF50 (-VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023BF90 (-VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_GUEST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C023BFD0 (-VmBusChannelOpened@DXG_GUEST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_GUEST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C023C010 (-VmBusChannelOpened@DXG_GUEST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C023C050 (-VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C023C090 (-VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C0D0 (-VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C140 (-VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C1B0 (-VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C1F0 (-VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C230 (-VmBusChannelStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C270 (-VmBusChannelStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C2B0 (-VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C2F0 (-VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C330 (-VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C390 (-VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C3E0 (-VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C420 (-VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02CBAE0 (DpiFlexIovMitigationUpdate.c)
 *     DpiGetVirtualizationFlags @ 0x1C02CBCB8 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C02CBF30 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C02CC0C0 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C02CC2B4 (DpiSriovEventComplete.c)
 *     DpiSriovNotification @ 0x1C02CC3A0 (DpiSriovNotification.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C02D20B0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C02D24B0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C02D2670 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     McTemplateK0pzzq_EtwWriteTransfer @ 0x1C003F214 (McTemplateK0pzzq_EtwWriteTransfer.c)
 */

void VgpuTrace(char a1, char a2, void *a3, const unsigned __int16 *a4, wchar_t *Format, ...)
{
  int v5; // ebx
  int v9; // ecx
  int v10; // r8d
  wchar_t Dst[256]; // [rsp+50h] [rbp-238h] BYREF
  va_list ArgList; // [rsp+2B8h] [rbp+30h] BYREF

  va_start(ArgList, Format);
  v5 = (int)a3;
  memset(Dst, 0, sizeof(Dst));
  v10 = (int)Format;
  if ( Format )
    vswprintf_s(Dst, 0x100uLL, Format, ArgList);
  if ( a1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0pzzq_EtwWriteTransfer(
        v9,
        (unsigned int)&EventGpuPartitioningStart,
        v10,
        v5,
        (__int64)a4,
        (__int64)Dst,
        0);
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
  {
    McTemplateK0pzzq_EtwWriteTransfer(
      v9,
      (unsigned int)&EventGpuPartitioningEnd,
      v10,
      v5,
      (__int64)a4,
      (__int64)Dst,
      a2);
  }
}
