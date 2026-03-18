/*
 * XREFs of MiLockProtoPoolPage @ 0x1402CA9B0
 * Callers:
 *     MiSoftFaultMappedView @ 0x140202000 (MiSoftFaultMappedView.c)
 *     MiAllocateInPageSupport @ 0x140231FD0 (MiAllocateInPageSupport.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiTranslatePageForCopy @ 0x140251058 (MiTranslatePageForCopy.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 *     MiDeleteSubsectionPages @ 0x1402C7990 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiMakeImageReadOnly @ 0x140319024 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x14032D664 (MiDeletePerSessionProtos.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiInitializeImageProtos @ 0x140350EE8 (MiInitializeImageProtos.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiSectionCreated @ 0x1403563C4 (MiSectionCreated.c)
 *     MiDeleteMergedPte @ 0x140366B98 (MiDeleteMergedPte.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036A884 (MiResolveProtoCombine.c)
 *     MiGetPageFileSectionForReservation @ 0x140387368 (MiGetPageFileSectionForReservation.c)
 *     MiPurgeImageSection @ 0x1403A4B04 (MiPurgeImageSection.c)
 *     MiInitializeDynamicPfns @ 0x14052CAA0 (MiInitializeDynamicPfns.c)
 *     MiReplaceLockedPage @ 0x14053BC6C (MiReplaceLockedPage.c)
 *     MiEliminateStaleExtents @ 0x14053EDC8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14053EEAC (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x140546CA0 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x1405534C0 (MiInitializeProtoPfn.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A6B80 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1402AC1F0 (MiChargeForLockedPage.c)
 *     MiLockOwnedProtoPage @ 0x1402CABD0 (MiLockOwnedProtoPage.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 *v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  BOOL v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v10; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  _DWORD *SchedulerAssist; // r9
  struct _LIST_ENTRY *v15; // r8
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp+20h] BYREF

  v3 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v24 = *v3;
  v4 = v24 & 1;
  do
  {
    if ( !v4 )
      return 0LL;
    v5 = v24;
    if ( (v24 & 0x200) != 0 )
      return 0LL;
    v6 = MiPteInShadowRange((unsigned __int64)&v24);
    if ( v6
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v24 >> 3) & 0x1FF));
        if ( (v13 & 0x20) != 0 )
          v5 |= 0x20uLL;
        if ( (v13 & 0x42) != 0 )
          v5 |= 0x42uLL;
      }
      else
      {
        v5 = v24;
      }
    }
    v7 = (v5 >> 12) & 0xFFFFFFFFFLL;
  }
  while ( (*(_QWORD *)(48 * v7 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v8 = 48 * v7 - 0x58000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  else
  {
    v23 = 0;
    CurrentIrql = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  v10 = *v3;
  v24 = v10;
  if ( (v10 & 1) == 0 || (v10 & 0x200) != 0 )
    goto LABEL_24;
  if ( v6
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v15 )
    {
      v16 = *((_QWORD *)&v15->Flink + (((unsigned __int64)&v24 >> 3) & 0x1FF));
      if ( (v16 & 0x20) != 0 )
        v10 |= 0x20uLL;
      if ( (v16 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
    else
    {
      v10 = v24;
    }
  }
  if ( v7 != ((v10 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_24:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v19 = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v21 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v8) || (unsigned int)MiChargeForLockedPage(v8, 1) )
    ++*(_WORD *)(v8 + 32);
  if ( CurrentIrql != 17 )
    *a2 = CurrentIrql;
  MiLockOwnedProtoPage(v8, CurrentIrql);
  return 48 * v7 - 0x58000000000LL;
}
