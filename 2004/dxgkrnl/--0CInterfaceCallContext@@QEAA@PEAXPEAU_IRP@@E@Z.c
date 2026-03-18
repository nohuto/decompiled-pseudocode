/*
 * XREFs of ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C00501AC
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C0051BBC (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0057BA0 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0057C40 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0057CF0 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0057D80 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0057E00 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0057E90 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0057F40 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0058030 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C00580E0 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0058190 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0058270 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0058300 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiMitigatedRangeUpdate @ 0x1C02C6710 (DpiMitigatedRangeUpdate.c)
 *     DpiFdoDispatchIoctl @ 0x1C02C8B70 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C02CCAA0 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C02CCEF0 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C02CD080 (DpiSriovDetach.c)
 *     DpiSriovNotification @ 0x1C02CD360 (DpiSriovNotification.c)
 *     DpiIovGetBackingResource @ 0x1C02D3E90 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C02D3FF0 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C02D4110 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C02D4210 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011F39C (DpiAcquireCoreSyncAccessSafe.c)
 */

CInterfaceCallContext *__fastcall CInterfaceCallContext::CInterfaceCallContext(
        CInterfaceCallContext *this,
        _QWORD *a2,
        struct _IRP *a3,
        char a4)
{
  char v4; // di
  struct _IO_REMOVE_LOCK *v5; // rdx
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx

  *(_QWORD *)this = a2;
  v4 = 0;
  v5 = (struct _IO_REMOVE_LOCK *)a2[8];
  *((_QWORD *)this + 1) = v5;
  *((_WORD *)this + 10) = 0;
  v9 = IoAcquireRemoveLockEx(v5 + 2, v5, File, 1u, 0x20u);
  *((_DWORD *)this + 4) = v9;
  if ( v9 >= 0 )
  {
    *((_BYTE *)this + 20) = 1;
    KeEnterCriticalRegion();
    v13 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v13 + 484) )
    {
      DpiCheckForOutstandingD3Requests(v13);
      v13 = *((_QWORD *)this + 1);
    }
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v13 + 168), 1u);
    if ( a4 )
    {
      v14 = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)this, 0LL);
      *((_DWORD *)this + 4) = v14;
      if ( v14 >= 0 )
      {
        v15 = *((_QWORD *)this + 1) + 5480LL;
        *((_BYTE *)this + 21) = 1;
        ExAcquirePushLockExclusiveEx(v15, 0LL);
        if ( !a3 || !a3->RequestorMode )
          v4 = 1;
        *(_BYTE *)(*((_QWORD *)this + 1) + 5524LL) = v4;
      }
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v12 + 24) = *((int *)this + 4);
    WdLogEvent5_WdError(v12);
  }
  return this;
}
