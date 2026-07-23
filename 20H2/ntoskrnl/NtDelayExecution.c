/*
 * XREFs of NtDelayExecution @ 0x140688190
 * Callers:
 *     LdrpInitMuiCrits @ 0x1402FD4C0 (LdrpInitMuiCrits.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  KPROCESSOR_MODE PreviousMode; // cl
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)DelayInterval & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Interval = *DelayInterval;
  }
  else
  {
    Interval = *DelayInterval;
  }
  return KeDelayExecutionThread(PreviousMode, Alertable, &Interval);
}
