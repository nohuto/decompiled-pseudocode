/*
 * XREFs of KeGetCurrentProcessorIndex @ 0x140317300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG KeGetCurrentProcessorIndex(void)
{
  return KeGetPcr()->Prcb.Number;
}
