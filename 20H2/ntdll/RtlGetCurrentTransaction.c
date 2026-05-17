/*
 * XREFs of RtlGetCurrentTransaction @ 0x18006DBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *RtlGetCurrentTransaction()
{
  return NtCurrentTeb()->CurrentTransactionHandle;
}
