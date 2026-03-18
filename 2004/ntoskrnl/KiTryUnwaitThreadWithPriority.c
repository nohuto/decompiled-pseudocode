/*
 * XREFs of KiTryUnwaitThreadWithPriority @ 0x140282110
 * Callers:
 *     ExpQueueWorkItem @ 0x1402B7B10 (ExpQueueWorkItem.c)
 *     KiWakePriQueueWaiter @ 0x1402FCB40 (KiWakePriQueueWaiter.c)
 * Callees:
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x140282EB0 (KiSignalThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14032A93C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiTryUnwaitThreadWithPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v5; // rbx
  unsigned __int8 v7; // bp
  __int64 v8; // rdi
  __int64 SchedulerAssist; // rdx
  __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  char v14; // al
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  struct _SINGLE_LIST_ENTRY *v18; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
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
  v8 = (int)a4;
  v29 = 0;
  SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v24 = *(_DWORD *)(SchedulerAssist + 24);
      *(_DWORD *)(SchedulerAssist + 24) = v24 + 1;
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
      KeYieldProcessorEx(&v29, SchedulerAssist, a3, a4);
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
      v13 = KeGetCurrentPrcb();
      if ( (char)v8 < *(char *)(v5 + 563) )
      {
        if ( *(_BYTE *)(v5 + 871) )
        {
          v18 = (struct _SINGLE_LIST_ENTRY *)(v5 + 816);
          if ( *(_QWORD *)(v5 + 816) == 1LL )
          {
            p_AbSelfIoBoostsList = &v13->AbSelfIoBoostsList;
            if ( v13 != (struct _KPRCB *)-34672LL )
            {
              v18->Next = p_AbSelfIoBoostsList->Next;
              p_AbSelfIoBoostsList->Next = v18;
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
