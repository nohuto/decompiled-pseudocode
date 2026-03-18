/*
 * XREFs of KiSetClockTickRate @ 0x1402F3B9C
 * Callers:
 *     KiSetClockIntervalToMinimumRequested @ 0x1402F3AD0 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     KiSetPendingTick @ 0x14027E5E4 (KiSetPendingTick.c)
 *     KiEventClockStateChange @ 0x14027E614 (KiEventClockStateChange.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiSetClockTickRate(unsigned int a1, char a2)
{
  int v2; // edi
  int v5; // eax
  LARGE_INTEGER v6; // rdx
  LARGE_INTEGER *v7; // rbx
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v2 = KiClockState;
  v10 = 0LL;
  v11 = a1;
  KiLastRequestedTimeIncrement = a1;
  if ( a2 )
  {
    ((void (__fastcall *)(__int64, _QWORD, __int64 *))off_140C00890[0])(1LL, a1, &v10);
    v5 = 1;
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_140C00890[0])(0LL, a1, &v10);
    v5 = 0;
  }
  KiClockOwnerOneShotRequestState = v5;
  KiSetPendingTick(1);
  if ( v2 == 2 )
    LOBYTE(v2) = _InterlockedExchange(&KiClockState, 0);
  KiEventClockStateChange(0, v2, &v10, &v11);
  KeTimeIncrement = v10;
  v6.QuadPart = MEMORY[0xFFFFF78000000008];
  KiClockTimerNextTickTime = MEMORY[0xFFFFF78000000008] + (unsigned int)v10;
  if ( (unsigned int)v10 < dword_140C31374 )
    dword_140C31374 = v10;
  if ( (unsigned int)v10 > dword_140C31370 )
    dword_140C31370 = v10;
  if ( a1 < dword_140C3137C )
    dword_140C3137C = a1;
  if ( a1 > dword_140C31378 )
    dword_140C31378 = a1;
  v7 = (LARGE_INTEGER *)((char *)&KiClockIncrementTrace + 32 * (unsigned int)KiClockIncrementTraceCount);
  KiClockIncrementTraceCount = ((_BYTE)KiClockIncrementTraceCount + 1) & 0xF;
  v8 = KiLastRequestedTimeIncrement;
  v7->LowPart = v10;
  v7->HighPart = v8;
  v7[1] = v6;
  v7[2] = KeQueryPerformanceCounter(0LL);
  result = (unsigned int)KeTimeIncrement;
  LOBYTE(v7[3].LowPart) = a2;
  return result;
}
