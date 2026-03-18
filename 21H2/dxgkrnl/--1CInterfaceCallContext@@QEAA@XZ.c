/*
 * XREFs of ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005F440
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C00603D8 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0065620 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C00656C0 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0065770 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0065810 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C00658A0 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0065940 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0065A00 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0065B00 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C0065BB0 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0065C70 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0065D50 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0065DE0 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiFdoDispatchIoctl @ 0x1C01E6840 (DpiFdoDispatchIoctl.c)
 *     DpiMitigatedRangeUpdate @ 0x1C0387534 (DpiMitigatedRangeUpdate.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C038BF98 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C038C3D4 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C038C560 (DpiSriovDetach.c)
 *     DpiSriovNotification @ 0x1C038C828 (DpiSriovNotification.c)
 *     DpiIovGetBackingResource @ 0x1C03914F0 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C0391660 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C0391780 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C0391880 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C02C53D8 (DxgkReleaseAdapterStopResetSync.c)
 */

void __fastcall CInterfaceCallContext::~CInterfaceCallContext(CInterfaceCallContext *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 20) )
  {
    if ( *((_BYTE *)this + 21) )
    {
      *(_BYTE *)(*((_QWORD *)this + 1) + 5452LL) = 0;
      ExReleasePushLockExclusiveEx(*((_QWORD *)this + 1) + 5408LL, 0LL);
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    }
    if ( *((_BYTE *)this + 22) )
    {
      *(_BYTE *)(*((_QWORD *)this + 1) + 5452LL) = 0;
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(*((_QWORD *)this + 1) + 3896LL), 0LL);
    }
    if ( *((_BYTE *)this + 23) )
    {
      v2 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v2 + 484) )
      {
        DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
        v2 = *((_QWORD *)this + 1);
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
      KeLeaveCriticalRegion();
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)this + 1) + 64LL), *((PVOID *)this + 1), 0x20u);
  }
}
