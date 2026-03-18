/*
 * XREFs of KiSetClockInterval @ 0x14022F2FC
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x14022F150 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14045B5B2 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x14022F440 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14022F4BC (KiSetClockIntervalToMinimumRequested.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14056CFD8 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetNextClockTickDueTime @ 0x14056D050 (KiSetNextClockTickDueTime.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned int ClockTickDueTime; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v13; // rcx

  v3 = a3;
  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, a3);
  *(_DWORD *)(v3 + 28) = a1;
  v6 = KiClockIntervalRequests;
  if ( (qword_140CF6018 & 1) != 0 && KiClockIntervalRequests )
    v6 = (unsigned __int64)&KiClockIntervalRequests ^ KiClockIntervalRequests;
  LOBYTE(a3) = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a1 >= *(_DWORD *)(v6 + 28) )
      {
        v7 = *(_QWORD *)(v6 + 8);
        if ( (qword_140CF6018 & 1) != 0 )
        {
          if ( !v7 )
            goto LABEL_17;
          v7 ^= v6;
        }
        if ( !v7 )
        {
LABEL_17:
          LOBYTE(a3) = 1;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)v6;
        if ( (qword_140CF6018 & 1) != 0 )
        {
          if ( !v7 )
            break;
          v7 ^= v6;
        }
        if ( !v7 )
          break;
      }
      v6 = v7;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, v6, a3, v3);
  *(_BYTE *)(v3 + 24) = 1;
  if ( a2 )
    KePseudoHrTimeIncrement = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    KiSetClockTimerKTimerDeadlines(KeGetCurrentPrcb(), 0LL);
    LOBYTE(v13) = 1;
    ClockTickDueTime = KiSetNextClockTickDueTime(v13);
  }
  else
  {
    ClockTickDueTime = KiSetClockIntervalToMinimumRequested();
  }
  v10 = *(unsigned int *)(v3 + 32);
  v11 = ClockTickDueTime;
  if ( (_DWORD)v10 )
  {
    LOBYTE(v9) = 1;
    PoTraceSystemTimerResolutionKernel(a1, v10, v9);
  }
  return v11;
}
