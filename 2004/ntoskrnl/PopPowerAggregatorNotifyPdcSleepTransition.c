/*
 * XREFs of PopPowerAggregatorNotifyPdcSleepTransition @ 0x1408EB268
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140570F80 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140763DD0 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1408F70B8 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyPdcSleepTransition(char a1, int a2)
{
  int v4; // ecx
  unsigned int v5; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21568 == 1 )
  {
    v5 = 0;
    if ( a1 )
    {
      BYTE8(xmmword_140C21578) = 0;
      HIDWORD(xmmword_140C21578) = 0;
      goto LABEL_13;
    }
    BYTE8(xmmword_140C21578) = 1;
    v5 = 259;
    HIDWORD(xmmword_140C21578) = a2;
  }
  else
  {
    if ( (_DWORD)xmmword_140C21568 != 4 )
    {
      v5 = -1073741811;
      goto LABEL_13;
    }
    if ( a1 )
    {
      BYTE8(xmmword_140C21578) = 1;
      HIDWORD(xmmword_140C21578) = a2;
    }
    else
    {
      BYTE8(xmmword_140C21578) = 0;
      HIDWORD(xmmword_140C21578) = 0;
    }
    v5 = a1 != 0 ? 0x103 : 0;
  }
  if ( v5 == 259 )
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
LABEL_13:
  LOBYTE(v4) = a1;
  PopPowerAggregatorDiagTracePdcSleepTransition(
    v4,
    a2,
    (unsigned int)&xmmword_140C21538,
    (unsigned int)&xmmword_140C21568,
    v5);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return v5;
}
