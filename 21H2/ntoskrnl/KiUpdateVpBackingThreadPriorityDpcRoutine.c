/*
 * XREFs of KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1405777C0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1405779D0 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rcx
  __int64 *v6; // rdx
  __int64 **v7; // rax
  __int64 **v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rsi
  ULONG_PTR v13; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  struct _KPRCB *v19; // rbx
  char v20; // si
  _QWORD *v21; // rdi
  signed __int32 v22[8]; // [rsp+0h] [rbp-50h] BYREF
  int v23; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v24; // [rsp+28h] [rbp-28h] BYREF
  int v25[8]; // [rsp+30h] [rbp-20h] BYREF

  v4 = 0LL;
  KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
  v5 = (__int64 **)KiUpdateVpThreadPriorityListHead;
  if ( (__int64 *)KiUpdateVpThreadPriorityListHead != &KiUpdateVpThreadPriorityListHead )
  {
    do
    {
      v6 = *v5;
      v7 = v5;
      v5 = (__int64 **)v6;
      v8 = (__int64 **)v7[1];
      if ( (__int64 **)v6[1] != v7 || *v8 != (__int64 *)v7 )
        __fastfail(3u);
      *v8 = v6;
      v6[1] = (__int64)v8;
      v7[1] = 0LL;
      *v7 = v4;
      v4 = (__int64 *)v7;
      _InterlockedAdd16((volatile signed __int16 *)v7 - 70, 1u);
    }
    while ( v6 != &KiUpdateVpThreadPriorityListHead );
  }
  KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
  v24 = 0LL;
  while ( v4 )
  {
    v12 = v4;
    v4 = (__int64 *)*v4;
    v13 = (ULONG_PTR)(v12 - 126);
    *(_QWORD *)(v13 + 1008) = 1LL;
    _InterlockedOr(v22, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v16 = SchedulerAssist[6];
          SchedulerAssist[6] = v16 + 1;
          if ( v16 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
        break;
      v17 = CurrentPrcb->SchedulerAssist;
      if ( v17 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = v17[6] - 1;
          v17[6] = v18;
          if ( !v18 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v23, v9, v10, v11);
      while ( *(_QWORD *)(v13 + 64) );
    }
    if ( (*(_DWORD *)(v13 + 120) & 0x400000) != 0 )
      KiUpdateVpBackingThreadPriorityFromTopLevel(v13);
    KiReleaseThreadLockSafe(v13);
    _InterlockedDecrement16((volatile signed __int16 *)(v13 + 868));
  }
  v19 = KeGetCurrentPrcb();
  v20 = 0;
  v21 = v24;
  if ( v24 )
  {
    v24 = (_QWORD *)*v24;
    do
    {
      KiDeferredReadySingleThread((__int64)v19, (ULONG_PTR)(v21 - 27), (__int64)&v24);
      v21 = v24;
      ++v20;
      if ( v24 )
        v24 = (_QWORD *)*v24;
      if ( (v20 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&v19->DeferredDispatchInterrupts.Level);
    }
    while ( v21 );
  }
  KiFlushSoftwareInterruptBatch(&v19->DeferredDispatchInterrupts.Level);
  if ( v19->NextThread && !v19->DpcRoutineActive )
  {
    if ( v19->NestingLevel )
    {
      v19->InterruptRequest = 1;
    }
    else
    {
      v25[0] = 5;
      *(_OWORD *)&v25[1] = 0LL;
      HalpInterruptSendIpi(v25, 0x2Fu);
    }
  }
}
