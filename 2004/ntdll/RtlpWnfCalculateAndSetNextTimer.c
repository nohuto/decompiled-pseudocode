/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x18008AF4C
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180062750 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008ADC0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpWnfSetRetryTimer @ 0x18008B000 (RtlpWnfSetRetryTimer.c)
 */

signed __int64 __fastcall RtlpWnfCalculateAndSetNextTimer(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  int v5; // esi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rcx
  __int64 *v10; // rbx

  v4 = 0LL;
  v5 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18016B228 + 8), a2, a3, a4);
  v9 = qword_18016B228;
  v10 = *(__int64 **)(qword_18016B228 + 16);
  if ( v10 != (__int64 *)(qword_18016B228 + 16) )
  {
    do
    {
      RtlAcquireSRWLockShared(v10 + 3, v6, v7, v8);
      if ( *((_DWORD *)v10 + 24) == 2 && (!v4 || v10[13] < v4) )
      {
        v4 = v10[13];
        v5 = 1;
      }
      RtlReleaseSRWLockShared(v10 + 3);
      v9 = qword_18016B228;
      v10 = (__int64 *)*v10;
    }
    while ( v10 != (__int64 *)(qword_18016B228 + 16) );
    if ( v5 )
    {
      RtlpWnfSetRetryTimer(v4);
      v9 = qword_18016B228;
    }
  }
  return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
}
