/*
 * XREFs of HvipApertureAmdVmcall @ 0x140407050
 * Callers:
 *     HvipApertureDirectHypercall @ 0x140592E44 (HvipApertureDirectHypercall.c)
 * Callees:
 *     <none>
 */

void HvipApertureAmdVmcall()
{
  __asm { vmmcall }
}
