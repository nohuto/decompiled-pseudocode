/*
 * XREFs of RtlGetReturnAddressHijackTarget @ 0x1800FD8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG_PTR RtlGetReturnAddressHijackTarget(void)
{
  return (ULONG_PTR)RtlRaiseExceptionForReturnAddressHijack;
}
