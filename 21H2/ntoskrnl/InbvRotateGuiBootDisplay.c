/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1404FF190
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     InbvReleaseResources @ 0x1403B4F18 (InbvReleaseResources.c)
 *     InbvAcquireLock @ 0x1404FEE7C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1404FEEB0 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1404FEF0C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1404FEFAC (InbvReleaseLock.c)
 *     RotBarUpdate @ 0x1404FF2EC (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x14061F840 (PsTerminateSystemThread.c)
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
