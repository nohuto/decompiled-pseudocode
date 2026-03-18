/*
 * XREFs of KiAbApplyWakeupBoost @ 0x140242F4C
 * Callers:
 *     ExpWakePushLock @ 0x140242B70 (ExpWakePushLock.c)
 *     KeAbPreWakeupThread @ 0x140242F10 (KeAbPreWakeupThread.c)
 * Callees:
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402BE630 (KiProcessDeferredReadyList.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1405A5ABC (EtwTraceAutoBoostSetFloor.c)
 */

void __fastcall KiAbApplyWakeupBoost(char a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  int v4; // r13d
  __int64 v6; // rax
  char v7; // r12
  ULONG_PTR v8; // rbx
  unsigned __int8 CurrentIrql; // r15
  char v10; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v12; // rcx
  char v13; // cl
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+98h] [rbp+10h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a3;
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v6 = *(unsigned __int8 *)(a2 + 24);
    v19 = 0LL;
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
    if ( *(char *)(v8 + 563) < v10 && ((1 << (v10 - 1)) & 0x7FFF & *(_WORD *)(a2 + 88)) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = 0;
      v7 = *(_BYTE *)(v8 + 195);
      while ( 1 )
      {
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v12[6];
            v12[6] = v16 + 1;
            if ( v16 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
          break;
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v17 = v15[6] - 1;
            v15[6] = v17;
            if ( !v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v18);
        while ( *(_QWORD *)(v8 + 64) );
      }
      v13 = *(_BYTE *)(v10 + v8 + 824);
      if ( v13 == -1 )
        KeBugCheckEx(0x157u, v8, v10, 1uLL, 0LL);
      *(_BYTE *)(v10 + v8 + 824) = v13 + 1;
      *(_DWORD *)(v8 + 856) |= 1 << v10;
      if ( *(char *)(v8 + 195) < v10 )
        KiSetPriorityThread(v8, &v19, (unsigned int)v10);
      KiReleaseThreadLockSafe(v8);
      a3 = 0x7FFFLL;
      *(_WORD *)(a2 + 88) ^= (*(_WORD *)(a2 + 88) ^ (*(_WORD *)(a2 + 88) & 0x7FFF | (1 << (v10 - 1)))) & 0x7FFF;
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v7 != 32 )
    {
      LOBYTE(a3) = v10;
      EtwTraceAutoBoostSetFloor(v8, *(_QWORD *)(a2 + 32) & 0xFFFFFFFC, a3, 0, 0, v7, 0, 0, 1, 0);
    }
    v14 = KeGetCurrentPrcb();
    if ( v4 )
    {
      KiReadyDeferredReadyList(v14, &v19);
    }
    else
    {
      LOBYTE(a3) = CurrentIrql;
      KiProcessDeferredReadyList(v14, &v19, a3, SchedulerAssist);
    }
  }
}
