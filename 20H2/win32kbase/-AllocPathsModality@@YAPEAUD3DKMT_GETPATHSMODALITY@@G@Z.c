/*
 * XREFs of ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C00A8124
 * Callers:
 *     GetPathsModality @ 0x1C00A8064 (GetPathsModality.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014436C (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0145630 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01470F8 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0147898 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 */

struct D3DKMT_GETPATHSMODALITY *__fastcall AllocPathsModality(unsigned __int16 a1)
{
  __int64 v1; // rbx
  struct D3DKMT_GETPATHSMODALITY *result; // rax
  __int64 v3; // rax

  v1 = a1;
  result = (struct D3DKMT_GETPATHSMODALITY *)PALLOCMEM2(272 * ((unsigned int)a1 - 1) + 320, 1936876615LL, 1);
  if ( result )
  {
    *((_DWORD *)result + 9) = 0;
    *((_QWORD *)result + 5) = 0LL;
    *((_WORD *)result + 10) = v1;
    *((_WORD *)result + 11) = v1;
  }
  else
  {
    v3 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v3 + 24) = v1;
    WdLogEvent5_WdLowResource(v3);
    return 0LL;
  }
  return result;
}
