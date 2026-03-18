/*
 * XREFs of KiAbApplyWakeupBoost @ 0x1403597CC
 * Callers:
 *     KeAbPreWakeupThread @ 0x140359790 (KeAbPreWakeupThread.c)
 *     ExpWakePushLock @ 0x140359F70 (ExpWakePushLock.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14062D548 (EtwTraceAutoBoostSetFloor.c)
 */

void __fastcall KiAbApplyWakeupBoost(char a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rax
  char v7; // r12
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r15
  char v10; // r14
  struct _KPRCB *v11; // rdi
  _QWORD *v12; // rbx
  char v13; // si
  int v14; // ebp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v16; // rcx
  char v17; // cl
  _DWORD *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+98h] [rbp+10h] BYREF
  int v22; // [rsp+A0h] [rbp+18h]
  _QWORD *v23; // [rsp+A8h] [rbp+20h] BYREF

  v22 = a3;
  v4 = a3;
  v5 = a2;
  if ( (*(_BYTE *)(a2 + 19) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v6 = *(unsigned __int8 *)(a2 + 16);
    v23 = 0LL;
    v7 = 32;
    v8 = a2 - 96 * v6 - 1696;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    v10 = a1;
    if ( a1 > 30 )
      v10 = 30;
    if ( *(char *)(v8 + 563) < v10 )
    {
      v14 = 1 << (v10 - 1);
      if ( (v14 & *(_DWORD *)(v5 + 88) & 0x3FFFFFFF) == 0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = 0;
        v7 = *(_BYTE *)(v8 + 195);
        while ( 1 )
        {
          v16 = CurrentPrcb->SchedulerAssist;
          if ( v16 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v19 = v16[6];
              v16[6] = v19 + 1;
              if ( v19 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
            break;
          v18 = CurrentPrcb->SchedulerAssist;
          if ( v18 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v20 = v18[6] - 1;
              v18[6] = v20;
              if ( !v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v21, a2, a3, (__int64)SchedulerAssist);
          while ( *(_QWORD *)(v8 + 64) );
        }
        v17 = *(_BYTE *)(v10 + v8 + 824);
        if ( v17 == -1 )
          KeBugCheckEx(0x157u, v8, v10, 1uLL, 0LL);
        *(_BYTE *)(v10 + v8 + 824) = v17 + 1;
        *(_DWORD *)(v8 + 856) |= 1 << v10;
        if ( *(char *)(v8 + 195) < v10 )
          KiSetPriorityThread((_KTHREAD *)v8, (__int64)&v23, v10);
        KiReleaseThreadLockSafe(v8);
        *(_DWORD *)(v5 + 88) |= v14 & 0x3FFFFFFF;
      }
      v4 = v22;
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v7 != 32 )
    {
      LOBYTE(a3) = v10;
      EtwTraceAutoBoostSetFloor(v8, *(_QWORD *)v5 & 0xFFFFFFFC, a3, 0, 0, v7, 0, 0, 1, 0);
    }
    v11 = KeGetCurrentPrcb();
    if ( v4 )
    {
      v12 = v23;
      v13 = 0;
      if ( v23 )
      {
        v23 = (_QWORD *)*v23;
        do
        {
          KiDeferredReadySingleThread((__int64)v11, (ULONG_PTR)(v12 - 27), (__int64)&v23);
          v12 = v23;
          ++v13;
          if ( v23 )
            v23 = (_QWORD *)*v23;
          if ( (v13 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch(&v11->DeferredDispatchInterrupts.Level);
        }
        while ( v12 );
      }
      KiFlushSoftwareInterruptBatch(&v11->DeferredDispatchInterrupts.Level);
    }
    else
    {
      KiProcessDeferredReadyList((__int64)v11, &v23, CurrentIrql);
    }
  }
}
