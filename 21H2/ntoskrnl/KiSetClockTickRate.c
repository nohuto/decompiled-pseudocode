/*
 * XREFs of KiSetClockTickRate @ 0x140211120
 * Callers:
 *     KiSetClockIntervalToMinimumRequested @ 0x140211054 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     KiEventClockStateChange @ 0x1402116E8 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x14021176C (KiSetPendingTick.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiSetClockTickRate(unsigned int a1, char a2)
{
  unsigned __int32 v2; // edi
  __int64 v5; // rcx
  int v6; // eax
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER *v8; // rbx
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v2 = KiClockState;
  v11 = 0LL;
  v12 = a1;
  KiLastRequestedTimeIncrement = a1;
  if ( a2 )
  {
    ((void (__fastcall *)(__int64, _QWORD, __int64 *))off_140C00890[0])(1LL, a1, &v11);
    v6 = 1;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_140C00890[0])(0LL, a1, &v11);
    v6 = 0;
  }
  LOBYTE(v5) = 1;
  KiClockOwnerOneShotRequestState = v6;
  KiSetPendingTick(v5);
  if ( v2 == 2 )
    v2 = _InterlockedExchange(&KiClockState, 0);
  KiEventClockStateChange(0LL, v2, &v11, &v12);
  KeTimeIncrement = v11;
  v7.QuadPart = MEMORY[0xFFFFF78000000008];
  KiClockTimerNextTickTime = MEMORY[0xFFFFF78000000008] + (unsigned int)v11;
  if ( (unsigned int)v11 < dword_140C31BB4 )
    dword_140C31BB4 = v11;
  if ( (unsigned int)v11 > dword_140C31BB0 )
    dword_140C31BB0 = v11;
  if ( a1 < dword_140C31BBC )
    dword_140C31BBC = a1;
  if ( a1 > dword_140C31BB8 )
    dword_140C31BB8 = a1;
  v8 = (LARGE_INTEGER *)((char *)&KiClockIncrementTrace + 32 * (unsigned int)KiClockIncrementTraceCount);
  KiClockIncrementTraceCount = ((_BYTE)KiClockIncrementTraceCount + 1) & 0xF;
  v9 = KiLastRequestedTimeIncrement;
  v8->LowPart = v11;
  v8->HighPart = v9;
  v8[1] = v7;
  v8[2] = KeQueryPerformanceCounter(0LL);
  result = (unsigned int)KeTimeIncrement;
  LOBYTE(v8[3].LowPart) = a2;
  return result;
}
