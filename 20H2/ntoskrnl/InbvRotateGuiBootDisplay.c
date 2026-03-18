/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1404FD670
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1403B3768 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1404FD35C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1404FD390 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1404FD3EC (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1404FD48C (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1404FD7CC (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x140712D90 (PsTerminateSystemThread.c)
 */

void __fastcall InbvRotateGuiBootDisplay(PVOID StartContext)
{
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -800000LL;
  do
  {
    KeDelayExecutionThread(0, 0, &Interval);
    InbvAcquireLock();
    if ( !(unsigned int)InbvGetDisplayState() && RotBarSelection == 1 )
      RotBarUpdate();
    InbvReleaseLock();
  }
  while ( InbvCheckDisplayOwnership() );
  InbvReleaseResources();
  PsTerminateSystemThread(0);
}
