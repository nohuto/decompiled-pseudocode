/*
 * XREFs of HvipApertureDirectHypercall @ 0x1405F2E30
 * Callers:
 *     HviEnterKernelAperture @ 0x1405F2C80 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405F2CDC (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x14042B770 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x14042B780 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_140D04924 )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
