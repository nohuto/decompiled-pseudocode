/*
 * XREFs of ExpTimerApcRoutine @ 0x140256D10
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpTimerApcRoutine(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  _QWORD *v7; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = a1 - 72;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 - 72 + 64));
  if ( (*(_BYTE *)(v3 + 304) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v3 + 80) )
  {
    if ( !*(_DWORD *)(v3 + 240) )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
      v6 = *(_QWORD *)(v3 + 224);
      v7 = *(_QWORD **)(v3 + 232);
      if ( *(_QWORD *)(v6 + 8) != v3 + 224 || *v7 != v3 + 224 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
      *(_BYTE *)(v3 + 304) &= ~1u;
    }
  }
  else
  {
    *a2 = 0LL;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v3 + 64));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return ObfDereferenceObjectWithTag((PVOID)v3, 0x746C6644u);
}
