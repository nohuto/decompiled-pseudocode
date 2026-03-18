/*
 * XREFs of HvipApertureAmdVmcall @ 0x140400C50
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14058F3A0 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
