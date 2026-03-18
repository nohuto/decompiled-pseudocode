/*
 * XREFs of MiLockProtoPoolPage @ 0x140282DC0
 * Callers:
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     MiDeleteSubsectionPages @ 0x140283240 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiSoftFaultMappedView @ 0x1402B3FF0 (MiSoftFaultMappedView.c)
 *     MiAllocateInPageSupport @ 0x1402B7B20 (MiAllocateInPageSupport.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiSectionCreated @ 0x1402C00A4 (MiSectionCreated.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x14031F1CC (MiDeletePerSessionProtos.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiInitializeImageProtos @ 0x14034BA9C (MiInitializeImageProtos.c)
 *     MiMakeImageReadOnly @ 0x1403508C0 (MiMakeImageReadOnly.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteMergedPte @ 0x1403641F8 (MiDeleteMergedPte.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiGetPageFileSectionForReservation @ 0x140384250 (MiGetPageFileSectionForReservation.c)
 *     MiPurgeImageSection @ 0x1403A1EA4 (MiPurgeImageSection.c)
 *     MiInitializeDynamicPfns @ 0x140528A80 (MiInitializeDynamicPfns.c)
 *     MiReplaceLockedPage @ 0x140537C4C (MiReplaceLockedPage.c)
 *     MiEliminateStaleExtents @ 0x14053ADA8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14053AE8C (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x140542C80 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x14054F4A0 (MiInitializeProtoPfn.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiLockOwnedProtoPage @ 0x140282FE0 (MiLockOwnedProtoPage.c)
 *     MiChargeForLockedPage @ 0x140285AD0 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x14028A920 (MiAreChargesNeededToLockPage.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, __int64 a2)
{
  _BYTE *v2; // r15
  unsigned __int64 *v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  int v6; // ebp
  __int64 v7; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v12; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rax
  struct _LIST_ENTRY *v16; // r8
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v2 = (_BYTE *)a2;
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
    v6 = MiPteInShadowRange(&v25, a2);
    if ( v6
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v15 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v25 >> 3) & 0x1FF));
        if ( (v15 & 0x20) != 0 )
          v5 |= 0x20uLL;
        if ( (v15 & 0x42) != 0 )
          v5 |= 0x42uLL;
      }
      else
      {
        v5 = v25;
      }
    }
    v9 = (v5 >> 12) & 0xFFFFFFFFFLL;
    a2 = 6 * v9;
  }
  while ( (*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v10 = 48 * v9 - 0x58000000000LL;
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      v7 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = v7;
    }
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23, a2, v7, (__int64)SchedulerAssist);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
  }
  else
  {
    v24 = 0;
    CurrentIrql = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24, a2, v7, (__int64)SchedulerAssist);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
  }
  v12 = *v3;
  v25 = v12;
  if ( (v12 & 1) == 0 || (v12 & 0x200) != 0 )
    goto LABEL_24;
  if ( v6
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v16 )
    {
      v17 = *((_QWORD *)&v16->Flink + (((unsigned __int64)&v25 >> 3) & 0x1FF));
      if ( (v17 & 0x20) != 0 )
        v12 |= 0x20uLL;
      if ( (v17 & 0x42) != 0 )
        v12 |= 0x42uLL;
    }
    else
    {
      v12 = v25;
    }
  }
  if ( v9 != ((v12 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_24:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v10) || (unsigned int)MiChargeForLockedPage(v10, 1LL) )
    ++*(_WORD *)(v10 + 32);
  if ( CurrentIrql != 17 )
    *v2 = CurrentIrql;
  MiLockOwnedProtoPage(v10, CurrentIrql);
  return 48 * v9 - 0x58000000000LL;
}
