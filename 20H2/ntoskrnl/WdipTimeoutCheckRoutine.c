/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x1406F3CC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExSetTimer @ 0x14033C8D0 (ExSetTimer.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406F3B70 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1406F3C34 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140784940 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProviders @ 0x140785B20 (WdipSemDisableContextProviders.c)
 *     WdipSemLogTimeoutInformation @ 0x140932CE0 (WdipSemLogTimeoutInformation.c)
 */

_BOOL8 WdipTimeoutCheckRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 *TimedOutInstanceForDeletion; // rdi
  __int64 v3; // rbx
  __int64 *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  WdipSemSqmLogInflightLimitExceededDataPoints();
  if ( WdipSemTimeoutEnabled )
  {
    TimedOutInstanceForDeletion = WdipSemMarkNextTimedOutInstanceForDeletion((__int64 **)&WdipSemEnabledInstanceTable);
    while ( TimedOutInstanceForDeletion )
    {
      LOBYTE(v1) = 1;
      WdipSemDisableContextProviders(TimedOutInstanceForDeletion, v1);
      v5 = TimedOutInstanceForDeletion;
      v6 = WdipSemMarkNextTimedOutInstanceForDeletion((__int64 **)TimedOutInstanceForDeletion);
      v7 = TimedOutInstanceForDeletion[4];
      v8 = TimedOutInstanceForDeletion + 2;
      TimedOutInstanceForDeletion = v6;
      WdipSemLogTimeoutInformation(v7, *(unsigned __int16 *)(v7 + 16), v8);
      WdipSemDeleteTransitionalInstance(v5);
    }
  }
  v3 = WdipSemOneSecond * (WdipSemTimeoutValue / 0xAu);
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ExSetTimer(WdipTimeoutTimer, v3, 0LL, (__int64)&WdipTimeoutTimerParameters);
}
