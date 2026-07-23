/*
 * XREFs of EmonReleaseProfileResources @ 0x1404D4340
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EmonReleaseProfileResourcesInternal @ 0x1404D4420 (EmonReleaseProfileResourcesInternal.c)
 */

__int64 __fastcall EmonReleaseProfileResources(_QWORD *a1)
{
  int v2; // esi
  KIRQL v3; // al
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v2 = EmonReleaseProfileResourcesInternal(a1);
  if ( v2 >= 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&EmonReservedResourcesLock);
    v4 = (_QWORD *)a1[1];
    v5 = v3;
    v6 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v4 != a1 )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    KxReleaseSpinLock(&EmonReservedResourcesLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = (unsigned int)(v5 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    HalpMmAllocCtxFree(v7, (__int64)a1);
  }
  return (unsigned int)v2;
}
