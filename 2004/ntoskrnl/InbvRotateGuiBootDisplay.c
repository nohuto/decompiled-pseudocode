/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1404F9DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1403B0DF8 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1404F9ACC (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1404F9B00 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1404F9B5C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1404F9BFC (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1404F9F3C (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1406CB620 (PsTerminateSystemThread.c)
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
