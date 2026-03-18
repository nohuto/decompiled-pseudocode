/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x14039EE50
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiProcessPendingForegroundBoosts(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 *v4; // rbx
  unsigned int v5; // esi
  int v6; // edi
  __int64 *v7; // rcx
  __int64 *v8; // rax
  unsigned int v9; // edx
  __int64 **v10; // rdx
  bool v11; // di
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rsi
  __int64 v16; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v19; // rdi
  char v20; // si
  _QWORD *v21; // rbx
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v26; // [rsp+28h] [rbp-18h] BYREF
  __int128 v27; // [rsp+30h] [rbp-10h] BYREF

  v26 = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock(&qword_140C2BB58);
  v7 = (__int64 *)qword_140C2BB48;
  while ( v7 != &qword_140C2BB48 )
  {
    v8 = v7;
    v7 = (__int64 *)*v7;
    v9 = v6 - *((_DWORD *)v8 - 2);
    if ( v9 < KiForegroundBoostTicks )
    {
      if ( v9 > v5 )
        v5 = v6 - *((_DWORD *)v8 - 2);
    }
    else
    {
      v10 = (__int64 **)v8[1];
      if ( (__int64 *)v7[1] != v8 || *v10 != v8 )
        __fastfail(3u);
      *v10 = v7;
      v7[1] = (__int64)v10;
      *v8 = (__int64)v4;
      v4 = v8;
      v8[1] = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)v8 - 6, 1u);
    }
  }
  v11 = qword_140C2BB48 != (_QWORD)&qword_140C2BB48;
  KxReleaseSpinLock(&qword_140C2BB58);
  if ( v11 )
  {
    *((_QWORD *)&v27 + 1) = -1LL;
    KeSetTimer2((__int64)&KiForegroundState, -150000LL * (KiForegroundBoostTicks - v5), 0LL, (__int64)&v27);
  }
  while ( v4 )
  {
    v15 = v4;
    v4 = (__int64 *)*v4;
    v16 = (__int64)(v15 - 110);
    *(_QWORD *)(v16 + 880) = 1LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v23 = SchedulerAssist[6];
          SchedulerAssist[6] = v23 + 1;
          if ( v23 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
        break;
      v22 = CurrentPrcb->SchedulerAssist;
      if ( v22 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v24 = v22[6] - 1;
          v22[6] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v25, v12, v13, v14);
      while ( *(_QWORD *)(v16 + 64) );
    }
    KiApplyForegroundBoostThread(v16, (__int64)&v26, v13, v14);
    KiReleaseThreadLockSafe(v16);
    _InterlockedAdd16((volatile signed __int16 *)(v16 + 868), 0xFFFFu);
  }
  v19 = KeGetCurrentPrcb();
  v20 = 0;
  v21 = v26;
  if ( v26 )
  {
    v26 = (_QWORD *)*v26;
    do
    {
      KiDeferredReadySingleThread((__int64)v19, (ULONG_PTR)(v21 - 27), (__int64)&v26);
      v21 = v26;
      ++v20;
      if ( v26 )
        v26 = (_QWORD *)*v26;
      if ( (v20 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&v19->DeferredDispatchInterrupts.Level);
    }
    while ( v21 );
  }
  KiFlushSoftwareInterruptBatch(&v19->DeferredDispatchInterrupts.Level);
}
