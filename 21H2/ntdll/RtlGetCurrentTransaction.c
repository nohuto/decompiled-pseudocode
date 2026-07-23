/*
 * XREFs of RtlGetCurrentTransaction @ 0x18006EC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE RtlGetCurrentTransaction(void)
{
  return NtCurrentTeb()->CurrentTransactionHandle;
}
