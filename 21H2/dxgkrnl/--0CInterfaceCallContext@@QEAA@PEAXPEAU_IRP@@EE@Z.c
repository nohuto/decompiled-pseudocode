/*
 * XREFs of ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z @ 0x1C005F2C8
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
 *     DpiCheckForOutstandingD3Requests @ 0x1C0012BA4 (DpiCheckForOutstandingD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterStopResetSync @ 0x1C02C4E5C (DxgkAcquireAdapterStopResetSync.c)
 *     DxgkReleaseAdapterStopResetSync @ 0x1C02C53D8 (DxgkReleaseAdapterStopResetSync.c)
 */

CInterfaceCallContext *__fastcall CInterfaceCallContext::CInterfaceCallContext(
        CInterfaceCallContext *this,
        _QWORD *a2,
        struct _IRP *a3,
        char a4,
        char a5)
{
  char v5; // di
  struct _IO_REMOVE_LOCK *v6; // rdx
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax

  *(_QWORD *)this = a2;
  v5 = 0;
  v6 = (struct _IO_REMOVE_LOCK *)a2[8];
  *((_QWORD *)this + 1) = v6;
  *((_DWORD *)this + 5) = 0;
  v10 = IoAcquireRemoveLockEx(v6 + 2, v6, File, 1u, 0x20u);
  *((_DWORD *)this + 4) = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL, v10);
    return this;
  }
  *((_BYTE *)this + 20) = 1;
  if ( !a5 )
  {
    KeEnterCriticalRegion();
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 484) )
    {
      DpiCheckForOutstandingD3Requests(v11);
      v11 = *((_QWORD *)this + 1);
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
    *((_BYTE *)this + 23) = 1;
  }
  if ( a4 )
  {
    v12 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
    *((_DWORD *)this + 4) = v12;
    if ( v12 < 0 )
      return this;
    v13 = *((_QWORD *)this + 1) + 5408LL;
    *((_BYTE *)this + 21) = 1;
    ExAcquirePushLockExclusiveEx(v13, 0LL);
  }
  else
  {
    if ( !a5 )
      return this;
    v14 = DxgkAcquireAdapterStopResetSync(*(_QWORD *)(*((_QWORD *)this + 1) + 3896LL), 0LL);
    *((_DWORD *)this + 4) = v14;
    if ( v14 < 0 )
      return this;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 3896LL) + 200LL) != 1 )
    {
      DxgkReleaseAdapterStopResetSync(*(_QWORD *)(*((_QWORD *)this + 1) + 3896LL), 0LL);
      *((_DWORD *)this + 4) = -1073741130;
      return this;
    }
    *((_BYTE *)this + 22) = 1;
  }
  if ( !a3 || !a3->RequestorMode )
    v5 = 1;
  *(_BYTE *)(*((_QWORD *)this + 1) + 5452LL) = v5;
  return this;
}
