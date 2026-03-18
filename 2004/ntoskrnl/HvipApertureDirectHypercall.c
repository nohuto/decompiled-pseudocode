/*
 * XREFs of HvipApertureDirectHypercall @ 0x14058F3A0
 * Callers:
 *     HviEnterKernelAperture @ 0x14058F1F0 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14058F24C (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x140400C40 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x140400C50 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_140CF9E24 )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
