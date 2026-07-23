/*
 * XREFs of HviEnterKernelAperture @ 0x14059490C
 * Callers:
 *     HviCopyMemory @ 0x14059480C (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x140594888 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x1404098B0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x1405949B4 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x140594ABC (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140CFA3D6;
  if ( !byte_140CFA3D6 )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C12D02 )
  {
    if ( byte_140CFA3D5 )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
