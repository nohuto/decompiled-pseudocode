/*
 * XREFs of MiGetSharedProtos @ 0x1403A6208
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiEmptyPageAccessLog @ 0x14025BC70 (MiEmptyPageAccessLog.c)
 *     MiGetImageProtoProtection @ 0x1402BB36C (MiGetImageProtoProtection.c)
 *     MiComputeImagePteIndex @ 0x1402FCD40 (MiComputeImagePteIndex.c)
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 *     MiStartingOffset @ 0x14031E410 (MiStartingOffset.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     MiIdentifyPfn @ 0x140349250 (MiIdentifyPfn.c)
 *     MiFaultGetFileExtents @ 0x1405483F0 (MiFaultGetFileExtents.c)
 *     MiMakePerSessionProtoPte @ 0x14055B4A0 (MiMakePerSessionProtoPte.c)
 *     MiPfAllocateMdls @ 0x1406E8CA0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x1406E9250 (MiAddMappedPtes.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A628C (MiGetSharedProtosAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
