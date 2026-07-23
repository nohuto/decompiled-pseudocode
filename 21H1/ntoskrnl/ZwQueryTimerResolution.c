/*
 * XREFs of ZwQueryTimerResolution @ 0x1403F4F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryTimerResolution(PULONG MaximumTime, PULONG MinimumTime, PULONG CurrentTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MaximumTime);
}
