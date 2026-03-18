/*
 * XREFs of MiLockIoPfnTree @ 0x1402165BC
 * Callers:
 *     MiIsProbeActive @ 0x140201144 (MiIsProbeActive.c)
 *     MiLookupIoPageNode @ 0x1402137E4 (MiLookupIoPageNode.c)
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiDeleteStaleCacheMaps @ 0x1405910C0 (MiDeleteStaleCacheMaps.c)
 *     MiFreezeIoPfnNode @ 0x140591724 (MiFreezeIoPfnNode.c)
 *     MiMakeIoRangePermanent @ 0x140591814 (MiMakeIoRangePermanent.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140591AD0 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiMarkHugeRangeTransition @ 0x140591C4C (MiMarkHugeRangeTransition.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

unsigned __int8 __fastcall MiLockIoPfnTree(char a1)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // r14

  if ( (a1 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  if ( (a1 & 1) != 0 )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1561) + 128LL));
  }
  else
  {
    v4 = qword_140C506E0;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(qword_140C506E0 + 112) + 128LL));
    v5 = 1;
    if ( (unsigned __int16)KeNumberNodes > 1u )
    {
      v6 = v4 + 232;
      do
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v6 + 128LL));
        v6 += 120LL;
        ++v5;
      }
      while ( v5 < (unsigned __int16)KeNumberNodes );
    }
  }
  return CurrentIrql;
}
