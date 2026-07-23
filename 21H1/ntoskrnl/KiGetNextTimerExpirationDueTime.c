/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x140273390
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140241D70 (KePrepareClockTimerForIdle.c)
 *     PpmIdlePrepare @ 0x140272D80 (PpmIdlePrepare.c)
 *     PpmIdleSelectStates @ 0x140392080 (PpmIdleSelectStates.c)
 *     KeEstimateClockTickDuration @ 0x14050E0E0 (KeEstimateClockTickDuration.c)
 * Callees:
 *     KiFindNextTimerDueTime @ 0x140273670 (KiFindNextTimerDueTime.c)
 *     KeIsEmptyAffinityEx @ 0x140276350 (KeIsEmptyAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x1405B0424 (ExGetNextWakeTimeForDeepSleep.c)
 */

int *__fastcall KiGetNextTimerExpirationDueTime(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int64 *a6,
        int *a7)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int8 v10; // r14
  __int64 v12; // r15
  int v13; // r12d
  __int64 NextTimerDueTime; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 NextWakeTimeForDeepSleep; // rsi
  unsigned __int64 v18; // rbp
  int *result; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 v26; // [rsp+68h] [rbp+10h]
  unsigned __int64 v27; // [rsp+70h] [rbp+18h]

  v27 = a3;
  v26 = a2;
  v7 = 0LL;
  v8 = -1LL;
  v10 = a2;
  v25 = -1LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v13 = 1;
    goto LABEL_14;
  }
  if ( PoSkipTickMode == 2 && !KiSerializeTimerExpiration && !*(_BYTE *)(a1 + 33) )
  {
    v13 = 2;
    goto LABEL_14;
  }
  v7 = -1LL;
  v12 = 4LL;
  v13 = 4;
  if ( a4 )
  {
    NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep();
    v25 = NextWakeTimeForDeepSleep;
  }
  else
  {
    NextTimerDueTime = KiFindNextTimerDueTime(a1, a3, a2, &v25);
    NextWakeTimeForDeepSleep = v25;
    v7 = NextTimerDueTime;
  }
  if ( KiGroupSchedulingEnabled )
  {
    if ( v10 )
    {
      if ( (unsigned int)KeIsEmptyAffinityEx(&KiGroupSchedulingOverQuotaMask) )
        goto LABEL_7;
    }
    else
    {
      v15 = (unsigned __int64)&KiGroupSchedulingOverQuotaMask;
      v20 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      if ( ((*((_QWORD *)&KiGroupSchedulingOverQuotaMask + (v20 >> 6) + 1) >> (v20 & 0x3F)) & 1) == 0 )
        goto LABEL_7;
    }
    if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < NextWakeTimeForDeepSleep )
    {
      NextWakeTimeForDeepSleep = KiGenerationEndTick * KeMaximumIncrement;
      v25 = NextWakeTimeForDeepSleep;
      v13 = 5;
    }
  }
LABEL_7:
  if ( *(_BYTE *)(a1 + 33) )
  {
    v15 = -1LL;
    if ( !a4 )
      v12 = 2LL;
    LOBYTE(v16) = 0;
    do
    {
      v21 = qword_140C31CB0[3 * v12];
      if ( v12 == 2 )
      {
        if ( v21 < v8 )
          v8 = qword_140C31CB0[6];
      }
      else if ( v21 < v15 )
      {
        v15 = qword_140C31CB0[3 * v12];
        if ( v12 == 4 )
          LOBYTE(v16) = 1;
      }
      ++v12;
    }
    while ( v12 <= 4 );
    v10 = v26;
    if ( v8 < v7 )
    {
      v7 = v8;
      v13 = 6;
    }
    NextWakeTimeForDeepSleep = v25;
    if ( v15 < v25 )
    {
      v25 = v15;
      NextWakeTimeForDeepSleep = v15;
      if ( v15 < v7 )
      {
        v13 = 6;
        if ( (_BYTE)v16 )
          v13 = 7;
      }
    }
  }
  v18 = v27;
  if ( (KiVelocityFlags & 0x2000) != 0 )
  {
    NextWakeTimeForDeepSleep = v25;
    v16 = (unsigned int)KeNonHrTimeIncrement
        - (unsigned __int64)(unsigned int)(KeMinimumIncrement - 1)
        + KiLastNonHrTimerExpiration;
    if ( KePseudoHrTimeIncrement < (unsigned int)KeNonHrTimeIncrement && v25 < v16 )
    {
      v15 = v25 + (unsigned int)KeNonHrTimeIncrement;
      NextWakeTimeForDeepSleep = (unsigned int)KePseudoHrTimeIncrement + v27;
      if ( NextWakeTimeForDeepSleep < v16 )
      {
        v23 = (unsigned int)KePseudoHrTimeIncrement + v27;
        do
        {
          v23 += (unsigned int)KePseudoHrTimeIncrement;
          if ( v23 > v15 )
            break;
          NextWakeTimeForDeepSleep = v23;
        }
        while ( v23 < v16 );
      }
    }
  }
  if ( v7 >= NextWakeTimeForDeepSleep )
    v7 = NextWakeTimeForDeepSleep;
  if ( v10 )
  {
    if ( KiClockOwnerOneShotRequest && KiClockOwnerOneShotRequest < v7 )
    {
      v7 = KiClockOwnerOneShotRequest;
      v13 = 6;
    }
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      if ( (_BYTE)KdDebuggerEnabled )
      {
        if ( v27 < v7 )
        {
          v24 = (unsigned int)(10000 * KiDebugPollInterval);
          if ( v7 - v27 > v24 )
          {
            v7 = v24 + v27;
            v13 = 8;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v22 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, unsigned __int64))off_140C00968[0])(a5, v15, v16);
    if ( v22 )
    {
      if ( v7 > v22 )
      {
        v7 = v22;
        v13 = 9;
        if ( v18 > v22 )
          v7 = v18;
      }
    }
  }
LABEL_14:
  *a6 = v7;
  result = a7;
  *a7 = v13;
  return result;
}
