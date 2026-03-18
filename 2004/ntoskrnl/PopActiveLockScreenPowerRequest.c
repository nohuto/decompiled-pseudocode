/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x1408F1B40
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405CFA78 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopReleaseAdaptiveLock @ 0x140711F10 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140712000 (PopAcquireAdaptiveLock.c)
 *     PopUpdateTimeouts @ 0x14071217C (PopUpdateTimeouts.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  PopAcquireAdaptiveLock(0);
  if ( a3 )
  {
    BYTE5(xmmword_140C20350) = 1;
    if ( BYTE6(xmmword_140C20350) )
    {
      LockConsoleTimeoutUnsafe = PopDisplayTimeout;
      LODWORD(v6) = PopDisplayTimeout;
      BYTE6(xmmword_140C20350) = 0;
      goto LABEL_7;
    }
  }
  else
  {
    BYTE5(xmmword_140C20350) = 0;
    LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
    LODWORD(v6) = LockConsoleTimeoutUnsafe;
    if ( LockConsoleTimeoutUnsafe && BYTE4(xmmword_140C20350) )
    {
      BYTE6(xmmword_140C20350) = 1;
LABEL_7:
      HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
      BYTE1(qword_140C20390) = 1;
      PopUpdateTimeouts(PopConsoleContext, (unsigned int *)&v6, 0LL);
    }
  }
  PopReleaseAdaptiveLock();
  return 0LL;
}
