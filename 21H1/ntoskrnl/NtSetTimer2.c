/*
 * XREFs of NtSetTimer2 @ 0x1402424D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1402424F4 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  if ( DueTime )
    return ExpSetTimer2(TimerHandle);
  else
    return -1073741584;
}
