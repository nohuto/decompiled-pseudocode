/*
 * XREFs of HviLeaveKernelAperture @ 0x14058F24C
 * Callers:
 *     HviCopyMemory @ 0x14058F0F0 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x14058F16C (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x140400C30 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x14058F3A0 (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C12B42 )
  {
    if ( byte_140CF9E26 )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
