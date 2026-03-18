/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x1402D8E9C
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x140259480 (RtlRemoveInvertedFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x1402D8ABC (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x1402D8C20 (MiProcessLoaderEntry.c)
 *     MiUpdateDriverLoadInProgress @ 0x1402D8E2C (MiUpdateDriverLoadInProgress.c)
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x1402DBD88 (MiSessionRemoveImage.c)
 *     MiShowBadMapper @ 0x140593B18 (MiShowBadMapper.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MmLockLoadedModuleListExclusive(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v3; // dl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    v3 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v3 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (v3 + 1)) - 1) & 0xFFFC;
      }
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
  *a1 = CurrentIrql;
}
