/*
 * XREFs of SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x1C00C6974
 * Callers:
 *     NtGdiGetOPMInformation @ 0x1C00C6570 (NtGdiGetOPMInformation.c)
 * Callees:
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_(void *a1, char *a2)
{
  if ( (unsigned __int64)(a2 + 4112) > MmUserProbeAddress || a2 + 4112 < a2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(a1, a2, 0x1010uLL);
  return 0LL;
}
