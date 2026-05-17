/*
 * XREFs of RtlGetReturnAddressHijackTarget @ 0x1800FD560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (*RtlGetReturnAddressHijackTarget())()
{
  return RtlRaiseExceptionForReturnAddressHijack;
}
