/*
 * XREFs of KiSetThreadSchedulingGroup @ 0x14035EE9C
 * Callers:
 *     KeSetProcessSchedulingGroup @ 0x14035EC68 (KeSetProcessSchedulingGroup.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140210C6C (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x1402F69A0 (KiEnterDeferredReadyState.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiAcquireThreadStateLock @ 0x140344DD0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x14035D0F8 (KiReleaseThreadStateLock.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035EF6C (KiRemoveThreadFromSchedulingGroup.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14035F144 (KeUpdateThreadSchedulingProperties.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSetThreadSchedulingGroup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB *v8; // r14
  _DWORD *SchedulerAssist; // rcx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rsi
  char v13; // bl
  __int64 v14; // rcx
  volatile signed __int64 *v15; // r11
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  volatile signed __int32 *v19; // rdi
  char v20; // si
  int v21; // [rsp+58h] [rbp+38h] BYREF
  volatile signed __int64 *v22; // [rsp+60h] [rbp+40h] BYREF
  __int64 v23; // [rsp+68h] [rbp+48h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  if ( !a2 )
    return KiRemoveThreadFromSchedulingGroup(a1);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0LL;
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v17[6] - 1;
        v17[6] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v21, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v10 = KiAcquireThreadStateLock(a1, (__int64)&v23, (volatile signed __int32 **)&v22, a4);
  *(_QWORD *)(a1 + 104) = a2;
  LOBYTE(v11) = v10;
  _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  v12 = v23;
  v13 = v10;
  KeUpdateThreadSchedulingProperties(a1, v11, v23);
  v15 = v22;
  if ( v13 == 1 && v22 && (*(_DWORD *)(a1 + 120) & 0x2000) == 0 )
  {
    v8 = KeGetCurrentPrcb();
    KiRemoveThreadFromSharedReadyQueue((__int64)v22, a1, *(_BYTE *)(a1 + 195));
    KiEnterDeferredReadyState(a1);
    v12 = v23;
  }
  KiReleaseThreadStateLock(v14, v12, v15);
  result = KiReleaseThreadLockSafe(a1);
  if ( v8 )
  {
    v19 = (volatile signed __int32 *)(a1 + 216);
    v20 = 0;
    *(_QWORD *)v19 = 0LL;
    v22 = 0LL;
    do
    {
      KiDeferredReadySingleThread((__int64)v8, (ULONG_PTR)(v19 - 54), (__int64)&v22);
      v19 = (volatile signed __int32 *)v22;
      ++v20;
      if ( v22 )
        v22 = (volatile signed __int64 *)*v22;
      if ( (v20 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&v8->DeferredDispatchInterrupts.Level);
    }
    while ( v19 );
    return KiFlushSoftwareInterruptBatch(&v8->DeferredDispatchInterrupts.Level);
  }
  return result;
}
