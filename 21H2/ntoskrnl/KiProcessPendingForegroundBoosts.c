/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x14029B220
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiApplyForegroundBoostThread @ 0x14029B3DC (KiApplyForegroundBoostThread.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 *v7; // rdx
  __int64 *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 **v11; // rcx
  bool v12; // di
  __int64 *v13; // rsi
  __int64 v14; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+28h] [rbp-30h] BYREF
  __int128 v22; // [rsp+30h] [rbp-28h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock(&qword_140C31F38);
  v7 = (__int64 *)qword_140C31F28;
  while ( v7 != &qword_140C31F28 )
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
      v10 = *v8;
      v11 = (__int64 **)v8[1];
      if ( *(__int64 **)(*v8 + 8) != v8 || *v11 != v8 )
        __fastfail(3u);
      *v11 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      *v8 = (__int64)v4;
      v4 = v8;
      v8[1] = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)v8 - 6, 1u);
    }
  }
  v12 = qword_140C31F28 != (_QWORD)&qword_140C31F28;
  KxReleaseSpinLock(&qword_140C31F38);
  if ( v12 )
  {
    *((_QWORD *)&v22 + 1) = -1LL;
    KeSetTimer2(&KiForegroundState, -150000LL * (KiForegroundBoostTicks - v5), 0LL, &v22);
  }
  while ( v4 )
  {
    v13 = v4;
    v4 = (__int64 *)*v4;
    v14 = (__int64)(v13 - 110);
    *(_QWORD *)(v14 + 880) = 1LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v20 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = SchedulerAssist[6];
          SchedulerAssist[6] = v18 + 1;
          if ( v18 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 64), 0LL) )
        break;
      v17 = CurrentPrcb->SchedulerAssist;
      if ( v17 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v19 = v17[6] - 1;
          v17[6] = v19;
          if ( !v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v20);
      while ( *(_QWORD *)(v14 + 64) );
    }
    KiApplyForegroundBoostThread(v14, &v21);
    KiReleaseThreadLockSafe(v14);
    _InterlockedAdd16((volatile signed __int16 *)(v14 + 868), 0xFFFFu);
  }
  KiReadyDeferredReadyList(KeGetCurrentPrcb(), &v21);
}
