/*
 * XREFs of HviLeaveKernelAperture @ 0x140594968
 * Callers:
 *     HviCopyMemory @ 0x14059480C (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x140594888 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x1404098B0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x140594ABC (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C12D02 )
  {
    if ( byte_140CFA3D5 )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
