/*
 * XREFs of MiLockAndInsertPageInFreeList @ 0x1403CC0F0
 * Callers:
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiFreeBootPageTable @ 0x140B1AFD8 (MiFreeBootPageTable.c)
 *     MiFreeEmptyBootPageTable @ 0x140B51A8C (MiFreeEmptyBootPageTable.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockAndInsertPageInFreeList(__int64 a1)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v3 = (unsigned __int8)MiLockPageInline(a1);
  MiInsertPageInFreeOrZeroedList(v2, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
