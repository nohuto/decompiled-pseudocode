/*
 * XREFs of KiSignalThread @ 0x1402EACF0
 * Callers:
 *     KiResumeThread @ 0x140267870 (KiResumeThread.c)
 *     KiSuspendThread @ 0x1402682C4 (KiSuspendThread.c)
 *     KiSignalThreadForApc @ 0x140268660 (KiSignalThreadForApc.c)
 *     KeAlertThreadByThreadId @ 0x14027E000 (KeAlertThreadByThreadId.c)
 *     KeAlertThread @ 0x14029BC80 (KeAlertThread.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1402E71B0 (KiTryUnwaitThreadWithPriority.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  char result; // al
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  char v18; // al
  __int64 v19; // rcx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a2 + 112);
  result = 0;
  v9 = v6 & 7;
  if ( v9 == 1 || v9 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    if ( v10 )
    {
      if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
      {
        *(_DWORD *)(a2 + 540) = (unsigned __int8)*(_DWORD *)(a2 + 540);
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 4LL * *(unsigned int *)(a2 + 540) + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 40));
      }
    }
    v11 = *(_QWORD *)(a2 + 712);
    if ( v11 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v26 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = SchedulerAssist[6];
          SchedulerAssist[6] = v22 + 1;
          if ( v22 == -1 )
LABEL_36:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 31760), 0LL) )
      {
        v20 = CurrentPrcb->SchedulerAssist;
        if ( v20 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v23 = v20[6] - 1;
            v20[6] = v23;
            if ( !v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v26);
        while ( *(_QWORD *)(v11 + 31760) );
        v21 = CurrentPrcb->SchedulerAssist;
        if ( v21 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v24 = v21[6];
            v21[6] = v24 + 1;
            if ( v24 == -1 )
              goto LABEL_36;
          }
        }
      }
      if ( *(_QWORD *)(a2 + 712) )
      {
        v14 = *(_QWORD *)(a2 + 216);
        v15 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(v14 + 8) != a2 + 216 || *v15 != a2 + 216 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *(_QWORD *)(a2 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 31760), 0LL);
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v25 = v17[6] - 1;
          v17[6] = v25;
          if ( !v25 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
    }
    v18 = *(_BYTE *)(a2 + 388);
    if ( v18 == 1 )
    {
      *(_DWORD *)(a2 + 116) |= 2u;
    }
    else if ( v18 == 5 )
    {
      v19 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436));
      if ( *(_BYTE *)(a2 + 391) )
        *(_QWORD *)(a2 + 1000) += v19;
      else
        *(_QWORD *)(a2 + 992) += v19;
    }
    *(_BYTE *)(a2 + 388) = 7;
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = a2 + 216;
    *(_QWORD *)(a2 + 200) = a3;
    *(_QWORD *)(a2 + 976) = 0LL;
    return 1;
  }
  if ( a4 )
  {
    if ( (v6 & 7) == 0 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 2;
      *(_QWORD *)(a2 + 200) = a3;
      *(_QWORD *)(a2 + 976) = 0LL;
      *(_BYTE *)(a4 + 17) = 0;
      return 1;
    }
    if ( v9 == 5 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 6;
    }
    else if ( v9 == 3 )
    {
      *(_BYTE *)(a4 + 17) = 2;
    }
  }
  return result;
}
