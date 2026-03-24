/*
 * XREFs of HvipApertureIntelVmcall @ 0x1404096E0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14059488C (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
