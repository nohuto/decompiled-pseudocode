/*
 * XREFs of PopGetIdleTimesCallback @ 0x140298220
 * Callers:
 *     PoGetIdleTimes @ 0x140298098 (PoGetIdleTimes.c)
 * Callees:
 *     PpmConvertTime @ 0x14029857C (PpmConvertTime.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     PpmContinueActiveTimeAccumulation @ 0x14033F2D8 (PpmContinueActiveTimeAccumulation.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  BOOL v7; // edi
  unsigned __int64 v8; // rbp
  _DWORD *v9; // r12
  _QWORD *v10; // r15
  signed __int64 IdleTimeEntry; // rax
  signed __int64 v12; // rtt
  LARGE_INTEGER v13; // r13
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  unsigned __int64 v16; // rax
  ULONG v17; // r8d
  unsigned int v18; // r9d
  unsigned __int64 v19; // rax
  _PPM_IDLE_STATES *v21; // r10
  unsigned int i; // edx
  unsigned int StateCount; // ecx
  _DWORD *v24; // r11
  __int64 v25; // r8
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // r8
  _QWORD *v30; // rcx
  unsigned __int64 TotalTime; // rcx
  __int64 v32; // rax
  unsigned int v33; // [rsp+20h] [rbp-68h]
  _QWORD *v34; // [rsp+28h] [rbp-60h]
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // [rsp+30h] [rbp-58h]
  _PPM_IDLE_STATES *IdleStates; // [rsp+38h] [rbp-50h]
  _QWORD *v37; // [rsp+40h] [rbp-48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-40h]
  ULONG SpareLong0; // [rsp+90h] [rbp+8h]
  unsigned int KernelTime; // [rsp+A8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb != a1;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( CurrentPrcb != a1 )
  {
    _m_prefetchw((const void *)&a1->PowerState.IdleTimeEntry);
    IdleTimeEntry = a1->PowerState.IdleTimeEntry;
    do
    {
      v12 = IdleTimeEntry;
      IdleTimeEntry = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&a1->PowerState.IdleTimeEntry,
                        IdleTimeEntry,
                        IdleTimeEntry);
    }
    while ( v12 != IdleTimeEntry );
    v8 = IdleTimeEntry;
    if ( !IdleTimeEntry )
      return 3221225473LL;
  }
  IdleAccounting = a1->PowerState.IdleAccounting;
  IdleStates = a1->PowerState.IdleStates;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v13 = PerformanceCounter;
  SpareLong0 = a1->IdleThread->SchedulerApc.SpareLong0;
  KernelTime = a1->KernelTime;
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    if ( IdleAccounting )
    {
      v21 = IdleStates;
      if ( IdleStates )
      {
        for ( i = 0; ; ++i )
        {
          StateCount = IdleAccounting->StateCount;
          v24 = v9;
          v33 = i;
          if ( IdleAccounting->StateCount >= v21->ProcessorIdleCount )
            StateCount = v21->ProcessorIdleCount;
          v37 = v10;
          if ( i >= StateCount )
          {
            v13 = PerformanceCounter;
            *(_QWORD *)a2 = PpmConvertTime(IdleAccounting->PriorIdleTime, PopQpcFrequency, 10000000LL);
            break;
          }
          v25 = i;
          if ( v21->State[v25].StateType )
          {
            if ( v21->State[v25].StateType == 1 )
            {
              v26 = 1;
              goto LABEL_33;
            }
            if ( v21->State[v25].StateType == 2 )
            {
              v26 = 2;
              goto LABEL_33;
            }
          }
          else if ( v21->State[v25].ContextRetained )
          {
            v26 = 2 - (v21->State[v25].CacheCoherent != 0);
            goto LABEL_33;
          }
          v26 = 3;
LABEL_33:
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              if ( v28 == 1 )
              {
                v29 = (_DWORD *)(a2 + 40);
                v30 = (_QWORD *)(a2 + 24);
              }
              else
              {
                v29 = 0LL;
                v30 = 0LL;
              }
            }
            else
            {
              v29 = (_DWORD *)(a2 + 36);
              v30 = (_QWORD *)(a2 + 16);
            }
          }
          else
          {
            v29 = (_DWORD *)(a2 + 32);
            v30 = (_QWORD *)(a2 + 8);
          }
          v9 = v29;
          v10 = v30;
          v34 = v30;
          if ( i != v21->ActualState )
          {
            v10 = v37;
            v9 = v24;
          }
          if ( v29 && v30 )
          {
            *v29 += IdleAccounting->State[i].FailureCount + IdleAccounting->State[i].SuccessCount;
            TotalTime = IdleAccounting->State[i].TotalTime;
            if ( v21->ActualState == i )
              TotalTime += a1->PowerState.IdleTimeLast;
            v32 = PpmConvertTime(TotalTime, PopQpcFrequency, 10000000LL);
            i = v33;
            v21 = IdleStates;
            *v34 += v32;
          }
        }
      }
    }
  }
  if ( a3 )
  {
    if ( !v7 )
      ((void (__fastcall *)(_QWORD, _QWORD))PpmContinueActiveTimeAccumulation)(a1, (LARGE_INTEGER)v13.QuadPart);
    *(_QWORD *)(a3 + 8) = PpmConvertTime(a1->PowerState.PerfFeedback.StallTime, PopQpcFrequency, 10000000LL);
  }
  if ( !v7 )
    goto LABEL_18;
  _m_prefetchw((const void *)&a1->PowerState.IdleTimeEntry);
  v14 = a1->PowerState.IdleTimeEntry;
  do
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->PowerState.IdleTimeEntry, v14, v14);
  }
  while ( v15 != v14 );
  if ( v8 != v14 )
    return 3221225473LL;
  if ( v13.QuadPart > v8 )
  {
    v16 = PpmConvertTime(v13.QuadPart - v8, PopQpcFrequency, 10000000LL);
    if ( v10 && v9 )
    {
      ++*v9;
      *v10 += v16;
    }
    v17 = SpareLong0;
    v18 = KernelTime;
    if ( v16 > KeMaximumIncrement )
    {
      v19 = v16 / KeMaximumIncrement;
      v17 = v19 + SpareLong0 - 1;
      v18 = v19 + KernelTime - 1;
    }
  }
  else
  {
LABEL_18:
    v18 = KernelTime;
    v17 = SpareLong0;
  }
  if ( a2 )
  {
    if ( IdleAccounting && IdleStates )
      *(_QWORD *)a2 += *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24);
    else
      *(_QWORD *)a2 = v17 * (unsigned __int64)KeMaximumIncrement;
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v17;
    *(_DWORD *)(a3 + 4) = v18;
  }
  return 0LL;
}
