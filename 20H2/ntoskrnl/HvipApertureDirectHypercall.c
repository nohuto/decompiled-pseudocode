/*
 * XREFs of HvipApertureDirectHypercall @ 0x140592E44
 * Callers:
 *     HviEnterKernelAperture @ 0x140592C94 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140592CF0 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x140407040 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x140407050 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_140CF9ECC )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
