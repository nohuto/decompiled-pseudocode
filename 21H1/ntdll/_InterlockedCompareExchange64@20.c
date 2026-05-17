/*
 * XREFs of _InterlockedCompareExchange64@20 @ 0x4B3085C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __stdcall InterlockedCompareExchange64(volatile LONGLONG *Destination, LONGLONG Exchange, LONGLONG Comperand)
{
  return _InterlockedCompareExchange64(Destination, Exchange, Comperand);
}
