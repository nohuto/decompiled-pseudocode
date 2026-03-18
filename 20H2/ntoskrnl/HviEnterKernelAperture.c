/*
 * XREFs of HviEnterKernelAperture @ 0x140592C94
 * Callers:
 *     HviCopyMemory @ 0x140592B94 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x140592C10 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x140407030 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x140592D3C (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x140592E44 (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140CF9ECD;
  if ( !byte_140CF9ECD )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C12B42 )
  {
    if ( byte_140CF9ECE )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
