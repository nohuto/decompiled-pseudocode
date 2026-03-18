/*
 * XREFs of PsGetThreadExitStatus @ 0x14070AD70
 * Callers:
 *     NtQueryInformationThread @ 0x1406889F0 (NtQueryInformationThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
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
