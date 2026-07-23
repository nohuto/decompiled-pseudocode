/*
 * XREFs of HvipApertureAmdVmcall @ 0x1404098D0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140594ABC (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
