/*
 * XREFs of KeGetCurrentProcessorIndex @ 0x1402EE3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG KeGetCurrentProcessorIndex(void)
{
  return KeGetPcr()->Prcb.Number;
}
