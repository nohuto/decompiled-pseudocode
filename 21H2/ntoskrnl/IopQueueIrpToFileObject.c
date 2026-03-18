/*
 * XREFs of IopQueueIrpToFileObject @ 0x140211BD0
 * Callers:
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 */

char __fastcall IopQueueIrpToFileObject(__int64 a1, __int64 a2, char a3)
{
  volatile signed __int32 *v4; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _KPROCESS *Process; // r14
  signed __int64 BugCheckParameter4; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_SystemAffinityTokenListHead; // rbp
  signed __int64 v17; // rbx
  signed __int64 v18; // rax
  signed __int64 v19; // r8
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  _DWORD *SchedulerAssist; // r9
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (volatile signed __int32 *)(a2 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = v9[6];
        v9[6] = v25 + 1;
        if ( v25 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v4, 0LL) )
    {
      v24 = CurrentPrcb->SchedulerAssist;
      if ( v24 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v26 = v24[6] - 1;
          v24[6] = v26;
          if ( !v26 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v4);
    }
  }
  if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 || a3 && !*(_QWORD *)(a2 + 176) )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v32 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    v10 = (_QWORD *)(a2 + 192);
    v11 = *(_QWORD *)(a2 + 192);
    v12 = (_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v11 + 8) != a2 + 192 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(a1 + 40) = v10;
    *(_QWORD *)(v11 + 8) = v12;
    *v10 = v12;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].ExtendedFeatureDisableMask);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
    CurrentThread = KeGetCurrentThread();
    p_SystemAffinityTokenListHead = (volatile signed __int64 *)&CurrentThread[-1].SystemAffinityTokenListHead;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)CurrentThread - 48);
    v17 = _InterlockedIncrement64(p_SystemAffinityTokenListHead);
    if ( v17 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(p_SystemAffinityTokenListHead + 6), 0x10uLL, v17);
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
      KiReleaseSpinLockInstrumented(v4, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    v20 = KeGetCurrentPrcb();
    v21 = v20->SchedulerAssist;
    if ( v21 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v27 = v21[6] - 1;
        v21[6] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v32 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 1;
  }
}
