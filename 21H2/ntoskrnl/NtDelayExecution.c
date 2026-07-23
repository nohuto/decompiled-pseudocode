/*
 * XREFs of NtDelayExecution @ 0x140684010
 * Callers:
 *     LdrpInitMuiCrits @ 0x140227A24 (LdrpInitMuiCrits.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
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
