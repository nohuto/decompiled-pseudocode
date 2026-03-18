/*
 * XREFs of MiDeleteProcessLargePageCache @ 0x140216DA0
 * Callers:
 *     MiDeleteWorkingSetList @ 0x140216D54 (MiDeleteWorkingSetList.c)
 * Callees:
 *     MiPruneProcessLargePageCaches @ 0x140267594 (MiPruneProcessLargePageCaches.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteProcessLargePageCache(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  KIRQL v3; // al
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v1 = *(_QWORD **)(*(_QWORD *)(a1 + 1680) + 328LL);
  if ( v1 )
  {
    v2 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 1838));
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 15892));
    v4 = (_QWORD *)v1[1];
    v5 = v3;
    v6 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v4 != v1 )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 15892));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    MiPruneProcessLargePageCaches(v2, 0LL);
    ExFreePoolWithTag(v1, 0);
  }
}
