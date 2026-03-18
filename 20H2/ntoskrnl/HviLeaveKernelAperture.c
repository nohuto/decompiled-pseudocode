/*
 * XREFs of HviLeaveKernelAperture @ 0x140592CF0
 * Callers:
 *     HviCopyMemory @ 0x140592B94 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x140592C10 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x140407030 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x140592E44 (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C12B42 )
  {
    if ( byte_140CF9ECE )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
