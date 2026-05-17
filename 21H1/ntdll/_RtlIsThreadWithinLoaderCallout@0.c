/*
 * XREFs of _RtlIsThreadWithinLoaderCallout@0 @ 0x4B2ED0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall RtlIsThreadWithinLoaderCallout()
{
  return (void *)dword_4B3A339C == NtCurrentTeb()->ClientId.UniqueThread;
}
