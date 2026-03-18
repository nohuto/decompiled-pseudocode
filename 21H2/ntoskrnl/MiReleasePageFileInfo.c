/*
 * XREFs of MiReleasePageFileInfo @ 0x1402E20D0
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiLockPagedAddress @ 0x140245DF4 (MiLockPagedAddress.c)
 *     MiPurgeImageSection @ 0x14025AD28 (MiPurgeImageSection.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiDeleteSubsectionPages @ 0x140273390 (MiDeleteSubsectionPages.c)
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiInPageSingleKernelStack @ 0x14029A2A0 (MiInPageSingleKernelStack.c)
 *     MiProbeUnlockPage @ 0x1402B7320 (MiProbeUnlockPage.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiDeleteTransitionPte @ 0x1402C3100 (MiDeleteTransitionPte.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1402C9E70 (MiDeleteBatch.c)
 *     MiDeleteClusterPage @ 0x1402CC0F0 (MiDeleteClusterPage.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiTrimSystemImagePages @ 0x1402D92AC (MiTrimSystemImagePages.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402DAC64 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiOutSwapWorkingSetPte @ 0x140315EE0 (MiOutSwapWorkingSetPte.c)
 *     MiLockPageTablePage @ 0x14031F940 (MiLockPageTablePage.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiMakeFaultPfnActive @ 0x140339240 (MiMakeFaultPfnActive.c)
 *     MiMakeCombineCandidateClean @ 0x14033A5B0 (MiMakeCombineCandidateClean.c)
 *     MiResolveProtoCombine @ 0x14033A920 (MiResolveProtoCombine.c)
 *     MiReservePageFileSpace @ 0x14033AC90 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x14033B190 (MiReservePageFileSpaceForPage.c)
 *     MiDeleteValidSystemPage @ 0x14033BEC0 (MiDeleteValidSystemPage.c)
 *     MmSetAddressRangeModifiedEx @ 0x14033D860 (MmSetAddressRangeModifiedEx.c)
 *     MiLockPageAndSetDirty @ 0x14033E534 (MiLockPageAndSetDirty.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x1403856F4 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x140385FB0 (MiUnlockStoreLockedPages.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403D820C (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MiBuildReservationCluster @ 0x14059B62C (MiBuildReservationCluster.c)
 *     MiFreeModifiedReservations @ 0x14059C6B4 (MiFreeModifiedReservations.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14059D170 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 *     MmUpdateUserShadowStackValue @ 0x1405A7A98 (MmUpdateUserShadowStackValue.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     MiFreeReservationRun @ 0x1406EC2D4 (MiFreeReservationRun.c)
 *     MiScanPagefileSpace @ 0x14096F470 (MiScanPagefileSpace.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1402E22B0 (MiCoalescePageFileBitmapsCache.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiStoreSetEvictPageFile @ 0x1403868E8 (MiStoreSetEvictPageFile.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     MiPageHashBugCheck @ 0x1405BC8C0 (MiPageHashBugCheck.c)
 */

void __fastcall MiReleasePageFileInfo(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // r15
  volatile LONG *v10; // rcx
  int v11; // r12d
  __int64 v12; // r13
  KIRQL v13; // bl
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  bool v21; // zf
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  struct _SLIST_ENTRY *v24; // rax
  _SLIST_ENTRY *Next; // rcx
  __int64 v26; // rsi
  _SLIST_ENTRY *v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r11
  _SLIST_ENTRY *v30; // rdx
  PSLIST_ENTRY v31; // rcx
  unsigned __int64 v32; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  __int64 v37; // [rsp+30h] [rbp-78h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-70h]
  PEX_SPIN_LOCK SpinLock; // [rsp+40h] [rbp-68h]
  unsigned __int64 v40; // [rsp+48h] [rbp-60h]
  int v41; // [rsp+50h] [rbp-58h]
  int v42; // [rsp+54h] [rbp-54h]
  unsigned __int64 v43; // [rsp+58h] [rbp-50h]
  _QWORD *v45; // [rsp+B8h] [rbp+10h]
  KIRQL v46; // [rsp+C0h] [rbp+18h]
  __int64 updated; // [rsp+C8h] [rbp+20h]

  v4 = a2;
  if ( qword_140C50780 && (a2 & 0x10) == 0 )
    v4 = a2 & ~qword_140C50780;
  v5 = HIDWORD(v4);
  v6 = (a2 >> 1) & 1;
  v7 = (a2 >> 2) & 1;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)a2 >> 12) + 16736);
  SpinLock = (PEX_SPIN_LOCK)(v9 + 232);
  v10 = (volatile LONG *)(v9 + 232);
  v11 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v46 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  }
  else
  {
    v46 = ExAcquireSpinLockExclusive(v10);
  }
  v12 = *(_QWORD *)(v9 + 112);
  if ( (_DWORD)v6 )
  {
    _bittestandreset(*(signed __int32 **)(v12 + 32), v5);
    ++*(_QWORD *)(v9 + 48);
  }
  if ( !(_DWORD)v7 )
    goto LABEL_9;
  if ( (a3 & 2) != 0 )
    goto LABEL_21;
  v15 = *(_QWORD *)(v9 + 216);
  v42 = 0;
  if ( !v15 )
    goto LABEL_21;
  v16 = v15 + (unsigned int)(v5 * dword_140C531CC);
  v40 = v16;
  v45 = (_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v17 = MI_READ_PTE_LOCK_FREE(v45);
  v37 = v17;
  v18 = v17;
  if ( (v17 & 1) != 0 )
  {
    v21 = *(_DWORD *)v16 == 1;
    v22 = 0LL;
    v43 = 0LL;
    v41 = 1;
    if ( v21 && !dword_140C52AC0 )
      MiPageHashBugCheck(0x62uLL, (unsigned int)v5, v16);
    if ( dword_140C531D0 )
    {
      v23 = *(_QWORD *)(v16 + 8);
      if ( v23 )
      {
        if ( (v23 & 1) == 0 && !dword_140C52AC0 )
          MiPageHashBugCheck(0x61uLL, (unsigned int)v5, v16);
        v22 = v23 & 0xFFFFFFFFFFFFFFFEuLL;
        v43 = v23 & 0xFFFFFFFFFFFFFFFEuLL;
      }
    }
    *(_DWORD *)v16 = 1;
    if ( dword_140C531D0 )
      *(_QWORD *)(v16 + 8) = v22;
    v24 = (struct _SLIST_ENTRY *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v37) >> 12) & 0xFFFFFFFFFFLL)
                                - 0x220000000000LL);
    Next = v24[1].Next;
    ListEntry = v24;
    HIDWORD(v26) = HIDWORD(Next);
    if ( qword_140C50780 && ((unsigned __int8)Next & 0x10) == 0 )
      v26 = (unsigned __int64)Next & ~qword_140C50780;
    updated = MiUpdatePageFileHighInPte(Next, (unsigned int)(HIDWORD(v26) - 1));
    v37 = updated;
    v27 = (_SLIST_ENTRY *)updated;
    if ( (unsigned int)MiPteInShadowRange(v28) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v30 = (_SLIST_ENTRY *)updated;
        if ( !HIBYTE(word_140C51864) && (updated & 1) != 0 )
          v30 = (_SLIST_ENTRY *)(v29 | updated);
        v31 = ListEntry;
        ListEntry[1].Next = v30;
        MiWritePteShadow((__int64)&v31[1], (__int64)v30);
LABEL_70:
        if ( HIDWORD(v26) != 1 )
        {
LABEL_82:
          v8 = 0;
          goto LABEL_21;
        }
        --*(_DWORD *)(v9 + 208);
        v32 = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(v45) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
              v32 = ZeroPte | 0x8000000000000000uLL;
            *v45 = v32;
            MiWritePteShadow((__int64)v45, v32);
            goto LABEL_81;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v32 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *v45 = v32;
LABEL_81:
        KeFlushSingleTb(v40, 0LL, 1LL);
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v9 + 80), ListEntry);
        goto LABEL_82;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v27 = (_SLIST_ENTRY *)updated;
        if ( (updated & 1) != 0 )
          v27 = (_SLIST_ENTRY *)(v29 | updated);
      }
      else
      {
        v27 = (_SLIST_ENTRY *)updated;
      }
    }
    ListEntry[1].Next = v27;
    goto LABEL_70;
  }
  if ( qword_140C50780 && (v17 & 0x10) == 0 )
    v17 &= ~qword_140C50780;
  v19 = MiUpdatePageFileHighInPte(v18, (unsigned int)(HIDWORD(v17) - 1));
  v37 = v19;
  if ( (unsigned int)MiPteInShadowRange(v45) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v20 = v19;
      if ( !HIBYTE(word_140C51864) && (v19 & 1) != 0 )
        v20 = v19 | 0x8000000000000000uLL;
      *v45 = v20;
      MiWritePteShadow((__int64)v45, v20);
      goto LABEL_21;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v19 & 1) != 0 )
      v19 |= 0x8000000000000000uLL;
  }
  *v45 = v19;
LABEL_21:
  if ( (*(_BYTE *)(v9 + 204) & 0x40) != 0 )
  {
    MiStoreSetEvictPageFile(v9, (unsigned int)v5);
    goto LABEL_13;
  }
  _bittestandreset(*(signed __int32 **)(v12 + 16), v5);
  v14 = ++*(_QWORD *)(v9 + 24);
  if ( (unsigned int)v5 < *(_DWORD *)(v9 + 120) )
    *(_DWORD *)(v9 + 120) = v5;
  ++*(_DWORD *)(v9 + 128);
  if ( v14 == 1 && (*(_BYTE *)(v9 + 206) & 1) != 0 )
    v8 = 1;
LABEL_9:
  if ( ((_DWORD)v6 || !_bittest64(*(const signed __int64 **)(v12 + 32), v5))
    && ((_DWORD)v7 || !_bittest64(*(const signed __int64 **)(v12 + 16), v5)) )
  {
    MiCoalescePageFileBitmapsCache(v9, (unsigned int)v6, (unsigned int)v5);
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v9 + 248) + 896LL),
      (*(_DWORD *)(*(_QWORD *)(v9 + 248) + 896LL) & 0xFFFFFC00 | 0x200) + 1024);
  }
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( !v11 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v13 = v46;
      if ( v46 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << (v46 + 1));
        v21 = (v36 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v36;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v13 = v46;
    }
    __writecr8(v13);
  }
  if ( v8 )
    KeSetEvent((PRKEVENT)(a1 + 904), 0, 0);
}
