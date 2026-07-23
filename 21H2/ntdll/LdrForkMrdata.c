/*
 * XREFs of LdrForkMrdata @ 0x1800D5A50
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009BA70 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009BBB0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6470 (RtlCloneUserProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrForkMrdata(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      LdrpMrdataLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    else
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  }
}
