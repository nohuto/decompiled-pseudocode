/*
 * XREFs of KePrepareClockTimerForIdle @ 0x1402DFF00
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140281CF0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiEventClockStateChange @ 0x140266CF4 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x140266D78 (KiSetPendingTick.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140284DB0 (KiGetNextTimerExpirationDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x140288C20 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x1402E0E68 (KeIsForceIdleEngaged.c)
 *     PoAllProcessorsDeepIdle @ 0x140311AF4 (PoAllProcessorsDeepIdle.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     KiClockTimerOneShotReady @ 0x14031BB1C (KiClockTimerOneShotReady.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall KePrepareClockTimerForIdle(char a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v6; // rdi
  struct _KPRCB *CurrentPrcb; // r14
  int v8; // ebx
  __int32 v9; // r13d
  unsigned __int8 v10; // r11
  __int64 v11; // r12
  unsigned __int64 v12; // r15
  LARGE_INTEGER InterruptTimePrecise; // r12
  unsigned __int64 v14; // r15
  bool v15; // cf
  bool v16; // r9
  __int64 *v17; // rcx
  __int64 v18; // rdx
  volatile signed __int32 *v19; // r8
  int v20; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-70h] BYREF
  __int64 v22; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-60h] BYREF
  int v24; // [rsp+60h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-48h] BYREF

  v6 = a3;
  v22 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v23 = 0LL;
  if ( KiDynamicTickInitialized && !(_BYTE)KiDynamicTickDisableReason )
  {
    if ( a3 <= (unsigned int)KiLastRequestedTimeIncrement )
    {
      v8 = 2;
LABEL_5:
      v20 = v8;
      if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v26[1] = 1LL;
        v26[0] = &v20;
        EtwTraceKernelEvent((unsigned int)v26, 1, 1074790400, 3929, 1538);
      }
      return;
    }
    if ( a3 > KiMaxDynamicTickDuration )
    {
      ++dword_140C3142C;
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
      v11 = MEMORY[0xFFFFF78000000008];
      KiGetNextTimerExpirationDueTime((__int64)CurrentPrcb, 1u, MEMORY[0xFFFFF78000000008], a1, v10, &v23, &v24);
      v12 = v23;
      if ( a4 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        goto LABEL_17;
      }
      if ( v23 <= v11 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
      {
        v8 = 2;
      }
      else
      {
        if ( a1 || (unsigned __int8)KiClockTimerOneShotReady(v11) )
        {
          InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
          if ( v12 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
          {
LABEL_42:
            v8 = 4;
            goto LABEL_40;
          }
LABEL_17:
          if ( v12 > InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiMinDynamicTickDuration )
          {
            v14 = v12 - InterruptTimePrecise.QuadPart;
            if ( v14 > v6 )
              v14 = v6;
            v21 = v14;
            if ( a4 )
            {
              if ( !a1 )
              {
                v14 = v21;
                if ( v21 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
                {
                  v14 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                  v21 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                }
              }
            }
            ((void (__fastcall *)(__int64, unsigned __int64, __int64 *))off_140C00890[0])(1LL, v14, &v22);
            KiSetPendingTick(1);
            KiClockTimerOneShotStartTime = InterruptTimePrecise.QuadPart;
            KiEventClockStateChange(1, v9, &v22, (__int64 *)&v21);
            if ( a4 )
              KiClockLatencyMeasurementEnabled = 1;
            if ( (unsigned __int8)KeIsForceIdleEngaged() )
              KiForceIdleReset = 1;
            ++qword_140C31430;
            v9 = 1;
            v15 = v14 < qword_140C31468;
            CurrentPrcb->ClockOwner = 0;
            if ( v15 )
              qword_140C31468 = v14;
            if ( v14 > qword_140C31460 )
              qword_140C31460 = v14;
            if ( a1 )
              KiConsiderTimerRebasing = 1;
            v16 = KiHrTimerActiveCount > 0;
            if ( (_DWORD)KeNumberProcessors_0 )
            {
              v17 = KiProcessorBlock;
              v18 = (unsigned int)KeNumberProcessors_0;
              do
              {
                v19 = *(volatile signed __int32 **)(*v17 + 33976);
                if ( v19 && (KiVelocityFlags & 0x40) != 0 )
                {
                  if ( v16 )
                    _InterlockedOr(v19, 0x80000u);
                  else
                    _InterlockedAnd(v19, 0xFFF7FFFF);
                }
                ++v17;
                --v18;
              }
              while ( v18 );
            }
            KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v22;
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
