/*
 * XREFs of NtDelayExecution @ 0x1405EDE90
 * Callers:
 *     LdrpInitMuiCrits @ 0x14033A660 (LdrpInitMuiCrits.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
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
