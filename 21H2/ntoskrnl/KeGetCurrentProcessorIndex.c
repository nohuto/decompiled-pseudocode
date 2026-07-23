/*
 * XREFs of KeGetCurrentProcessorIndex @ 0x140238140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG KeGetCurrentProcessorIndex(void)
{
  return KeGetPcr()->Prcb.Number;
}
