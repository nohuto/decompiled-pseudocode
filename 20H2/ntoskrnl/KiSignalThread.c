/*
 * XREFs of KiSignalThread @ 0x14028D1C0
 * Callers:
 *     KeAlertThreadByThreadId @ 0x14023F1C0 (KeAlertThreadByThreadId.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14028C420 (KiTryUnwaitThreadWithPriority.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     KiResumeThread @ 0x1402D7924 (KiResumeThread.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KiSuspendThread @ 0x1402EC150 (KiSuspendThread.c)
 *     KiSignalThreadForApc @ 0x1402EC4EC (KiSignalThreadForApc.c)
 *     KeAlertThread @ 0x1402EC8E0 (KeAlertThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r10
  unsigned __int8 v6; // dl
  int v7; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  char v12; // al
  __int64 v13; // rcx
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a2 + 112);
  v6 = 0;
  v7 = v4 & 7;
  if ( v7 == 1 || v7 == 4 )
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
      v27 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v23 = SchedulerAssist[6];
          SchedulerAssist[6] = v23 + 1;
          if ( v23 == -1 )
LABEL_38:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 31760), 0LL) )
      {
        v21 = CurrentPrcb->SchedulerAssist;
        if ( v21 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v24 = v21[6] - 1;
            v21[6] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v27);
        while ( *(_QWORD *)(v11 + 31760) );
        v22 = CurrentPrcb->SchedulerAssist;
        if ( v22 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v25 = v22[6];
            v22[6] = v25 + 1;
            if ( v25 == -1 )
              goto LABEL_38;
          }
        }
      }
      if ( *(_QWORD *)(a2 + 712) )
      {
        v17 = *(_QWORD *)(a2 + 216);
        v18 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(v17 + 8) != a2 + 216 || *v18 != a2 + 216 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)(a2 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 31760), 0LL);
      v19 = KeGetCurrentPrcb();
      v20 = v19->SchedulerAssist;
      if ( v20 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v26 = v20[6] - 1;
          v20[6] = v26;
          if ( !v26 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    v12 = *(_BYTE *)(a2 + 388);
    if ( v12 == 1 )
    {
      *(_DWORD *)(a2 + 116) |= 2u;
    }
    else if ( v12 == 5 )
    {
      v13 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436));
      if ( *(_BYTE *)(a2 + 391) )
        *(_QWORD *)(a2 + 1000) += v13;
      else
        *(_QWORD *)(a2 + 992) += v13;
    }
    *(_BYTE *)(a2 + 388) = 7;
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = a2 + 216;
    *(_QWORD *)(a2 + 200) = a3;
    *(_QWORD *)(a2 + 976) = 0LL;
    return 1;
  }
  if ( !a4 )
    return v6;
  if ( (v4 & 7) == 0 )
  {
    *(_BYTE *)(a2 + 112) = v4 & 0xF8 | 2;
    *(_QWORD *)(a2 + 200) = a3;
    *(_QWORD *)(a2 + 976) = 0LL;
    *(_BYTE *)(a4 + 17) = 0;
    return 1;
  }
  if ( v7 == 5 )
  {
    *(_BYTE *)(a2 + 112) = v4 & 0xF8 | 6;
  }
  else if ( v7 == 3 )
  {
    *(_BYTE *)(a4 + 17) = 2;
  }
  return v6;
}
