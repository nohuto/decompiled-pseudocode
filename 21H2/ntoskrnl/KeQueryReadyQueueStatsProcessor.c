/*
 * XREFs of KeQueryReadyQueueStatsProcessor @ 0x140514718
 * Callers:
 *     KiChooseTargetProcessor @ 0x14034FB30 (KiChooseTargetProcessor.c)
 *     KiCanSelectSoftParkedProcessor @ 0x140525CD4 (KiCanSelectSoftParkedProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryReadyQueueStatsProcessor(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, _QWORD *a5)
{
  _DWORD *v7; // rbp
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v10; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  struct _KPRCB *v15; // rcx
  int v16; // eax
  struct _KPRCB *v17; // rbx
  _DWORD *v18; // rcx
  int v19; // eax
  _DWORD *v20; // rcx
  int v21; // eax
  __int64 result; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  int v25; // [rsp+50h] [rbp+8h] BYREF
  int v26; // [rsp+58h] [rbp+10h] BYREF

  v7 = (_DWORD *)a2;
  if ( *(_QWORD *)(a1 + 33856) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = 0;
    v10 = *(_QWORD *)(a1 + 33864);
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = SchedulerAssist[6];
          SchedulerAssist[6] = v12 + 1;
          if ( v12 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        break;
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v13[6] - 1;
          v13[6] = v14;
          if ( !v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v25, a2, (__int64)a3, (__int64)a4);
      while ( *(_QWORD *)v10 );
    }
    *a4 = *(_DWORD *)(v10 + 608);
    *a5 = *(_QWORD *)(v10 + 616);
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    v15 = KeGetCurrentPrcb();
    a2 = (__int64)v15->SchedulerAssist;
    if ( a2 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v16 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
  }
  v17 = KeGetCurrentPrcb();
  v26 = 0;
  while ( 1 )
  {
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v19 = v18[6];
        v18[6] = v19 + 1;
        if ( v19 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v20 = v17->SchedulerAssist;
    if ( v20 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v21 = v20[6] - 1;
        v20[6] = v21;
        if ( !v21 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
    do
      KeYieldProcessorEx(&v26, a2, (__int64)a3, (__int64)a4);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *v7 = *(_DWORD *)(a1 + 32436);
  result = *(_QWORD *)(a1 + 32440);
  *a3 = result;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v23 = KeGetCurrentPrcb();
  v24 = v23->SchedulerAssist;
  if ( v24 )
  {
    if ( v23->NestingLevel <= 1u )
    {
      result = (unsigned int)(v24[6] - 1);
      v24[6] = result;
      if ( !(_DWORD)result )
        return KiRemoveSystemWorkPriorityKick((__int64)v23);
    }
  }
  return result;
}
