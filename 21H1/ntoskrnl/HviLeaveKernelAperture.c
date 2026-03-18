/*
 * XREFs of HviLeaveKernelAperture @ 0x14058EB5C
 * Callers:
 *     HviCopyMemory @ 0x14058EA00 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x14058EA7C (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x1403FF9A0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x14058ECB0 (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C12B22 )
  {
    if ( byte_140CF9F26 )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
