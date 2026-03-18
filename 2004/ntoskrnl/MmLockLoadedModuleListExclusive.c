/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x14036FE1C
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x14036FA9C (RtlInsertInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x14036FC04 (MiProcessLoaderEntry.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1403705A8 (RtlRemoveInvertedFunctionTable.c)
 *     MiSessionRemoveImage @ 0x1403886E8 (MiSessionRemoveImage.c)
 *     MiSessionInsertImage @ 0x14039FBE4 (MiSessionInsertImage.c)
 *     MiShowBadMapper @ 0x140527D1C (MiShowBadMapper.c)
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
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
