/*
 * XREFs of HviLeaveKernelAperture @ 0x140594738
 * Callers:
 *     HviCopyMemory @ 0x1405945DC (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x140594658 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x1404096D0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x14059488C (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C12D22 )
  {
    if ( byte_140CFA38E )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
