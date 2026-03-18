/*
 * XREFs of MiUnlockIoPfnTree @ 0x140216544
 * Callers:
 *     MiIsProbeActive @ 0x140201144 (MiIsProbeActive.c)
 *     MiLookupIoPageNode @ 0x1402137E4 (MiLookupIoPageNode.c)
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiDeleteStaleCacheMaps @ 0x1405910C0 (MiDeleteStaleCacheMaps.c)
 *     MiMakeIoRangePermanent @ 0x140591814 (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140591AD0 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiMarkHugeRangeTransition @ 0x140591C4C (MiMarkHugeRangeTransition.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockIoPfnTree(unsigned __int8 a1, char a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v9; // eax
  bool v10; // zf

  v2 = a1;
  if ( (a2 & 1) != 0 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1561) + 128LL));
  }
  else
  {
    v4 = qword_140C506E0;
    v5 = 0;
    if ( KeNumberNodes != 1 )
    {
      do
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v4 + 112) + 128LL));
        v4 += 120LL;
        ++v5;
      }
      while ( v5 < (unsigned int)(unsigned __int16)KeNumberNodes - 1 );
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v4 + 112) + 128LL));
  }
  if ( (a2 & 4) == 0 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v10 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
