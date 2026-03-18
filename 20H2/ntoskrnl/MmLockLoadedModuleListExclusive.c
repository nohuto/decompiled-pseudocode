/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x140371D6C
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x1403719EC (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x140371B54 (MiProcessLoaderEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1403724F8 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionRemoveImage @ 0x14038A8A8 (MiSessionRemoveImage.c)
 *     MiSessionInsertImage @ 0x1403A20B4 (MiSessionInsertImage.c)
 *     MiShowBadMapper @ 0x14052B6EC (MiShowBadMapper.c)
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListExclusive(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v2; // cl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
  {
    v2 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v2 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (v2 + 1)) - 1) & 0xFFFC;
      }
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
}
