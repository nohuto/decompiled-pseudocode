/*
 * XREFs of MiFlushAcquire @ 0x140351918
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceSubsection @ 0x140248BFC (MiReferenceSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFlushAcquire(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  volatile LONG *v3; // rbp
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v13; // eax
  _DWORD *SchedulerAssist; // r8
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  int v18; // eax
  _DWORD *v19; // r8

  v3 = (volatile LONG *)(a1 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 == -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    v9 = 0;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
  }
  else
  {
    if ( a2 )
    {
      MiReferenceSubsection(a2);
      MiReferenceSubsection(a3);
      v8 = *(_QWORD *)(a1 + 40);
    }
    *(_QWORD *)(a1 + 40) = v8 + 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v19 = v17->SchedulerAssist;
          v15 = (v18 & v19[5]) == 0;
          v19[5] &= v18;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
    v9 = 1;
  }
  __writecr8(v7);
  return v9;
}
