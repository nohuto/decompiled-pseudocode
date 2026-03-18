/*
 * XREFs of HvipApertureIntelVmcall @ 0x1403FF9B0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14058ECB0 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
