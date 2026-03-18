/*
 * XREFs of NtDelayExecution @ 0x140688190
 * Callers:
 *     LdrpInitMuiCrits @ 0x1402FD4C0 (LdrpInitMuiCrits.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtDelayExecution(BOOLEAN a1, LARGE_INTEGER *a2)
{
  KPROCESSOR_MODE PreviousMode; // cl
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Interval = *a2;
  }
  else
  {
    Interval = *a2;
  }
  return KeDelayExecutionThread(PreviousMode, a1, &Interval);
}
