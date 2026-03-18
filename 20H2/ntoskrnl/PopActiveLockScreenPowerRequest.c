/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x1408F7750
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405D5F28 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopUpdateTimeouts @ 0x14072089C (PopUpdateTimeouts.c)
 *     PopReleaseAdaptiveLock @ 0x140721000 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1407210F0 (PopAcquireAdaptiveLock.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  PopAcquireAdaptiveLock(0);
  if ( a3 )
  {
    BYTE5(xmmword_140C204B0) = 1;
    if ( BYTE6(xmmword_140C204B0) )
    {
      LockConsoleTimeoutUnsafe = PopDisplayTimeout;
      LODWORD(v6) = PopDisplayTimeout;
      BYTE6(xmmword_140C204B0) = 0;
      goto LABEL_7;
    }
  }
  else
  {
    BYTE5(xmmword_140C204B0) = 0;
    LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
    LODWORD(v6) = LockConsoleTimeoutUnsafe;
    if ( LockConsoleTimeoutUnsafe && BYTE4(xmmword_140C204B0) )
    {
      BYTE6(xmmword_140C204B0) = 1;
LABEL_7:
      HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
      BYTE1(qword_140C20410) = 1;
      PopUpdateTimeouts(PopConsoleContext, (unsigned int *)&v6, 0LL);
    }
  }
  PopReleaseAdaptiveLock();
  return 0LL;
}
