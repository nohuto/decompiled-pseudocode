/*
 * XREFs of KePrepareClockTimerForIdle @ 0x140241D70
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiSetPendingTick @ 0x14024184C (KiSetPendingTick.c)
 *     KiEventClockStateChange @ 0x14024187C (KiEventClockStateChange.c)
 *     KiClockTimerOneShotReady @ 0x1402418BC (KiClockTimerOneShotReady.c)
 *     PoAllProcessorsDeepIdle @ 0x140241A80 (PoAllProcessorsDeepIdle.c)
 *     KeIsForceIdleEngaged @ 0x140242A38 (KeIsForceIdleEngaged.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140273390 (KiGetNextTimerExpirationDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x140278330 (RtlGetInterruptTimePrecise.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void __fastcall KePrepareClockTimerForIdle(unsigned __int8 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rdi
  struct _KPRCB *CurrentPrcb; // r14
  int v8; // ebx
  __int32 v9; // r13d
  int v10; // edx
  char v11; // r11
  __int64 v12; // r12
  unsigned __int64 v13; // r15
  LARGE_INTEGER InterruptTimePrecise; // r12
  unsigned __int64 v15; // r15
  bool v16; // cf
  bool v17; // r9
  __int64 *v18; // rcx
  __int64 v19; // rdx
  volatile signed __int32 *v20; // r8
  int v21; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-70h] BYREF
  __int64 v23; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v25[8]; // [rsp+60h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v27[2]; // [rsp+70h] [rbp-48h] BYREF

  v6 = a3;
  v23 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v24 = 0LL;
  if ( KiDynamicTickInitialized && !(_BYTE)KiDynamicTickDisableReason )
  {
    if ( a3 <= (unsigned int)KiLastRequestedTimeIncrement )
    {
      v8 = 2;
LABEL_5:
      v21 = v8;
      if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v27[1] = 1LL;
        v27[0] = &v21;
        EtwTraceKernelEvent((unsigned int)v27, 1, 1074790400, 3929, 1538);
      }
      return;
    }
    if ( a3 > KiMaxDynamicTickDuration )
    {
      ++dword_140C3156C;
      v6 = KiMaxDynamicTickDuration;
    }
    v9 = _InterlockedExchange(&KiClockState, 3);
    if ( !PoAllProcessorsDeepIdle() )
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
        (__int64)&v24,
        (__int64)v25);
      v13 = v24;
      if ( a4 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        goto LABEL_17;
      }
      if ( v24 <= v12 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
      {
        v8 = 2;
      }
      else
      {
        if ( a1 || KiClockTimerOneShotReady(v12) )
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
            v22 = v15;
            if ( a4 )
            {
              if ( !a1 )
              {
                v15 = v22;
                if ( v22 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
                {
                  v15 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                  v22 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                }
              }
            }
            ((void (__fastcall *)(__int64, unsigned __int64, __int64 *))off_140C00890[0])(1LL, v15, &v23);
            KiSetPendingTick(1);
            KiClockTimerOneShotStartTime = InterruptTimePrecise.QuadPart;
            KiEventClockStateChange(1, v9, &v23, (__int64 *)&v22);
            if ( a4 )
              KiClockLatencyMeasurementEnabled = 1;
            if ( (unsigned __int8)KeIsForceIdleEngaged() )
              KiForceIdleReset = 1;
            ++qword_140C31570;
            v9 = 1;
            v16 = v15 < qword_140C315A8;
            CurrentPrcb->ClockOwner = 0;
            if ( v16 )
              qword_140C315A8 = v15;
            if ( v15 > qword_140C315A0 )
              qword_140C315A0 = v15;
            if ( a1 )
              KiConsiderTimerRebasing = 1;
            v17 = KiHrTimerActiveCount > 0;
            if ( (_DWORD)KeNumberProcessors_0 )
            {
              v18 = KiProcessorBlock;
              v19 = (unsigned int)KeNumberProcessors_0;
              do
              {
                v20 = *(volatile signed __int32 **)(*v18 + 33976);
                if ( v20 && (KiVelocityFlags & 0x40) != 0 )
                {
                  if ( v17 )
                    _InterlockedOr(v20, 0x80000u);
                  else
                    _InterlockedAnd(v20, 0xFFF7FFFF);
                }
                ++v18;
                --v19;
              }
              while ( v19 );
            }
            KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v23;
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
