/*
 * XREFs of MiLockProtoPoolPage @ 0x140229D70
 * Callers:
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 *     MiDeleteSubsectionPages @ 0x14022A1F0 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiSoftFaultMappedView @ 0x14025AFC0 (MiSoftFaultMappedView.c)
 *     MiAllocateInPageSupport @ 0x14025EAF0 (MiAllocateInPageSupport.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiSectionCreated @ 0x140267074 (MiSectionCreated.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MiMakeImageReadOnly @ 0x1402F48E4 (MiMakeImageReadOnly.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiInitializeImageProtos @ 0x14031C75C (MiInitializeImageProtos.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x14035CCDC (MiDeletePerSessionProtos.c)
 *     MiDeleteMergedPte @ 0x140364BB8 (MiDeleteMergedPte.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1403688A4 (MiResolveProtoCombine.c)
 *     MiGetPageFileSectionForReservation @ 0x1403851BC (MiGetPageFileSectionForReservation.c)
 *     MiPurgeImageSection @ 0x1403A2634 (MiPurgeImageSection.c)
 *     MiInitializeDynamicPfns @ 0x1405290D0 (MiInitializeDynamicPfns.c)
 *     MiReplaceLockedPage @ 0x14053829C (MiReplaceLockedPage.c)
 *     MiEliminateStaleExtents @ 0x14053B3F8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14053B4DC (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x1405432D0 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x14054FAF0 (MiInitializeProtoPfn.c)
 * Callees:
 *     MiLockOwnedProtoPage @ 0x140229F90 (MiLockOwnedProtoPage.c)
 *     MiChargeForLockedPage @ 0x14022CA80 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1402318D0 (MiAreChargesNeededToLockPage.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 Process; // rdx
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v13; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v25 = *v3;
  v4 = v25 & 1;
  do
  {
    if ( !v4 )
      return 0LL;
    v5 = v25;
    if ( (v25 & 0x200) != 0 )
      return 0LL;
    v6 = MiPteInShadowRange(&v25);
    if ( v6
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v25 >> 3) & 0x1FF));
        if ( (v16 & 0x20) != 0 )
          v5 |= 0x20uLL;
        if ( (v16 & 0x42) != 0 )
          v5 |= 0x42uLL;
      }
      else
      {
        v5 = v25;
      }
    }
    v9 = (v5 >> 12) & 0xFFFFFFFFFLL;
    Process = 6 * v9;
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
      Process = (-1LL << (CurrentIrql + 1)) & 4;
      v7 = (unsigned int)Process | SchedulerAssist[5];
      SchedulerAssist[5] = v7;
    }
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23, Process);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
  }
  else
  {
    v24 = 0;
    CurrentIrql = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24, Process);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
  }
  v13 = *v3;
  v25 = v13;
  if ( (v13 & 1) == 0 || (v13 & 0x200) != 0 )
    goto LABEL_24;
  if ( v6 )
  {
    if ( (MiFlags & 0xC00000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 912) != 1 && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v7 = *(_QWORD *)(Process + 1928);
        if ( v7 )
        {
          v17 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)&v25 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v13 |= 0x20uLL;
          if ( (v17 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
        else
        {
          v13 = v25;
        }
      }
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
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v20 = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v22 = (v21 & v20[5]) == 0;
            v20[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v11, Process, v7, SchedulerAssist)
    || (unsigned int)MiChargeForLockedPage(v11, 1LL) )
  {
    ++*(_WORD *)(v11 + 32);
  }
  if ( CurrentIrql != 17 )
    *a2 = CurrentIrql;
  MiLockOwnedProtoPage(v11, CurrentIrql);
  return 48 * v9 - 0x58000000000LL;
}
