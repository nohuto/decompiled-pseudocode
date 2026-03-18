/*
 * XREFs of HalpApic1EndOfInterrupt @ 0x1403F7D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void HalpApic1EndOfInterrupt()
{
  *(_DWORD *)(HalpLocalApic + 176) = 0;
}
