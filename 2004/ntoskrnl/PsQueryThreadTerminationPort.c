/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1405C7384
 * Callers:
 *     sub_1405B9C20 @ 0x1405B9C20 (sub_1405B9C20.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
