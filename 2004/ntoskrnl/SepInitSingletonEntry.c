/*
 * XREFs of SepInitSingletonEntry @ 0x140269610
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140614528 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140269674 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SepInitSingletonEntry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  KIRQL v5; // al
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  result = SepGetSingletonEntryFromIndexNumber();
  v4 = result;
  if ( result )
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)result);
    *(_QWORD *)(v4 + 16) = 0LL;
    v6 = v5;
    *(_QWORD *)(v4 + 8) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v10 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  return result;
}
