/*
 * XREFs of MiReturnEnclavePage @ 0x1405A9F00
 * Callers:
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MiAllocateEnclavePages @ 0x1405A828C (MiAllocateEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140A6A948 (MiReturnReservedEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140B5229C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiSetPfnBlink @ 0x140313CA0 (MiSetPfnBlink.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnEnclavePage(ULONG_PTR a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = 48 * a1 - 0x220000000000LL;
  v3 = (unsigned __int8)MiLockPageInline(v2);
  MiSetPfnBlink(v2, 0LL, 1);
  MiInsertPageInFreeOrZeroedList(a1, 256);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
