/*
 * XREFs of KiEventClockStateChange @ 0x140293778
 * Callers:
 *     KeClockInterruptNotify @ 0x140221640 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x140224BE0 (KeResumeClockTimerFromIdle.c)
 *     KiSetClockTickRate @ 0x1402931B0 (KiSetClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x140293310 (KePrepareClockTimerForIdle.c)
 *     KiResumeClockTimer @ 0x140383480 (KiResumeClockTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

__int64 __fastcall KiEventClockStateChange(int a1, char a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int128 v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+40h] [rbp-20h]
  __int128 *v7; // [rsp+48h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp-10h]
  int v9; // [rsp+54h] [rbp-Ch]

  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v6 = 0LL;
    v5 = 0LL;
    BYTE1(v5) = a2;
    LOBYTE(v5) = a1;
    if ( a1 >= 0 )
    {
      if ( a1 <= 1 )
      {
        *((_QWORD *)&v5 + 1) = *a3;
        v6 = *a4;
      }
      else if ( a1 == 2 )
      {
        *((_QWORD *)&v5 + 1) = KiClockTimerNextTickTime;
      }
    }
    v9 = 0;
    v7 = &v5;
    v8 = 24;
    return EtwTraceKernelEvent((unsigned int)&v7, 1, 1074790400, 3927, 1538);
  }
  return result;
}
