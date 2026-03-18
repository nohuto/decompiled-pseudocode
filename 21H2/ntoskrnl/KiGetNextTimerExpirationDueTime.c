/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x14030A3C0
 * Callers:
 *     PpmIdlePrepare @ 0x1403086B0 (PpmIdlePrepare.c)
 *     KePrepareClockTimerForIdle @ 0x140353FB0 (KePrepareClockTimerForIdle.c)
 *     PpmIdleSelectStates @ 0x1403A1620 (PpmIdleSelectStates.c)
 *     KeEstimateClockTickDuration @ 0x14056C810 (KeEstimateClockTickDuration.c)
 * Callees:
 *     KiFindNextTimerDueTime @ 0x14030A6F0 (KiFindNextTimerDueTime.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14063DA44 (ExGetNextWakeTimeForDeepSleep.c)
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
  unsigned __int64 v12; // rsi
  __int64 v13; // r14
  int v14; // r12d
  __int64 NextTimerDueTime; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 NextWakeTimeForDeepSleep; // rdx
  unsigned __int64 v18; // r9
  int *result; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned __int64 v22; // rcx
  char v23; // al
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // [rsp+20h] [rbp-48h] BYREF

  v7 = 0LL;
  v8 = -1LL;
  v26 = -1LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v14 = 1;
    goto LABEL_12;
  }
  if ( PoSkipTickMode == 2 && !KiSerializeTimerExpiration && !*(_BYTE *)(a1 + 33) )
  {
    v14 = 2;
    goto LABEL_12;
  }
  v12 = -1LL;
  v13 = 4LL;
  v14 = 4;
  if ( a4 )
  {
    NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep();
    v26 = NextWakeTimeForDeepSleep;
  }
  else
  {
    NextTimerDueTime = KiFindNextTimerDueTime(a1, a3, a2, &v26);
    NextWakeTimeForDeepSleep = v26;
    v12 = NextTimerDueTime;
  }
  v18 = 0x140000000uLL;
  if ( !KiGroupSchedulingEnabled )
    goto LABEL_6;
  if ( a2 )
  {
    if ( KiGroupSchedulingOverQuotaMask[0] )
    {
      while ( !qword_140C0B698[(unsigned __int16)v7] )
      {
        LOWORD(v7) = v7 + 1;
        if ( (unsigned __int16)v7 >= KiGroupSchedulingOverQuotaMask[0] )
          goto LABEL_6;
      }
      goto LABEL_60;
    }
  }
  else
  {
    v21 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
    v16 = v21 >> 6;
    if ( (unsigned int)v16 < KiGroupSchedulingOverQuotaMask[0]
      && (((unsigned __int64)qword_140C0B698[v16] >> (v21 & 0x3F)) & 1) != 0 )
    {
LABEL_60:
      if ( KiGenerationEndTick * (unsigned __int64)(unsigned int)KeMaximumIncrement < NextWakeTimeForDeepSleep )
      {
        NextWakeTimeForDeepSleep = KiGenerationEndTick * (unsigned int)KeMaximumIncrement;
        v26 = NextWakeTimeForDeepSleep;
        v14 = 5;
      }
    }
  }
LABEL_6:
  if ( !*(_BYTE *)(a1 + 33) )
    goto LABEL_7;
  v16 = -1LL;
  if ( !a4 )
    v13 = 2LL;
  while ( 1 )
  {
    v22 = qword_140C2B8D0[3 * v13];
    if ( v13 == 2 )
    {
      if ( v22 < v8 )
        v8 = qword_140C2B8D0[6];
      goto LABEL_35;
    }
    if ( v22 < v16 )
    {
      v16 = qword_140C2B8D0[3 * v13];
      if ( v13 == 4 )
        break;
    }
LABEL_35:
    ++v13;
    v23 = 0;
    if ( v13 > 4 )
      goto LABEL_36;
  }
  v23 = 1;
LABEL_36:
  if ( v8 < v12 )
  {
    v12 = v8;
    v14 = 6;
  }
  NextWakeTimeForDeepSleep = v26;
  if ( v16 < v26 )
  {
    NextWakeTimeForDeepSleep = v16;
    v26 = v16;
    if ( v16 < v12 )
    {
      v14 = 6;
      if ( v23 )
        v14 = 7;
    }
  }
LABEL_7:
  if ( !KiGlobalTimerResolutionRequests )
  {
    NextWakeTimeForDeepSleep = v26;
    v16 = (unsigned int)KeNonHrTimeIncrement
        - (unsigned __int64)(unsigned int)(KeMinimumIncrement - 1)
        + KiLastNonHrTimerExpiration;
    if ( KePseudoHrTimeIncrement < (unsigned int)KeNonHrTimeIncrement && v26 < v16 )
    {
      v18 = v26 + (unsigned int)KeNonHrTimeIncrement;
      NextWakeTimeForDeepSleep = (unsigned int)KePseudoHrTimeIncrement + a3;
      if ( NextWakeTimeForDeepSleep < v16 )
      {
        v20 = (unsigned int)KePseudoHrTimeIncrement + a3;
        do
        {
          v20 += (unsigned int)KePseudoHrTimeIncrement;
          if ( v20 > v18 )
            break;
          NextWakeTimeForDeepSleep = v20;
        }
        while ( v20 < v16 );
      }
    }
  }
  v7 = v12;
  if ( v12 >= NextWakeTimeForDeepSleep )
    v7 = NextWakeTimeForDeepSleep;
  if ( a2 )
  {
    if ( KiClockOwnerOneShotRequest && KiClockOwnerOneShotRequest < v7 )
    {
      v7 = KiClockOwnerOneShotRequest;
      v14 = 6;
    }
    if ( !(_BYTE)KdDebuggerNotPresent && a3 < v7 )
    {
      if ( (_BYTE)KdDebuggerEnabled )
      {
        v24 = (unsigned int)(10000 * KiDebugPollInterval);
        if ( v7 - a3 > v24 )
        {
          v7 = v24 + a3;
          v14 = 8;
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v25 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, unsigned __int64, unsigned __int64))off_140C01FB8[0])(
            a5,
            NextWakeTimeForDeepSleep,
            v16,
            v18);
    if ( v25 )
    {
      if ( v7 > v25 )
      {
        v7 = v25;
        v14 = 9;
        if ( a3 > v25 )
          v7 = a3;
      }
    }
  }
LABEL_12:
  *a6 = v7;
  result = a7;
  *a7 = v14;
  return result;
}
