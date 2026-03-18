/*
 * XREFs of PsQueryThreadTerminationPort @ 0x1405CB384
 * Callers:
 *     sub_1405BD780 @ 0x1405BD780 (sub_1405BD780.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentPrcb()->CurrentThread[1].InitialStack;
}
