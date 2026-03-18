/*
 * XREFs of IopQueueIrpToFileObject @ 0x1402EE060
 * Callers:
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140510ED8 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 */

char __fastcall IopQueueIrpToFileObject(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rdi
  volatile signed __int32 *v5; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _KPROCESS *Process; // r14
  signed __int64 BugCheckParameter4; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_SchedulerAssistPriorityFloor; // rbp
  signed __int64 v17; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // r8
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  v5 = (volatile signed __int32 *)(a2 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v5);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = v9[6];
        v9[6] = v24 + 1;
        if ( v24 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v5, 0LL) )
    {
      v23 = CurrentPrcb->SchedulerAssist;
      if ( v23 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = v23[6] - 1;
          v23[6] = v25;
          if ( !v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v5, a2, a3, (__int64)SchedulerAssist);
    }
  }
  if ( (*(_DWORD *)(v4 + 80) & 0x400) != 0 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)v5);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v30 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    v10 = (_QWORD *)(v4 + 192);
    v11 = *(_QWORD *)(v4 + 192);
    v12 = (_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v11 + 8) != v4 + 192 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(a1 + 40) = v10;
    *(_QWORD *)(v11 + 8) = v12;
    *v10 = v12;
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
    v17 = _InterlockedIncrement64(p_SchedulerAssistPriorityFloor);
    if ( v17 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(p_SchedulerAssistPriorityFloor + 6), 0x10uLL, v17);
    *(_DWORD *)(a1 + 16) |= 0x2000u;
    *(_QWORD *)(a1 + 88) = Process;
    v18 = *(_QWORD *)(a1 + 88);
    do
    {
      v19 = v18;
      v18 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 88),
              v18 & 0xFFFFFFFFFFFFFFF9uLL | ((v18 & 6) + 2),
              v18);
    }
    while ( v19 != v18 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v5, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
    v20 = KeGetCurrentPrcb();
    v21 = v20->SchedulerAssist;
    if ( v21 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v31 = v21[6] - 1;
        v21[6] = v31;
        if ( !v31 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v30 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 1;
  }
}
