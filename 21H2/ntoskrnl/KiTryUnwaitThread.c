/*
 * XREFs of KiTryUnwaitThread @ 0x14034D570
 * Callers:
 *     KeTimeOutQueueWaiters @ 0x14020436C (KeTimeOutQueueWaiters.c)
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     KeRundownQueueCommon @ 0x140227F1C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140228198 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x14023896C (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     KePulseEvent @ 0x14025FA60 (KePulseEvent.c)
 *     KiRundownMutants @ 0x1402655F0 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140266490 (KeTerminateThread.c)
 *     KiResumeThread @ 0x140267870 (KiResumeThread.c)
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     KeSetProcess @ 0x1402F652C (KeSetProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x1402FC4D8 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x14034D200 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140356310 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140357F10 (ExpReleaseResourceExclusiveForThreadLite.c)
 * Callees:
 *     KiWaitSatisfyMutant @ 0x14022AAF4 (KiWaitSatisfyMutant.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v5; // rbx
  unsigned __int8 v7; // di
  __int64 SchedulerAssist; // rdx
  char v12; // cl
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  char v16; // al
  __int64 v17; // rcx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rax
  __int64 result; // rax
  struct _KPRCB *v21; // rbp
  _DWORD *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  _BYTE *v27; // rcx
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // edx
  int v40[14]; // [rsp+20h] [rbp-38h] BYREF
  int v41; // [rsp+68h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  v41 = 0;
  SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v32 = *(_DWORD *)(SchedulerAssist + 24);
      *(_DWORD *)(SchedulerAssist + 24) = v32 + 1;
      if ( v32 == -1 )
LABEL_43:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    v28 = CurrentPrcb->SchedulerAssist;
    if ( v28 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v33 = v28[6] - 1;
        v28[6] = v33;
        if ( !v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v41, SchedulerAssist, a3, (__int64)a4);
    while ( *(_QWORD *)(v5 + 64) );
    v29 = CurrentPrcb->SchedulerAssist;
    if ( v29 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v34 = v29[6];
        v29[6] = v34 + 1;
        if ( v34 == -1 )
          goto LABEL_43;
      }
    }
  }
  if ( *(_BYTE *)(v5 + 388) == 5 )
  {
    v12 = *(_BYTE *)(v5 + 112);
    v13 = v12 & 7;
    if ( v13 == 1 || v13 == 4 )
    {
      v14 = *(_QWORD *)(v5 + 232);
      if ( v14 )
      {
        if ( (*(_BYTE *)v14 & 0x7F) == 0x15 )
        {
          *(_DWORD *)(v5 + 540) = (unsigned __int8)*(_DWORD *)(v5 + 540);
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 4LL * *(unsigned int *)(v5 + 540) + 536));
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 40));
        }
      }
      v15 = *(_QWORD *)(v5 + 712);
      if ( v15 )
      {
        v21 = KeGetCurrentPrcb();
        v40[0] = 0;
        v22 = v21->SchedulerAssist;
        if ( v22 )
        {
          if ( v21->NestingLevel <= 1u )
          {
            v35 = v22[6];
            v22[6] = v35 + 1;
            if ( v35 == -1 )
LABEL_56:
              KiRemoveSystemWorkPriorityKick(v21);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 31760), 0LL) )
        {
          v30 = v21->SchedulerAssist;
          if ( v30 )
          {
            if ( v21->NestingLevel <= 1u )
            {
              v36 = v30[6] - 1;
              v30[6] = v36;
              if ( !v36 )
                KiRemoveSystemWorkPriorityKick(v21);
            }
          }
          do
            KeYieldProcessorEx(v40, SchedulerAssist, a3, (__int64)a4);
          while ( *(_QWORD *)(v15 + 31760) );
          v31 = v21->SchedulerAssist;
          if ( v31 )
          {
            if ( v21->NestingLevel <= 1u )
            {
              v37 = v31[6];
              v31[6] = v37 + 1;
              if ( v37 == -1 )
                goto LABEL_56;
            }
          }
        }
        if ( *(_QWORD *)(v5 + 712) )
        {
          v23 = *(_QWORD *)(v5 + 216);
          v24 = *(_QWORD **)(v5 + 224);
          if ( *(_QWORD *)(v23 + 8) != v5 + 216 || *v24 != v5 + 216 )
            __fastfail(3u);
          *v24 = v23;
          *(_QWORD *)(v23 + 8) = v24;
          *(_QWORD *)(v5 + 712) = 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 31760), 0LL);
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        if ( v26 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v38 = v26[6] - 1;
            v26[6] = v38;
            if ( !v38 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
      }
      v16 = *(_BYTE *)(v5 + 388);
      if ( v16 == 1 )
      {
        *(_DWORD *)(v5 + 116) |= 2u;
      }
      else if ( v16 == 5 )
      {
        v17 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v5 + 436));
        if ( *(_BYTE *)(v5 + 391) )
          *(_QWORD *)(v5 + 1000) += v17;
        else
          *(_QWORD *)(v5 + 992) += v17;
      }
      *(_BYTE *)(v5 + 388) = 7;
      v7 = 1;
      *(_QWORD *)(v5 + 216) = *(_QWORD *)(a1 + 11528);
      *(_QWORD *)(a1 + 11528) = v5 + 216;
      *(_QWORD *)(v5 + 200) = a3;
      *(_QWORD *)(v5 + 976) = 0LL;
    }
    else
    {
      if ( (*(_BYTE *)(v5 + 112) & 7) == 0 )
      {
        *(_BYTE *)(v5 + 112) = v12 & 0xF8 | 2;
        *(_QWORD *)(v5 + 200) = a3;
        *(_QWORD *)(v5 + 976) = 0LL;
        *(_BYTE *)(a2 + 17) = 0;
        v7 = 1;
LABEL_13:
        if ( a4 )
        {
          *a4 = v5;
          v27 = *(_BYTE **)(a2 + 32);
          if ( (*v27 & 0x7F) == 2 )
            KiWaitSatisfyMutant((__int64)v27, v5, a1);
        }
        goto LABEL_14;
      }
      if ( v13 == 5 )
      {
        *(_BYTE *)(v5 + 112) = v12 & 0xF8 | 6;
        goto LABEL_14;
      }
      if ( v13 == 3 )
        *(_BYTE *)(a2 + 17) = 2;
    }
    if ( !v7 )
      goto LABEL_14;
    goto LABEL_13;
  }
LABEL_14:
  *(_QWORD *)(v5 + 64) = 0LL;
  v18 = KeGetCurrentPrcb();
  v19 = v18->SchedulerAssist;
  if ( v19 )
  {
    if ( v18->NestingLevel <= 1u )
    {
      v39 = v19[6] - 1;
      v19[6] = v39;
      if ( !v39 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  result = v7;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
