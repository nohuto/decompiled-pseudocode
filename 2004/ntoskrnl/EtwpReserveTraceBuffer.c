/*
 * XREFs of EtwpReserveTraceBuffer @ 0x14029AB70
 * Callers:
 *     EtwpTraceMessageVa @ 0x14026CF20 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A68BC (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1403A6BB0 (EtwpLogContextSwapEvent.c)
 *     EtwTraceEvent @ 0x1405A0BD0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A1078 (EtwTraceRaw.c)
 *     EtwpReserveWithPebsIndex @ 0x1405A3F64 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x1405A3FF8 (EtwpReserveWithPmcCounters.c)
 *     EtwpWriteUserEvent @ 0x1406246E0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpSwitchBuffer @ 0x14027E018 (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x14027E450 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14027E49C (EtwpLockBufferList.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x1402F9590 (RtlGetSystemTimePrecise.c)
 *     EtwpUpdateEventsLostCount @ 0x14036A768 (EtwpUpdateEventsLostCount.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     EtwpGetTimeStampAndQpcDelta @ 0x1405A62F8 (EtwpGetTimeStampAndQpcDelta.c)
 */

unsigned __int64 __fastcall EtwpReserveTraceBuffer(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        LARGE_INTEGER *a4,
        __int16 a5)
{
  unsigned int v8; // r9d
  __int64 v9; // r8
  int v10; // r12d
  _QWORD *v11; // rsi
  unsigned __int64 *v12; // r14
  unsigned __int64 v13; // rbx
  signed __int64 v14; // rax
  int v15; // eax
  unsigned __int32 v16; // ebp
  unsigned __int64 v17; // rax
  LARGE_INTEGER SystemTimePrecise; // rax
  unsigned __int32 v19; // eax
  signed __int64 v20; // rax
  signed __int64 i; // rcx
  signed __int64 v22; // rtt
  unsigned __int64 result; // rax
  int v24; // eax
  int v25; // ebx
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  signed __int64 v28; // r11
  unsigned __int32 v29; // eax
  bool v30; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v32; // r8
  signed __int64 v33; // r9
  signed __int64 v34; // rcx
  unsigned int v35; // [rsp+30h] [rbp-58h]
  unsigned int v36; // [rsp+34h] [rbp-54h]
  unsigned int Number; // [rsp+38h] [rbp-50h]
  signed __int64 v38; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER v39; // [rsp+48h] [rbp-40h] BYREF
  LARGE_INTEGER v40; // [rsp+50h] [rbp-38h] BYREF
  __int64 v41; // [rsp+58h] [rbp-30h]
  unsigned __int8 v42; // [rsp+90h] [rbp+8h] BYREF

  if ( (a1[4] & 0x80000000) != 0 || (unsigned int)a2 > a1[2] )
  {
LABEL_40:
    EtwpUpdateEventsLostCount(a1);
    return 0LL;
  }
  v8 = a1[1];
  v9 = *a1;
  v10 = (a2 + 7) & 0xFFFFFFF8;
  v35 = v8;
  v36 = *a1;
  while ( 1 )
  {
    Number = KeGetCurrentPrcb()->Number;
    v11 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 4136LL) + ((unsigned __int64)Number << 6));
    if ( (a1[3] & 0x10000000) != 0 )
      v12 = (unsigned __int64 *)(a1 + 36);
    else
      v12 = (unsigned __int64 *)(*v11 + 8LL * (unsigned int)v9);
    v42 = 0;
    _m_prefetchw(v12);
    v13 = *v12;
    if ( (*v12 & 0xF) != 0 )
    {
      do
      {
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v12, v13 - 1, v13);
        if ( v13 == v14 )
          break;
        v13 = v14;
      }
      while ( (v14 & 0xF) != 0 );
    }
    if ( v13 )
    {
      v15 = v13 & 0xF;
      if ( (v13 & 0xF) != 0 )
      {
        v13 &= 0xFFFFFFFFFFFFFFF0uLL;
        if ( v15 == 1 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFu);
          _m_prefetchw(v12);
          v26 = *v12;
          while ( (v26 & 0xF) == 0 )
          {
            if ( v13 != (v26 & 0xFFFFFFFFFFFFFFF0uLL) )
              break;
            v27 = v26;
            v26 = _InterlockedCompareExchange64((volatile signed __int64 *)v12, v26 + 15, v26);
            if ( v27 == v26 )
              goto LABEL_11;
          }
          _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), 0xFFFFFFF1);
        }
      }
      else
      {
        EtwpLockBufferList((__int64)a1, &v42);
        v13 = *v12 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v13 )
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
        EtwpUnlockBufferList((__int64)a1, &v42);
        v9 = v36;
        v8 = v35;
      }
LABEL_11:
      if ( v13 )
      {
        v38 = 0LL;
        v39.QuadPart = 0LL;
        _m_prefetchw((const void *)(v13 + 8));
        v16 = *(_DWORD *)(v13 + 8);
        if ( v16 <= v8 )
          break;
      }
    }
LABEL_29:
    v25 = EtwpSwitchBuffer((__int64)a1, v13, (signed __int64 *)v12, Number, a5);
    if ( (a1[3] & 0x4000000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v32 = PerformanceCounter.QuadPart
          - _InterlockedExchange64((volatile __int64 *)a1 + 159, PerformanceCounter.QuadPart);
      do
      {
        v33 = *((_QWORD *)a1 + 160);
        if ( v33 )
        {
          a2 = ((v33 + v32 + 2 * v33) >> 63) & 3;
          v34 = (v33 + v32 + 2 * v33) / 4;
        }
        else
        {
          v34 = v32;
        }
      }
      while ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 160, v34, v33) );
    }
    if ( v25 < 0 )
      goto LABEL_40;
    v9 = v36;
    v8 = v35;
  }
  while ( 1 )
  {
    if ( (a1[208] & 0x8000000) != 0 )
    {
      if ( (unsigned int)EtwpGetTimeStampAndQpcDelta(a1, &v39, &v38) )
      {
        v9 = v36;
LABEL_62:
        v8 = v35;
        goto LABEL_34;
      }
      v9 = v36;
      v28 = *(_QWORD *)(8LL * v36 + v11[2]);
      v41 = 8LL * v36;
      if ( v38 != v28 || v16 == 72 )
      {
        v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v16 + 24, v16);
        if ( v16 == v29 )
        {
          if ( (unsigned __int64)v29 + 24 > v35 )
          {
            *(_DWORD *)(v13 + 4) = v29;
            goto LABEL_29;
          }
          a2 = v11[2] + v41;
          v30 = v28 == _InterlockedCompareExchange64((volatile signed __int64 *)a2, v38, v28);
          *(_DWORD *)(v29 + v13 + 4) = 5308440;
          v16 = v29;
          *(LARGE_INTEGER *)(v29 + v13 + 8) = v39;
          if ( v30 )
          {
            *(_QWORD *)(v29 + v13 + 16) = v38;
            *(_DWORD *)(v29 + v13) = -1072627710;
          }
          else
          {
            *(_DWORD *)(v29 + v13) = -1072627711;
            *(_QWORD *)(v29 + v13 + 16) = 0LL;
          }
        }
        else
        {
          v16 = v29;
        }
        goto LABEL_62;
      }
      SystemTimePrecise = v39;
      v8 = v35;
    }
    else
    {
      v17 = *((_QWORD *)a1 + 5);
      if ( v17 > 3 )
        goto LABEL_70;
      if ( (_DWORD)v17 == 3 )
      {
        SystemTimePrecise.QuadPart = __rdtsc();
      }
      else if ( (_DWORD)v17 )
      {
        v24 = v17 - 1;
        if ( v24 )
        {
          if ( v24 != 1 )
LABEL_70:
            __fastfail(0x3Du);
          v40.QuadPart = 0LL;
          ((void (__fastcall *)(LARGE_INTEGER *, __int64, __int64))off_140C009E0[0])(&v40, a2, v9);
          SystemTimePrecise = v40;
          v9 = v36;
          v8 = v35;
        }
        else
        {
          SystemTimePrecise = KeQueryPerformanceCounter(0LL);
          v9 = v36;
          v8 = v35;
        }
      }
      else
      {
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v9 = v36;
        v8 = v35;
      }
    }
    *a4 = SystemTimePrecise;
    v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v10 + v16, v16);
    a2 = v19;
    if ( v16 == v19 )
      break;
    v16 = v19;
LABEL_34:
    if ( v16 > v8 )
      goto LABEL_29;
  }
  if ( v19 + v10 > v8 )
  {
    *(_DWORD *)(v13 + 4) = v19;
    goto LABEL_29;
  }
  if ( (a1[3] & 0x400) != 0 )
  {
    v20 = *(_QWORD *)(v13 + 16);
    for ( i = a4->QuadPart; a4->QuadPart > v20; i = a4->QuadPart )
    {
      v22 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 16), i, v20);
      if ( v22 == v20 )
        break;
    }
  }
  ++*(_QWORD *)(v11[1] + 8LL * (unsigned int)v9);
  result = v13 + a2;
  *(_QWORD *)a3 = v13;
  *(_QWORD *)(a3 + 8) = v12;
  *(_DWORD *)(a3 + 16) = a2;
  return result;
}
