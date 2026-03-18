/*
 * XREFs of MiGetSharedProtos @ 0x1403A5948
 * Callers:
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     MiComputeImagePteIndex @ 0x14024EB60 (MiComputeImagePteIndex.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiGetImageProtoProtection @ 0x140318D7C (MiGetImageProtoProtection.c)
 *     MiFaultGetFileExtents @ 0x1405468F0 (MiFaultGetFileExtents.c)
 *     MiMakePerSessionProtoPte @ 0x1405599D0 (MiMakePerSessionProtoPte.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1406585B0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x140658B60 (MiAddMappedPtes.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A59CC (MiGetSharedProtosAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetSharedProtos(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 SharedProtosAtDpcLevel; // rsi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  SharedProtosAtDpcLevel = MiGetSharedProtosAtDpcLevel(a1, a2, a3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return SharedProtosAtDpcLevel;
}
