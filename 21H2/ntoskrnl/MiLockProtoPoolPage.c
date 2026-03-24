/*
 * XREFs of MiLockProtoPoolPage @ 0x14031A100
 * Callers:
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiDeleteSubsectionPages @ 0x140239170 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiWalkVaRange @ 0x14023C0F0 (MiWalkVaRange.c)
 *     MiMakeImageReadOnly @ 0x1402694F0 (MiMakeImageReadOnly.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiInitializeImageProtos @ 0x14026DF7C (MiInitializeImageProtos.c)
 *     MiSoftFaultMappedView @ 0x14028D5A0 (MiSoftFaultMappedView.c)
 *     MiTranslatePageForCopy @ 0x1402B4DE4 (MiTranslatePageForCopy.c)
 *     MiDeletePerSessionProtos @ 0x1402CF174 (MiDeletePerSessionProtos.c)
 *     MiSectionCreated @ 0x1402E88CC (MiSectionCreated.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x140319BA0 (MiAllocateInPageSupport.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 *     MiDeleteMergedPte @ 0x140366E48 (MiDeleteMergedPte.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036AB34 (MiResolveProtoCombine.c)
 *     MiGetPageFileSectionForReservation @ 0x140387AC0 (MiGetPageFileSectionForReservation.c)
 *     MiPurgeImageSection @ 0x1403A53C4 (MiPurgeImageSection.c)
 *     MiInitializeDynamicPfns @ 0x14052E5A0 (MiInitializeDynamicPfns.c)
 *     MiReplaceLockedPage @ 0x14053D76C (MiReplaceLockedPage.c)
 *     MiEliminateStaleExtents @ 0x1405408C8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1405409AC (MiEnableLargeSubsection.c)
 *     MiInsertLargeVadMapping @ 0x1405487A0 (MiInsertLargeVadMapping.c)
 *     MiInitializeProtoPfn @ 0x140554F90 (MiInitializeProtoPfn.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiLockOwnedProtoPage @ 0x14031A320 (MiLockOwnedProtoPage.c)
 *     MiAreChargesNeededToLockPage @ 0x140323430 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x140328AA0 (MiChargeForLockedPage.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
