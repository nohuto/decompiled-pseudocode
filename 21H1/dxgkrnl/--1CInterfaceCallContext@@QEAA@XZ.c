/*
 * XREFs of ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C004F2C4
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C0050BAC (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0056B90 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0056C30 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0056CE0 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0056D70 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0056DF0 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0056E80 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0056F30 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0057020 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C00570D0 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0057180 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0057260 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C00572F0 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiMitigatedRangeUpdate @ 0x1C02C2190 (DpiMitigatedRangeUpdate.c)
 *     DpiFdoDispatchIoctl @ 0x1C02C45F0 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02C8520 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C02C8970 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C02C8B00 (DpiSriovDetach.c)
 *     DpiSriovNotification @ 0x1C02C8DE0 (DpiSriovNotification.c)
 *     DpiIovGetBackingResource @ 0x1C02CF910 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C02CFA70 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C02CFB90 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C02CFC90 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01271F0 (DpiReleaseCoreSyncAccessSafe.c)
 */

void __fastcall CInterfaceCallContext::~CInterfaceCallContext(CInterfaceCallContext *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 20) )
  {
    if ( *((_BYTE *)this + 21) )
    {
      *(_BYTE *)(*((_QWORD *)this + 1) + 5524LL) = 0;
      ExReleasePushLockExclusiveEx(*((_QWORD *)this + 1) + 5480LL, 0LL);
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    }
    v2 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v2 + 484) )
    {
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
      v2 = *((_QWORD *)this + 1);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)this + 1) + 64LL), *((PVOID *)this + 1), 0x20u);
  }
}
