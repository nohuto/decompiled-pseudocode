/*
 * XREFs of ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003E2E4
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C022CF18 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C022CF8C (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetBackingResource @ 0x1C022CFFC (DxgkDdiGetBackingResource.c)
 *     DxgkDdiGetDeviceLocation @ 0x1C022D074 (DxgkDdiGetDeviceLocation.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C022D13C (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetMmioRangeCount @ 0x1C022D1AC (DxgkDdiGetMmioRangeCount.c)
 *     DxgkDdiGetMmioRanges @ 0x1C022D21C (DxgkDdiGetMmioRanges.c)
 *     DxgkDdiGetResourceForBar @ 0x1C022D290 (DxgkDdiGetResourceForBar.c)
 *     DxgkDdiGetVendorAndDevice @ 0x1C022D328 (DxgkDdiGetVendorAndDevice.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C022D3C0 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C022D4A4 (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C022D514 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C022D57C (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C022D5F0 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiQueryProbedBars @ 0x1C022D66C (DxgkDdiQueryProbedBars.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C022D718 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x1C022D7D4 (DxgkDdiQueryVirtualFunctionLuid.c)
 *     DxgkDdiResetVirtualFunction @ 0x1C022DA18 (DxgkDdiResetVirtualFunction.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C022DAB4 (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkDdiSetVirtualFunctionPowerState @ 0x1C022DB24 (DxgkDdiSetVirtualFunctionPowerState.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C022DBD4 (DxgkDdiSetVirtualGpuVmBus.c)
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C02320C0 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     ?InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0236640 (-InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0238BE0 (-VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0238C60 (-VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0238DA0 (-VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0238DE0 (-VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_GUEST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C0238E20 (-VmBusChannelOpened@DXG_GUEST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_GUEST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C0238E60 (-VmBusChannelOpened@DXG_GUEST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C0238EA0 (-VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C0238EE0 (-VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0238F20 (-VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0238F90 (-VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0239000 (-VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0239040 (-VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0239080 (-VmBusChannelStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C02390C0 (-VmBusChannelStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0239100 (-VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0239140 (-VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0239180 (-VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C02391E0 (-VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0239230 (-VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0239270 (-VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02C8520 (DpiFlexIovMitigationUpdate.c)
 *     DpiGetVirtualizationFlags @ 0x1C02C86F8 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C02C8970 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C02C8B00 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C02C8CF4 (DpiSriovEventComplete.c)
 *     DpiSriovNotification @ 0x1C02C8DE0 (DpiSriovNotification.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C02CEAF0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C02CEEF0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C02CF0B0 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0pzzq_EtwWriteTransfer @ 0x1C003E3B4 (McTemplateK0pzzq_EtwWriteTransfer.c)
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
