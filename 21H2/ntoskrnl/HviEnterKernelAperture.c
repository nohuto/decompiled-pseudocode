/*
 * XREFs of HviEnterKernelAperture @ 0x1405946DC
 * Callers:
 *     HviCopyMemory @ 0x1405945DC (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x140594658 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x1404096D0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x140594784 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x14059488C (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140CFA38D;
  if ( !byte_140CFA38D )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C12D22 )
  {
    if ( byte_140CFA38E )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
