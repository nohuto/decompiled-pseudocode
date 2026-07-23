/*
 * XREFs of MiLockProtoPoolPage @ 0x140324E50
 * Callers:
 *     MiSoftFaultMappedView @ 0x14020A740 (MiSoftFaultMappedView.c)
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x14024D674 (MiDeletePerSessionProtos.c)
 *     MiMakeImageReadOnly @ 0x140257490 (MiMakeImageReadOnly.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiInitializeImageProtos @ 0x14025BF1C (MiInitializeImageProtos.c)
 *     MiSectionCreated @ 0x140299C1C (MiSectionCreated.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiDeleteSubsectionPages @ 0x1402DD9C0 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x1403248F0 (MiAllocateInPageSupport.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 *     MiDeleteMergedPte @ 0x140366FF8 (MiDeleteMergedPte.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036ACE4 (MiResolveProtoCombine.c)
 *     MiGetPageFileSectionForReservation @ 0x140387C10 (MiGetPageFileSectionForReservation.c)
 *     MiPurgeImageSection @ 0x1403A5514 (MiPurgeImageSection.c)
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
 *     MiReplaceLockedPage @ 0x14053D9AC (MiReplaceLockedPage.c)
 *     MiEliminateStaleExtents @ 0x140540B08 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x140540BEC (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x1405489E0 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x1405551D0 (MiInitializeProtoPfn.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockOwnedProtoPage @ 0x140325070 (MiLockOwnedProtoPage.c)
 *     MiAreChargesNeededToLockPage @ 0x14032E180 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1403337F0 (MiChargeForLockedPage.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 *v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  int v6; // ebp
  __int64 v7; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v13; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  struct _LIST_ENTRY *v17; // r8
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp+20h] BYREF

  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v26 = *v3;
  v4 = v26 & 1;
  do
  {
    if ( !v4 )
      return 0LL;
    v5 = v26;
    if ( (v26 & 0x200) != 0 )
      return 0LL;
    v6 = MiPteInShadowRange(&v26);
    if ( v6
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v26 >> 3) & 0x1FF));
        if ( (v16 & 0x20) != 0 )
          v5 |= 0x20uLL;
        if ( (v16 & 0x42) != 0 )
          v5 |= 0x42uLL;
      }
      else
      {
        v5 = v26;
      }
    }
    v9 = (v5 >> 12) & 0xFFFFFFFFFLL;
    v10 = 6 * v9;
  }
  while ( (*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v11 = 48 * v9 - 0x58000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
      v7 = (unsigned int)v10 | SchedulerAssist[5];
      SchedulerAssist[5] = v7;
    }
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24, v10, v7, (__int64)SchedulerAssist);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
  }
  else
  {
    v25 = 0;
    CurrentIrql = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v25, v10, v7, (__int64)SchedulerAssist);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
  }
  v13 = *v3;
  v26 = v13;
  if ( (v13 & 1) == 0 || (v13 & 0x200) != 0 )
    goto LABEL_24;
  if ( v6
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    v17 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v17 )
    {
      v18 = *((_QWORD *)&v17->Flink + (((unsigned __int64)&v26 >> 3) & 0x1FF));
      if ( (v18 & 0x20) != 0 )
        v13 |= 0x20uLL;
      if ( (v18 & 0x42) != 0 )
        v13 |= 0x42uLL;
    }
    else
    {
      v13 = v26;
    }
  }
  if ( v9 != ((v13 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_24:
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v11) || (unsigned int)MiChargeForLockedPage(v11, 1LL) )
    ++*(_WORD *)(v11 + 32);
  if ( CurrentIrql != 17 )
    *a2 = CurrentIrql;
  MiLockOwnedProtoPage(v11, CurrentIrql);
  return 48 * v9 - 0x58000000000LL;
}
