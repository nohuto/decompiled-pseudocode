/*
 * XREFs of NtSetIRTimer @ 0x1402511B0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x14026E384 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle);
}
