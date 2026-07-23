/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x140335D50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiApplyForegroundBoostThread @ 0x140335F0C (KiApplyForegroundBoostThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rsi
  __int64 v17; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+28h] [rbp-30h] BYREF
  __int128 v25; // [rsp+30h] [rbp-28h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock(&qword_140C31EF8);
  v7 = (__int64 *)qword_140C31EE8;
  while ( v7 != &qword_140C31EE8 )
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
  v12 = qword_140C31EE8 != (_QWORD)&qword_140C31EE8;
  KxReleaseSpinLock(&qword_140C31EF8);
  if ( v12 )
  {
    *((_QWORD *)&v25 + 1) = -1LL;
    KeSetTimer2((__int64)&KiForegroundState, -150000LL * (KiForegroundBoostTicks - v5), 0LL, (__int64)&v25);
  }
  while ( v4 )
  {
    v16 = v4;
    v4 = (__int64 *)*v4;
    v17 = (__int64)(v16 - 110);
    *(_QWORD *)(v17 + 880) = 1LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v21 = SchedulerAssist[6];
          SchedulerAssist[6] = v21 + 1;
          if ( v21 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 64), 0LL) )
        break;
      v20 = CurrentPrcb->SchedulerAssist;
      if ( v20 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = v20[6] - 1;
          v20[6] = v22;
          if ( !v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v23, v13, v14, v15);
      while ( *(_QWORD *)(v17 + 64) );
    }
    KiApplyForegroundBoostThread(v17, &v24);
    KiReleaseThreadLockSafe(v17);
    _InterlockedAdd16((volatile signed __int16 *)(v17 + 868), 0xFFFFu);
  }
  KiReadyDeferredReadyList((__int64)KeGetCurrentPrcb(), &v24, v14, v15);
}
