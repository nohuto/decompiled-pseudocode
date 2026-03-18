/*
 * XREFs of SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x1C00C605C
 * Callers:
 *     NtGdiGetOPMInformation @ 0x1C00C5F00 (NtGdiGetOPMInformation.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C0141BE0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(void *a1, void *Src)
{
  ProbeForWrite(a1, 0x1000uLL, 1u);
  memmove(a1, Src, 0x1000uLL);
  return 0LL;
}
