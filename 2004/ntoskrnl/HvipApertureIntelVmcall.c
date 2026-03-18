/*
 * XREFs of HvipApertureIntelVmcall @ 0x140400C40
 * Callers:
 *     HvipApertureDirectHypercall @ 0x14058F3A0 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
