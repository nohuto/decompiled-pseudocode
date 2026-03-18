/*
 * XREFs of ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0144D18
 * Callers:
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0147898 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0144C44 (-ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

void __fastcall ConvertPreferredScalingToAdapterDefault(struct D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((unsigned __int16 *)a1 + 10); ++i )
    ConvertPathPreferredScalingToAdapterDefault(
      (struct D3DKMT_GETPATHSMODALITY *)((char *)a1 + 272 * i + 48),
      272LL * i);
}
