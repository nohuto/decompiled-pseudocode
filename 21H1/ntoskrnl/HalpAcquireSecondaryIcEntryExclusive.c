/*
 * XREFs of HalpAcquireSecondaryIcEntryExclusive @ 0x1404CB450
 * Callers:
 *     HalpDeleteSecondaryIcEntry @ 0x1404CB740 (HalpDeleteSecondaryIcEntry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140375CF0 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpAcquireSecondaryIcEntryExclusive(volatile signed __int32 *a1, _BYTE *a2)
{
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  _InterlockedIncrement(a1 + 29);
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 30), Executive, 0, 0, 0LL);
    v4 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
    result = (unsigned int)_InterlockedCompareExchange(a1 + 28, 2, 1);
    if ( (_DWORD)result == 1 )
      break;
    KxReleaseSpinLock(&SecondaryIcListSpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v10 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  _InterlockedDecrement(a1 + 29);
  *a2 = v4;
  return result;
}
