/*
 * XREFs of PsGetThreadExitStatus @ 0x1406E6EB0
 * Callers:
 *     NtQueryInformationThread @ 0x140610870 (NtQueryInformationThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 */

NTSTATUS __stdcall PsGetThreadExitStatus(PETHREAD Thread)
{
  struct _EX_RUNDOWN_REF *p_WaitStatus; // rdi

  p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    return Thread[1].Timer.DueTime.LowPart;
  ExReleaseRundownProtection_0(p_WaitStatus);
  return 259;
}
