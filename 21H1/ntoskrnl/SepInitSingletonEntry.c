/*
 * XREFs of SepInitSingletonEntry @ 0x140339310
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1406F7914 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140339374 (SepGetSingletonEntryFromIndexNumber.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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

  result = SepGetSingletonEntryFromIndexNumber(a1);
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
