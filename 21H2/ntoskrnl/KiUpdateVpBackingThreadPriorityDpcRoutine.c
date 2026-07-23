/*
 * XREFs of KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x140520D60
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x140520F00 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 *v4; // rbx
  __int64 *v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 **v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rdi
  ULONG_PTR v13; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  struct _KPRCB *v19; // rbx
  signed __int32 v20[8]; // [rsp+0h] [rbp-38h] BYREF
  int v21; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-10h] BYREF

  v4 = 0LL;
  KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
  v5 = (__int64 *)KiUpdateVpThreadPriorityListHead;
  while ( v5 != &KiUpdateVpThreadPriorityListHead )
  {
    v6 = v5;
    v5 = (__int64 *)*v5;
    v7 = *v6;
    v8 = (__int64 **)v6[1];
    if ( *(__int64 **)(*v6 + 8) != v6 || *v8 != v6 )
      __fastfail(3u);
    *v8 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    v6[1] = 0LL;
    *v6 = (__int64)v4;
    v4 = v6;
    _InterlockedAdd16((volatile signed __int16 *)v6 - 70, 1u);
  }
  KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
  v22 = 0LL;
  while ( v4 )
  {
    v12 = v4;
    v4 = (__int64 *)*v4;
    v13 = (ULONG_PTR)(v12 - 126);
    *(_QWORD *)(v13 + 1008) = 1LL;
    _InterlockedOr(v20, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = 0;
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
        KeYieldProcessorEx(&v21, v9, v10, v11);
      while ( *(_QWORD *)(v13 + 64) );
    }
    if ( (*(_DWORD *)(v13 + 120) & 0x400000) != 0 )
      KiUpdateVpBackingThreadPriorityFromTopLevel(v13);
    KiReleaseThreadLockSafe(v13);
    _InterlockedDecrement16((volatile signed __int16 *)(v13 + 868));
  }
  v19 = KeGetCurrentPrcb();
  KiReadyDeferredReadyList((__int64)v19, &v22);
  if ( v19->NextThread )
  {
    if ( !v19->DpcRoutineActive )
      KiRequestSoftwareInterrupt(v19, 2);
  }
}
