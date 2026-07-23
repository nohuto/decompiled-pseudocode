/*
 * XREFs of KiTryUnwaitThreadWithPriority @ 0x1402E71B0
 * Callers:
 *     KiWakePriQueueWaiter @ 0x14021CD7C (KiWakePriQueueWaiter.c)
 *     ExpQueueWorkItem @ 0x1402E5CF0 (ExpQueueWorkItem.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KiSignalThread @ 0x1402EACF0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiTryUnwaitThreadWithPriority(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v5; // rbx
  unsigned __int8 v7; // bp
  __int64 v8; // rdi
  _DWORD *SchedulerAssist; // rdx
  __int64 v12; // rax
  struct _KDPC *v13; // rcx
  char v14; // al
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  PVOID *v18; // rdx
  PVOID *p_SystemArgument2; // r8
  __int64 v20; // rdx
  int v21; // edx
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // [rsp+58h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  v8 = a4;
  v29 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v24 = SchedulerAssist[6];
      SchedulerAssist[6] = v24 + 1;
      if ( v24 == -1 )
LABEL_30:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    v22 = CurrentPrcb->SchedulerAssist;
    if ( v22 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = v22[6] - 1;
        v22[6] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v29);
    while ( *(_QWORD *)(v5 + 64) );
    v23 = CurrentPrcb->SchedulerAssist;
    if ( v23 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = v23[6];
        v23[6] = v26 + 1;
        if ( v26 == -1 )
          goto LABEL_30;
      }
    }
  }
  if ( *(_BYTE *)(v5 + 388) == 5 )
  {
    v12 = (unsigned __int8)*(_DWORD *)(v5 + 540);
    if ( (_DWORD)v12 != (_DWORD)v8 )
    {
      v21 = *(_DWORD *)(v5 + 540) & 0x100;
      if ( !v21 )
      {
        v27 = *(_QWORD *)(v5 + 232);
        _InterlockedDecrement((volatile signed __int32 *)(v27 + 4 * v12 + 536));
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 4 * v8 + 536));
      }
      *(_DWORD *)(v5 + 540) = v21 | (unsigned __int8)v8;
    }
    v7 = KiSignalThread(a1, v5, a3, a2);
    if ( v7 )
    {
      *(_BYTE *)(v5 + 645) = 0;
      v13 = (struct _KDPC *)KeGetCurrentPrcb();
      if ( (char)v8 < *(char *)(v5 + 563) )
      {
        if ( *(_BYTE *)(v5 + 871) )
        {
          v18 = (PVOID *)(v5 + 816);
          if ( *(_QWORD *)(v5 + 816) == 1LL )
          {
            p_SystemArgument2 = &v13[541].SystemArgument2;
            if ( v13 != (struct _KDPC *)-34672LL )
            {
              *v18 = *p_SystemArgument2;
              *p_SystemArgument2 = v18;
              _InterlockedIncrement16((volatile signed __int16 *)(v5 + 868));
              KiAbQueueAutoBoostDpc(v13);
            }
          }
        }
      }
      v14 = *(_BYTE *)(v5 + 564);
      *(_BYTE *)(v5 + 563) = v8;
      if ( v14 )
      {
        if ( (v14 & 0xF) != 0 )
          *(_DWORD *)(v5 + 872) = MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(v5 + 564) = 0;
      }
      if ( (_DWORD)v8 != *(char *)(v5 + 195) )
      {
        v20 = *(_QWORD *)(v5 + 72) + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v5 + 651);
        if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
        *(_QWORD *)(v5 + 32) = v20;
        KiSetPriorityThread((_KTHREAD *)v5, 0LL, v8);
      }
    }
  }
  *(_QWORD *)(v5 + 64) = 0LL;
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v28 = v16[6] - 1;
      v16[6] = v28;
      if ( !v28 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  ++*(_BYTE *)(a2 + 17);
  return v7;
}
