/*
 * XREFs of ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F294
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C0231158 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C02311CC (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetBackingResource @ 0x1C023123C (DxgkDdiGetBackingResource.c)
 *     DxgkDdiGetDeviceLocation @ 0x1C02312B4 (DxgkDdiGetDeviceLocation.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C023137C (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetMmioRangeCount @ 0x1C02313EC (DxgkDdiGetMmioRangeCount.c)
 *     DxgkDdiGetMmioRanges @ 0x1C023145C (DxgkDdiGetMmioRanges.c)
 *     DxgkDdiGetResourceForBar @ 0x1C02314D0 (DxgkDdiGetResourceForBar.c)
 *     DxgkDdiGetVendorAndDevice @ 0x1C0231568 (DxgkDdiGetVendorAndDevice.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C0231600 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C02316E4 (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C0231754 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C02317BC (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C0231830 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiQueryProbedBars @ 0x1C02318AC (DxgkDdiQueryProbedBars.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C0231958 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x1C0231A14 (DxgkDdiQueryVirtualFunctionLuid.c)
 *     DxgkDdiResetVirtualFunction @ 0x1C0231C58 (DxgkDdiResetVirtualFunction.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C0231CF4 (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkDdiSetVirtualFunctionPowerState @ 0x1C0231D64 (DxgkDdiSetVirtualFunctionPowerState.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C0231E14 (DxgkDdiSetVirtualGpuVmBus.c)
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C0236380 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     ?InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C023A8D0 (-InvalidateAdapterWorkItem@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023CE90 (-VmBusChannelClosed@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023CF10 (-VmBusChannelClosed@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D050 (-VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D090 (-VmBusChannelClosed@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_GUEST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C023D0D0 (-VmBusChannelOpened@DXG_GUEST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_GUEST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C023D110 (-VmBusChannelOpened@DXG_GUEST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C023D150 (-VmBusChannelOpened@DXG_HOST_GLOBAL_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z @ 0x1C023D190 (-VmBusChannelOpened@DXG_HOST_VIRTUALGPU_VMBUS@@SAJPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D1D0 (-VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D240 (-VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D2B0 (-VmBusChannelPostStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D2F0 (-VmBusChannelPostStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D330 (-VmBusChannelStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D370 (-VmBusChannelStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D3B0 (-VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D3F0 (-VmBusChannelStarted@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D430 (-VmBusChannelSuspend@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D490 (-VmBusChannelSuspend@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D4E0 (-VmBusChannelSuspend@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023D520 (-VmBusChannelSuspend@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02CCAA0 (DpiFlexIovMitigationUpdate.c)
 *     DpiGetVirtualizationFlags @ 0x1C02CCC78 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C02CCEF0 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C02CD080 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C02CD274 (DpiSriovEventComplete.c)
 *     DpiSriovNotification @ 0x1C02CD360 (DpiSriovNotification.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C02D3070 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C02D3470 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C02D3630 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     McTemplateK0pzzq_EtwWriteTransfer @ 0x1C003F364 (McTemplateK0pzzq_EtwWriteTransfer.c)
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
