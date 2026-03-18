/*
 * XREFs of ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0050214
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C0051AFC (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0057AE0 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0057B80 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0057C30 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0057CC0 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0057D40 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0057DD0 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0057E80 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0057F70 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0058020 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C00580D0 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C00581B0 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0058240 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiMitigatedRangeUpdate @ 0x1C02C5750 (DpiMitigatedRangeUpdate.c)
 *     DpiFdoDispatchIoctl @ 0x1C02C7BB0 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02CBAE0 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C02CBF30 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C02CC0C0 (DpiSriovDetach.c)
 *     DpiSriovNotification @ 0x1C02CC3A0 (DpiSriovNotification.c)
 *     DpiIovGetBackingResource @ 0x1C02D2ED0 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C02D3030 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C02D3150 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C02D3250 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C00E103C (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011DFA0 (DpiReleaseCoreSyncAccessSafe.c)
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
