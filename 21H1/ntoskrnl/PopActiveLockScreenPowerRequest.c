/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x1408F0850
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405CE6A8 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopReleaseAdaptiveLock @ 0x1406FE6C4 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1406FE7B4 (PopAcquireAdaptiveLock.c)
 *     PopUpdateTimeouts @ 0x1406FE9F8 (PopUpdateTimeouts.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  PopAcquireAdaptiveLock(0);
  if ( a3 )
  {
    BYTE5(xmmword_140C205F0) = 1;
    if ( BYTE6(xmmword_140C205F0) )
    {
      LockConsoleTimeoutUnsafe = PopDisplayTimeout;
      LODWORD(v6) = PopDisplayTimeout;
      BYTE6(xmmword_140C205F0) = 0;
      goto LABEL_7;
    }
  }
  else
  {
    BYTE5(xmmword_140C205F0) = 0;
    LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
    LODWORD(v6) = LockConsoleTimeoutUnsafe;
    if ( LockConsoleTimeoutUnsafe && BYTE4(xmmword_140C205F0) )
    {
      BYTE6(xmmword_140C205F0) = 1;
LABEL_7:
      HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
      BYTE1(qword_140C205D0) = 1;
      PopUpdateTimeouts(PopConsoleContext, (unsigned int *)&v6, 0LL);
    }
  }
  PopReleaseAdaptiveLock();
  return 0LL;
}
