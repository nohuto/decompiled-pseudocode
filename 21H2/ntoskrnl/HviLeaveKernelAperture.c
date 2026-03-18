/*
 * XREFs of HviLeaveKernelAperture @ 0x1405F2CDC
 * Callers:
 *     HviCopyMemory @ 0x1405F2B80 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1405F2BFC (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x14042B760 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x1405F2E30 (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C0D790 )
  {
    if ( byte_140D04926 )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
