/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x140570F80
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     PopFxPauseDeviceAccounting @ 0x140566318 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x140567200 (PopFxResumeDeviceAccounting.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1405723D0 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1405724EC (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x1408EB268 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorNotifyResiliencyReached @ 0x1408EB350 (PopPowerAggregatorNotifyResiliencyReached.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EC91C (PopDisarmIdlePhaseWatchdog.c)
 *     PopIdleCsStateChanged @ 0x1408F2244 (PopIdleCsStateChanged.c)
 */

__int64 __fastcall PdcPoCurrentPdcPhase(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = 0;
  PopBsdCurrentCsPhase = a1;
  LOBYTE(a4) = a2;
  v5 = (unsigned int)(a1 - 1);
  if ( (_DWORD)v5 )
  {
    v6 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = (unsigned int)(v6 - 4);
      if ( (_DWORD)v7 )
      {
        v8 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v8 )
        {
          if ( (_DWORD)v8 == 1 )
            PopPowerAggregatorNotifyResiliencyReached(v8, a2, a3, a4);
        }
        else if ( (_BYTE)a2 )
        {
          qword_140C4FD48 = KeQueryPerformanceCounter(0LL).QuadPart;
          PopDeepSleepResiliencyPhaseAccountingBegin(3LL, 0LL);
          if ( (PopFxDeviceAccountingLevel & 2) != 0 )
            PopFxResumeDeviceAccounting();
        }
        else
        {
          qword_140C4FD50 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C4FD48;
          if ( (PopFxDeviceAccountingLevel & 2) != 0 )
            PopFxPauseDeviceAccounting();
          PopDeepSleepResiliencyPhaseAccountingEnd(3LL, 0LL);
        }
      }
      else
      {
        LODWORD(v7) = (unsigned __int8)a2;
        return (unsigned int)PopPowerAggregatorNotifyPdcSleepTransition(v7, (unsigned int)a3);
      }
    }
    else
    {
      LODWORD(v6) = (_BYTE)a2 != 0;
      PopIdleCsStateChanged(v6);
    }
  }
  else
  {
    PopDisarmIdlePhaseWatchdog(v5, a2, a3, a4);
  }
  return v4;
}
