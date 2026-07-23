/*
 * XREFs of KePrepareClockTimerForIdle @ 0x140211280
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeIsForceIdleEngaged @ 0x140211564 (KeIsForceIdleEngaged.c)
 *     PoAllProcessorsDeepIdle @ 0x140211588 (PoAllProcessorsDeepIdle.c)
 *     KiClockTimerOneShotReady @ 0x140211674 (KiClockTimerOneShotReady.c)
 *     KiEventClockStateChange @ 0x1402116E8 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x14021176C (KiSetPendingTick.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1402C9EA0 (KiGetNextTimerExpirationDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x1402CF060 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall KePrepareClockTimerForIdle(unsigned __int8 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rdi
  struct _KPRCB *CurrentPrcb; // r14
  int v8; // ebx
  unsigned __int32 v9; // r13d
  int v10; // edx
  char v11; // r11
  __int64 v12; // r12
  unsigned __int64 v13; // r15
  LARGE_INTEGER InterruptTimePrecise; // r12
  unsigned __int64 v15; // r15
  __int64 v16; // rcx
  bool v17; // cf
  bool v18; // r9
  __int64 *v19; // rcx
  __int64 v20; // rdx
  volatile signed __int32 *v21; // r8
  int v22; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-70h] BYREF
  __int64 v24; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v26[8]; // [rsp+60h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v28[2]; // [rsp+70h] [rbp-48h] BYREF

  v6 = a3;
  v24 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v25 = 0LL;
  if ( KiDynamicTickInitialized && !(_BYTE)KiDynamicTickDisableReason )
  {
    if ( a3 <= (unsigned int)KiLastRequestedTimeIncrement )
    {
      v8 = 2;
LABEL_5:
      v22 = v8;
      if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v28[1] = 1LL;
        v28[0] = &v22;
        EtwTraceKernelEvent((unsigned int)v28, 1, 1074790400, 3929, 1538);
      }
      return;
    }
    if ( a3 > KiMaxDynamicTickDuration )
    {
      ++dword_140C31B8C;
      v6 = KiMaxDynamicTickDuration;
    }
    v9 = _InterlockedExchange(&KiClockState, 3);
    if ( !(unsigned __int8)PoAllProcessorsDeepIdle() )
    {
      v8 = 1;
      goto LABEL_40;
    }
    if ( !a1 && (unsigned __int8)KeIsForceIdleEngaged() )
    {
      v8 = 6;
    }
    else
    {
      LOBYTE(v10) = 1;
      v12 = MEMORY[0xFFFFF78000000008];
      KiGetNextTimerExpirationDueTime(
        (_DWORD)CurrentPrcb,
        v10,
        MEMORY[0xFFFFF78000000008],
        a1,
        v11,
        (__int64)&v25,
        (__int64)v26);
      v13 = v25;
      if ( a4 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        goto LABEL_17;
      }
      if ( v25 <= v12 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
      {
        v8 = 2;
      }
      else
      {
        if ( a1 || (unsigned __int8)KiClockTimerOneShotReady(v12) )
        {
          InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
          if ( v13 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
          {
LABEL_42:
            v8 = 4;
            goto LABEL_40;
          }
LABEL_17:
          if ( v13 > InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiMinDynamicTickDuration )
          {
            v15 = v13 - InterruptTimePrecise.QuadPart;
            if ( v15 > v6 )
              v15 = v6;
            v23 = v15;
            if ( a4 )
            {
              if ( !a1 )
              {
                v15 = v23;
                if ( v23 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
                {
                  v15 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                  v23 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                }
              }
            }
            ((void (__fastcall *)(__int64, unsigned __int64, __int64 *))off_140C00890[0])(1LL, v15, &v24);
            LOBYTE(v16) = 1;
            KiSetPendingTick(v16);
            KiClockTimerOneShotStartTime = InterruptTimePrecise.QuadPart;
            KiEventClockStateChange(1LL, v9, &v24, &v23);
            if ( a4 )
              KiClockLatencyMeasurementEnabled = 1;
            if ( (unsigned __int8)KeIsForceIdleEngaged() )
              KiForceIdleReset = 1;
            ++qword_140C31B90;
            v9 = 1;
            v17 = v15 < qword_140C31BC8;
            CurrentPrcb->ClockOwner = 0;
            if ( v17 )
              qword_140C31BC8 = v15;
            if ( v15 > qword_140C31BC0 )
              qword_140C31BC0 = v15;
            if ( a1 )
              KiConsiderTimerRebasing = 1;
            v18 = KiHrTimerActiveCount > 0;
            if ( (_DWORD)KeNumberProcessors_0 )
            {
              v19 = KiProcessorBlock;
              v20 = (unsigned int)KeNumberProcessors_0;
              do
              {
                v21 = *(volatile signed __int32 **)(*v19 + 33976);
                if ( v21 && (KiVelocityFlags & 0x40) != 0 )
                {
                  if ( v18 )
                    _InterlockedOr(v21, 0x80000u);
                  else
                    _InterlockedAnd(v21, 0xFFF7FFFF);
                }
                ++v19;
                --v20;
              }
              while ( v20 );
            }
            KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v24;
            goto LABEL_36;
          }
          goto LABEL_42;
        }
        v8 = 3;
      }
    }
LABEL_40:
    if ( v9 == 4 )
    {
LABEL_37:
      if ( !v8 )
        return;
      goto LABEL_5;
    }
LABEL_36:
    _InterlockedExchange(&KiClockState, v9);
    goto LABEL_37;
  }
}
