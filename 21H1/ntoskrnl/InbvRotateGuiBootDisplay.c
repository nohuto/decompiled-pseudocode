/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1404F9790
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1403AB178 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1404F947C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1404F94B0 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1404F950C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1404F95AC (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1404F98EC (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x1406EA510 (PsTerminateSystemThread.c)
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
