/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x18007D900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_180164508 == NtCurrentTeb()->ClientId.UniqueThread;
}
