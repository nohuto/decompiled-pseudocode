/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x18008B04C
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180062860 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008AEC0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpWnfSetRetryTimer @ 0x18008B100 (RtlpWnfSetRetryTimer.c)
 */

void RtlpWnfCalculateAndSetNextTimer()
{
  unsigned __int64 Value; // rdi
  int v1; // esi
  _RTL_SRWLOCK *v2; // rcx
  _RTL_SRWLOCK *v3; // rbx

  Value = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18016D250 + 8));
  v2 = (_RTL_SRWLOCK *)qword_18016D250;
  v3 = *(_RTL_SRWLOCK **)(qword_18016D250 + 16);
  if ( v3 != (_RTL_SRWLOCK *)(qword_18016D250 + 16) )
  {
    do
    {
      RtlAcquireSRWLockShared(v3 + 3);
      if ( v3[12].0 == 2 && (!Value || v3[13].Value < Value) )
      {
        Value = v3[13].Value;
        v1 = 1;
      }
      RtlReleaseSRWLockShared(v3 + 3);
      v2 = (_RTL_SRWLOCK *)qword_18016D250;
      v3 = (_RTL_SRWLOCK *)v3->Value;
    }
    while ( v3 != (_RTL_SRWLOCK *)(qword_18016D250 + 16) );
    if ( v1 )
    {
      RtlpWnfSetRetryTimer(Value);
      v2 = (_RTL_SRWLOCK *)qword_18016D250;
    }
  }
  RtlReleaseSRWLockShared(v2 + 1);
}
