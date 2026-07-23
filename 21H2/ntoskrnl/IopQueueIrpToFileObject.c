/*
 * XREFs of IopQueueIrpToFileObject @ 0x1402117D0
 * Callers:
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 */

char __fastcall IopQueueIrpToFileObject(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _KPROCESS *Process; // r14
  signed __int64 BugCheckParameter4; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_SchedulerAssistPriorityFloor; // rbp
  signed __int64 v15; // rdi
  signed __int64 v16; // rax
  signed __int64 v17; // r8
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  _DWORD *v21; // rcx
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  bool v29; // zf
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a2 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v3);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = v7[6];
        v7[6] = v23 + 1;
        if ( v23 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v3, 0LL) )
    {
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v24 = v21[6] - 1;
          v21[6] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v3);
    }
  }
  if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)v3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    v8 = (_QWORD *)(a2 + 192);
    v9 = *(_QWORD *)(a2 + 192);
    v10 = (_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v9 + 8) != a2 + 192 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(a1 + 40) = v8;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = v10;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].EndPadding[2]);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
    CurrentThread = KeGetCurrentThread();
    p_SchedulerAssistPriorityFloor = (volatile signed __int64 *)&CurrentThread[-1].SchedulerAssistPriorityFloor;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)CurrentThread - 48);
    v15 = _InterlockedIncrement64(p_SchedulerAssistPriorityFloor);
    if ( v15 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(p_SchedulerAssistPriorityFloor + 6), 0x10uLL, v15);
    *(_DWORD *)(a1 + 16) |= 0x2000u;
    *(_QWORD *)(a1 + 88) = Process;
    v16 = *(_QWORD *)(a1 + 88);
    do
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 88),
              v16 & 0xFFFFFFFFFFFFFFF9uLL | ((v16 & 6) + 2),
              v16);
    }
    while ( v17 != v16 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v3, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v30 = v19[6] - 1;
        v19[6] = v30;
        if ( !v30 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 1;
  }
}
