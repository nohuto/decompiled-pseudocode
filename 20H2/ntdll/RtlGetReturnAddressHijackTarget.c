/*
 * XREFs of RtlGetReturnAddressHijackTarget @ 0x1800FDA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (*RtlGetReturnAddressHijackTarget())()
{
  return RtlRaiseExceptionForReturnAddressHijack;
}
