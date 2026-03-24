/*
 * XREFs of HvipApertureDirectHypercall @ 0x14059488C
 * Callers:
 *     HviEnterKernelAperture @ 0x1405946DC (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140594738 (HviLeaveKernelAperture.c)
 * Callees:
 *     HvipApertureIntelVmcall @ 0x1404096E0 (HvipApertureIntelVmcall.c)
 *     HvipApertureAmdVmcall @ 0x1404096F0 (HvipApertureAmdVmcall.c)
 */

void HvipApertureDirectHypercall()
{
  if ( byte_140CFA38C )
    HvipApertureIntelVmcall();
  else
    HvipApertureAmdVmcall();
}
