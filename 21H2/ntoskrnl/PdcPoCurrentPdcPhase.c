/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x1405D6AC0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     PopFxPauseDeviceAccounting @ 0x1405CCECC (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1405CDBB4 (PopFxResumeDeviceAccounting.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1405D7930 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1405D7A4C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1407F287C (PopDisarmIdlePhaseWatchdog.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140995D54 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorNotifyResiliencyReached @ 0x140995E20 (PopPowerAggregatorNotifyResiliencyReached.c)
 *     PopIdleCsStateChanged @ 0x14099CFAC (PopIdleCsStateChanged.c)
 */

__int64 __fastcall PdcPoCurrentPdcPhase(int a1, unsigned __int8 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r8

  v4 = 0;
  PopBsdCurrentCsPhase = a1;
  v5 = a1 - 1;
  if ( v5 )
  {
    v6 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = (unsigned int)(v6 - 4);
      if ( (_DWORD)v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
            PopPowerAggregatorNotifyResiliencyReached();
        }
        else if ( a2 )
        {
          qword_140C54188 = KeQueryPerformanceCounter(0LL).QuadPart;
          PopDeepSleepResiliencyPhaseAccountingBegin(3LL, 0LL, v9);
          if ( (PopFxDeviceAccountingLevel & 2) != 0 )
            PopFxResumeDeviceAccounting();
        }
        else
        {
          qword_140C54190 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140C54188;
          if ( (PopFxDeviceAccountingLevel & 2) != 0 )
            PopFxPauseDeviceAccounting();
          PopDeepSleepResiliencyPhaseAccountingEnd(3LL, 0LL, v10);
        }
      }
      else
      {
        LODWORD(v7) = a2;
        return (unsigned int)PopPowerAggregatorNotifyPdcSleepTransition(v7, a3, a4);
      }
    }
    else
    {
      LODWORD(v6) = a2 != 0;
      PopIdleCsStateChanged(v6);
    }
  }
  else
  {
    PopDisarmIdlePhaseWatchdog();
  }
  return v4;
}
