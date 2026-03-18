/*
 * XREFs of HvipApertureIntelVmcall @ 0x14042B770
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405F2E30 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
