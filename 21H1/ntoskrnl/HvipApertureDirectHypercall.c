/*
 * XREFs of HvipApertureDirectHypercall @ 0x14058ECB0
 * Callers:
 *     HviEnterKernelAperture @ 0x14058EB00 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14058EB5C (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1403FF9B0 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1403FF9C0 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_140CF9F24 )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
