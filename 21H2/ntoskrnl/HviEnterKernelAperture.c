/*
 * XREFs of HviEnterKernelAperture @ 0x1405F2C80
 * Callers:
 *     HviCopyMemory @ 0x1405F2B80 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1405F2BFC (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x14042B760 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x1405F2D28 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x1405F2E30 (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140D04925;
  if ( !byte_140D04925 )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C0D790 )
  {
    if ( byte_140D04926 )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
