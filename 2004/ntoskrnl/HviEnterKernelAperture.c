/*
 * XREFs of HviEnterKernelAperture @ 0x14058F1F0
 * Callers:
 *     HviCopyMemory @ 0x14058F0F0 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x14058F16C (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x140400C30 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x14058F298 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x14058F3A0 (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140CF9E25;
  if ( !byte_140CF9E25 )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C12B42 )
  {
    if ( byte_140CF9E26 )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
