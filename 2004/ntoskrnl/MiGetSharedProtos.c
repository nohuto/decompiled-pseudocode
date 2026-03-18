/*
 * XREFs of MiGetSharedProtos @ 0x1403A3578
 * Callers:
 *     MiIdentifyPfn @ 0x140206380 (MiIdentifyPfn.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     MiComputeImagePteIndex @ 0x140263C70 (MiComputeImagePteIndex.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiGetImageProtoProtection @ 0x1403476F0 (MiGetImageProtoProtection.c)
 *     MiFaultGetFileExtents @ 0x140542F20 (MiFaultGetFileExtents.c)
 *     MiMakePerSessionProtoPte @ 0x140556000 (MiMakePerSessionProtoPte.c)
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1406094B0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x14060AA90 (MiAddMappedPtes.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A35FC (MiGetSharedProtosAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
