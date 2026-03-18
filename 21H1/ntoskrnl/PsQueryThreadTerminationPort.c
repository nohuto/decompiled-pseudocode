/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1405C6384
 * Callers:
 *     sub_1405B9500 @ 0x1405B9500 (sub_1405B9500.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
