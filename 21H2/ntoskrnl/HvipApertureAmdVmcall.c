/*
 * XREFs of HvipApertureAmdVmcall @ 0x1404096F0
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14059488C (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
