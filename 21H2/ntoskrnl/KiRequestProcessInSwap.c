/*
 * XREFs of KiRequestProcessInSwap @ 0x14021162C
 * Callers:
 *     KiInswapAndReadyThread @ 0x140211410 (KiInswapAndReadyThread.c)
 *     KiInSwapSingleProcess @ 0x14021158C (KiInSwapSingleProcess.c)
 * Callees:
 *     MmNotifyProcessInSwapTrigger @ 0x140211750 (MmNotifyProcessInSwapTrigger.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiRequestProcessInSwap(__int64 a1, __int64 a2)
{
  char v2; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  signed __int64 v9; // rax
  signed __int64 *v10; // rdi
  signed __int64 v11; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  int v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v13[6] - 1;
        v13[6] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 9;
  if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
  KiReleaseThreadLockSafe(a1);
  v7 = (_QWORD *)(a1 + 216);
  v8 = *(_QWORD **)(a2 + 352);
  if ( *v8 != a2 + 344 )
    __fastfail(3u);
  *v7 = a2 + 344;
  v7[1] = v8;
  *v8 = v7;
  *(_QWORD *)(a2 + 352) = v7;
  LOBYTE(v9) = *(_DWORD *)(a2 + 840) & 7;
  if ( (_BYTE)v9 == 1 )
  {
    _InterlockedXor((volatile signed __int32 *)(a2 + 840), 3u);
    v2 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( v2 )
  {
    MmNotifyProcessInSwapTrigger(a2);
    v10 = (signed __int64 *)(a2 + 360);
    _m_prefetchw(&KiProcessInSwapListHead);
    v9 = KiProcessInSwapListHead;
    do
    {
      *v10 = v9;
      v11 = v9;
      v9 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v10, v9);
    }
    while ( v9 != v11 );
    if ( !v9 )
      LOBYTE(v9) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v9;
}
