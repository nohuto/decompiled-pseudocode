/*
 * XREFs of ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B285C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00B27F0 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     GetPathsModality @ 0x1C00B2890 (GetPathsModality.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0146628 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01495C8 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0149D68 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C014A5A0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreePathsModality(struct D3DKMT_GETPATHSMODALITY *a1)
{
  if ( a1 )
  {
    ((void (*)(void))qword_1C024C8D8)();
    Win32FreePool((__int64)a1);
  }
}
