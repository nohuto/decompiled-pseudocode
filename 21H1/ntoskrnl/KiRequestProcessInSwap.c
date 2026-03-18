/*
 * XREFs of KiRequestProcessInSwap @ 0x1402EF450
 * Callers:
 *     KiReadyThread @ 0x140244C00 (KiReadyThread.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiInSwapSingleProcess @ 0x1402EF380 (KiInSwapSingleProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402EF5C4 (MmNotifyProcessInSwapTrigger.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiRequestProcessInSwap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  char v6; // si
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  signed __int64 v13; // rax
  signed __int64 *v14; // rdi
  signed __int64 v15; // rcx
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v23; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  v23 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v18 = SchedulerAssist[6];
      SchedulerAssist[6] = v18 + 1;
      if ( v18 == -1 )
LABEL_21:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v16 = CurrentPrcb->SchedulerAssist;
    if ( v16 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v16[6] - 1;
        v16[6] = v19;
        if ( !v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v23, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v17[6];
        v17[6] = v20 + 1;
        if ( v20 == -1 )
          goto LABEL_21;
      }
    }
  }
  *(_BYTE *)(a1 + 388) = 9;
  if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
  *(_QWORD *)(a1 + 64) = 0LL;
  v9 = KeGetCurrentPrcb();
  v10 = v9->SchedulerAssist;
  if ( v10 )
  {
    if ( v9->NestingLevel <= 1u )
    {
      v21 = v10[6] - 1;
      v10[6] = v21;
      if ( !v21 )
        KiRemoveSystemWorkPriorityKick(v9);
    }
  }
  v11 = (_QWORD *)(a1 + 216);
  v12 = *(_QWORD **)(a2 + 352);
  if ( *v12 != a2 + 344 )
    __fastfail(3u);
  *v11 = a2 + 344;
  v11[1] = v12;
  *v12 = v11;
  *(_QWORD *)(a2 + 352) = v11;
  LOBYTE(v13) = *(_DWORD *)(a2 + 840) & 7;
  if ( (_BYTE)v13 == 1 )
  {
    _InterlockedXor((volatile signed __int32 *)(a2 + 840), 3u);
    v6 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( v6 )
  {
    MmNotifyProcessInSwapTrigger(a2);
    v14 = (signed __int64 *)(a2 + 360);
    _m_prefetchw(&KiProcessInSwapListHead);
    v13 = KiProcessInSwapListHead;
    do
    {
      *v14 = v13;
      v15 = v13;
      v13 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v14, v13);
    }
    while ( v13 != v15 );
    if ( !v13 )
      LOBYTE(v13) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v13;
}
