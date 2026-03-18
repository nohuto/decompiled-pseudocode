/*
 * XREFs of HvipApertureIntelVmcall @ 0x140407040
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140592E44 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureIntelVmcall()
{
  __asm { vmcall }
}
