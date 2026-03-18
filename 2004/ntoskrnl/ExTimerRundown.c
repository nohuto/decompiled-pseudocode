/*
 * XREFs of ExTimerRundown @ 0x1402FA024
 * Callers:
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140212170 (ObpTraceObjectDereferenceIfActive.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpCancelTimer @ 0x1403003F0 (ExpCancelTimer.c)
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
  unsigned __int64 v13; // r12
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  ULONG_PTR v18; // rbx
  __int64 v19; // rdx
  signed __int64 BugCheckParameter4; // rcx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax

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
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 64));
    if ( (*(_BYTE *)(v6 + 304) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v6 + 80) )
      v12 = ExpCancelTimer((PKTIMER)v6) + 1;
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v11 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
    }
    __writecr8(v13);
    v18 = v6 - 48;
    ObpTraceObjectDereferenceIfActive(v6 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), -v12) - v12;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(v18 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v6 - 48) >> 8)],
          v6,
          6uLL,
          *(_QWORD *)(v18 + 8));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v6, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v6 - 48, v19);
    }
    v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  }
  KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && v3 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (v3 + 1));
        v11 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  result = v3;
  __writecr8(v3);
  return result;
}
