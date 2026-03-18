/*
 * XREFs of RIMWatchDogTimerInit @ 0x1C01556B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 */

void __fastcall RIMWatchDogTimerInit(struct _KTIMER *a1)
{
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  if ( !a1 )
    gbWatchDogTimerArmed = 0;
  qword_1C0250398 = 0LL;
  gWatchDogTimer = a1;
  ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
  KeLeaveCriticalRegion();
}
