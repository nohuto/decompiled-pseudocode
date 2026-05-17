/*
 * XREFs of LdrForkMrdata @ 0x1800D5940
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009B370 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009B4B0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6360 (RtlCloneUserProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrForkMrdata(int a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      LdrpMrdataLock = 1LL;
    else
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  else
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, a2, a3, a4);
  }
}
