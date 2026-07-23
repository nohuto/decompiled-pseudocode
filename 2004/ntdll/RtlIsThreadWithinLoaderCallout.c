/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x18007D900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsThreadWithinLoaderCallout(void)
{
  return LdrpLoaderLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
