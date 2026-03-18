/*
 * XREFs of ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0057230
 * Callers:
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0056B90 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 *     ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0056C30 (-DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z @ 0x1C0056CE0 (-DpiDdiGetVendorAndDevice@@YAXPEAXGPEAG1@Z.c)
 *     ?DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z @ 0x1C0056D70 (-DpiDdiQueryPhysicalFunctionLuid@@YAJPEAXPEAU_LUID@@@Z.c)
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0056DF0 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0056E80 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0056F30 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C0056FE0 (-DpiDdiResetVirtualFunction@@YAJPEAXG@Z.c)
 *     ?DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0057020 (-DpiDdiSetVirtualFunctionPowerState@@YAJPEAXGW4_DEVICE_POWER_STATE@@E@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z @ 0x1C00570D0 (-DpiDdiWriteVirtualFunctionConfig@@YAJPEAXPEBXGKK@Z.c)
 *     ?DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0057180 (-DpiDdiWriteVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 *     ?DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z @ 0x1C0057260 (-DpiQueryVirtualFunctionIndexByLuid@@YAJPEAXU_LUID@@PEAG@Z.c)
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C00572F0 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiDoInterfaceDereferenceGpuP @ 0x1C02CEA50 (DpiDoInterfaceDereferenceGpuP.c)
 *     DpiDoInterfaceReferenceGpuP @ 0x1C02CEAB0 (DpiDoInterfaceReferenceGpuP.c)
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x1C02CEAF0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x1C02CEEF0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x1C02CF0B0 (DpiFdoHandleQuerySrIovInterface.c)
 *     DpiIovGetBackingResource @ 0x1C02CF910 (DpiIovGetBackingResource.c)
 *     DpiIovGetMmioRangeCount @ 0x1C02CFA70 (DpiIovGetMmioRangeCount.c)
 *     DpiIovGetMmioRanges @ 0x1C02CFB90 (DpiIovGetMmioRanges.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C02CFC90 (DpiIovGetVirtualizationFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetVirtualGpuType(_DWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( *a1 == 1 )
  {
    *a2 = *((_QWORD *)a1 - 681);
  }
  else
  {
    *a2 = *((_QWORD *)a1 - 677);
    return 0LL;
  }
  return result;
}
