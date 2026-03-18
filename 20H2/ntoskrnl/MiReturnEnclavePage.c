/*
 * XREFs of MiReturnEnclavePage @ 0x140549920
 * Callers:
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D49C8 (MiCopyPagesIntoEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x1409B3E60 (MiReturnReservedEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A958EC (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140230190 (MiSetPfnBlink.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnEnclavePage(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  v5 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v6 = (unsigned __int8)MiLockPageInline(v5, a2, a3, a4);
  MiSetPfnBlink(v5, 0LL, 1);
  MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 256);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
