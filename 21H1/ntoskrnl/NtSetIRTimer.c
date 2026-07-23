/*
 * XREFs of NtSetIRTimer @ 0x140322420
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1402424F4 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle, (__int64)DueTime, 0LL, 0LL);
}
