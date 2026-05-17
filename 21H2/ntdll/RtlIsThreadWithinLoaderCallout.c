/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x18007E3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_1801665D8 == NtCurrentTeb()->ClientId.UniqueThread;
}
