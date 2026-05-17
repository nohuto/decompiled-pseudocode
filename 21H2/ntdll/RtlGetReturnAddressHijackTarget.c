/*
 * XREFs of RtlGetReturnAddressHijackTarget @ 0x1800FD910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (*RtlGetReturnAddressHijackTarget())()
{
  return RtlRaiseExceptionForReturnAddressHijack;
}
