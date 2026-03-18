/*
 * XREFs of HvipApertureAmdVmcall @ 0x1403FF9C0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14058ECB0 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
