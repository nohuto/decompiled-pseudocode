/*
 * XREFs of HvipApertureDirectHypercall @ 0x140594ABC
 * Callers:
 *     HviEnterKernelAperture @ 0x14059490C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140594968 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1404098C0 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1404098D0 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_140CFA3D4 )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
