/*
 * XREFs of HvipApertureIntelVmcall @ 0x1404098C0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140594ABC (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
