/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1404FF210
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1403B4DA8 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1404FEEFC (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1404FEF30 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1404FEF8C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1404FF02C (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1404FF36C (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1406C0930 (PsTerminateSystemThread.c)
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
