/*
 * XREFs of ExTimerRundown @ 0x140356004
 * Callers:
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14026B1C0 (ObpTraceObjectDereferenceIfActive.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObpDeferObjectDeletion @ 0x14030B7E0 (ObpDeferObjectDeletion.c)
 *     ExpCancelTimer @ 0x14033F390 (ExpCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 ExTimerRundown()
{
  struct _KTHREAD *CurrentThread; // r13
  KIRQL v1; // al
  void **p_StackBase; // r14
  KIRQL v3; // bl
  _QWORD *v4; // rax
  __int64 result; // rax
  ULONG_PTR v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned __int64 v16; // r12
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  ULONG_PTR v21; // rbx
  signed __int64 BugCheckParameter4; // rcx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax

  CurrentThread = KeGetCurrentThread();
  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  p_StackBase = &CurrentThread[1].StackBase;
  while ( 1 )
  {
    v3 = v1;
    v4 = *p_StackBase;
    if ( *p_StackBase == p_StackBase )
      break;
    v6 = (ULONG_PTR)(v4 - 28);
    ObfReferenceObjectWithTag(v4 - 28, 0x746C6644u);
    KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v3 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    v12 = 1;
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 64));
    if ( (*(_BYTE *)(v6 + 304) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v6 + 80) )
      v12 = ExpCancelTimer((PKTIMER)v6, v13, v14, v15) + 1;
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v11 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    __writecr8(v16);
    v21 = v6 - 48;
    ObpTraceObjectDereferenceIfActive(v6 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), -v12) - v12;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(v21 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v6 - 48) >> 8)],
          v6,
          6uLL,
          *(_QWORD *)(v21 + 8));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v6, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v6 - 48);
    }
    v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && v3 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (v3 + 1));
        v11 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  result = v3;
  __writecr8(v3);
  return result;
}
