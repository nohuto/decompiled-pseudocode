/*
 * XREFs of HviEnterKernelAperture @ 0x14058EB00
 * Callers:
 *     HviCopyMemory @ 0x14058EA00 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x14058EA7C (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x1403FF9A0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x14058EBA8 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x14058ECB0 (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140CF9F25;
  if ( !byte_140CF9F25 )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C12B22 )
  {
    if ( byte_140CF9F26 )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
