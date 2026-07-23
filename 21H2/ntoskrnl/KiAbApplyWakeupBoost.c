/*
 * XREFs of KiAbApplyWakeupBoost @ 0x1402FC6CC
 * Callers:
 *     ExpWakePushLock @ 0x1402FC2F0 (ExpWakePushLock.c)
 *     KeAbPreWakeupThread @ 0x1402FC690 (KeAbPreWakeupThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1405A771C (EtwTraceAutoBoostSetFloor.c)
 */

void __fastcall KiAbApplyWakeupBoost(char a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  int v4; // r13d
  __int64 v6; // rax
  char v7; // r12
  ULONG_PTR v8; // rbx
  unsigned __int8 CurrentIrql; // r15
  signed __int8 v10; // bp
  __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v13; // rcx
  char v14; // cl
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v20; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a3;
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v6 = *(unsigned __int8 *)(a2 + 24);
    v20 = 0LL;
    v7 = 32;
    v8 = a2 - 16 * v6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    v10 = a1;
    if ( a1 > 15 )
      v10 = 15;
    if ( *(char *)(v8 + 563) < v10 )
    {
      v11 = (1 << (v10 - 1)) & 0x7FFF;
      if ( ((1 << (v10 - 1)) & 0x7FFF & *(_WORD *)(a2 + 88)) == 0 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = 0;
        v7 = *(_BYTE *)(v8 + 195);
        while ( 1 )
        {
          v13 = CurrentPrcb->SchedulerAssist;
          if ( v13 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v17 = v13[6];
              v13[6] = v17 + 1;
              if ( v17 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
            break;
          v16 = CurrentPrcb->SchedulerAssist;
          if ( v16 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v18 = v16[6] - 1;
              v16[6] = v18;
              if ( !v18 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v19, v11, a3, (__int64)SchedulerAssist);
          while ( *(_QWORD *)(v8 + 64) );
        }
        v14 = *(_BYTE *)(v10 + v8 + 824);
        if ( v14 == -1 )
          KeBugCheckEx(0x157u, v8, v10, 1uLL, 0LL);
        *(_BYTE *)(v10 + v8 + 824) = v14 + 1;
        *(_DWORD *)(v8 + 856) |= 1 << v10;
        if ( *(char *)(v8 + 195) < v10 )
          KiSetPriorityThread((_KTHREAD *)v8, (__int64)&v20, v10);
        KiReleaseThreadLockSafe(v8);
        LODWORD(a3) = 0x7FFF;
        *(_WORD *)(a2 + 88) ^= (*(_WORD *)(a2 + 88) ^ (*(_WORD *)(a2 + 88) & 0x7FFF | (1 << (v10 - 1)))) & 0x7FFF;
      }
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v7 != 32 )
    {
      LOBYTE(a3) = v10;
      EtwTraceAutoBoostSetFloor(v8, *(_QWORD *)(a2 + 32) & 0xFFFFFFFC, a3, 0, 0, v7, 0, 0, 1, 0);
    }
    v15 = KeGetCurrentPrcb();
    if ( v4 )
      KiReadyDeferredReadyList((__int64)v15, &v20);
    else
      KiProcessDeferredReadyList((__int64)v15, (__int64)&v20, CurrentIrql);
  }
}
