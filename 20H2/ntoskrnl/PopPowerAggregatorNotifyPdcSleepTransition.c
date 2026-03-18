/*
 * XREFs of PopPowerAggregatorNotifyPdcSleepTransition @ 0x1408F0E78
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405749B0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1407723E0 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1408FCCC8 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyPdcSleepTransition(char a1, int a2)
{
  int v4; // ecx
  unsigned int v5; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21688 == 1 )
  {
    v5 = 0;
    if ( a1 )
    {
      BYTE8(xmmword_140C21698) = 0;
      HIDWORD(xmmword_140C21698) = 0;
      goto LABEL_13;
    }
    BYTE8(xmmword_140C21698) = 1;
    v5 = 259;
    HIDWORD(xmmword_140C21698) = a2;
  }
  else
  {
    if ( (_DWORD)xmmword_140C21688 != 4 )
    {
      v5 = -1073741811;
      goto LABEL_13;
    }
    if ( a1 )
    {
      BYTE8(xmmword_140C21698) = 1;
      HIDWORD(xmmword_140C21698) = a2;
    }
    else
    {
      BYTE8(xmmword_140C21698) = 0;
      HIDWORD(xmmword_140C21698) = 0;
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
    (unsigned int)&xmmword_140C21658,
    (unsigned int)&xmmword_140C21688,
    v5);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return v5;
}
