/*
 * XREFs of HvipApertureAmdVmcall @ 0x14042B780
 * Callers:
 *     HvipApertureDirectHypercall @ 0x1405F2E30 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
