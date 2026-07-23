/*
 * XREFs of MmAccessFault @ 0x1402B1990
 * Callers:
 *     MiFaultInProbeAddress @ 0x140235B68 (MiFaultInProbeAddress.c)
 *     MiMakeProtoAddressValid @ 0x140242A94 (MiMakeProtoAddressValid.c)
 *     MiDeletePerSessionProtos @ 0x14024D674 (MiDeletePerSessionProtos.c)
 *     MiMakeImageReadOnly @ 0x140257490 (MiMakeImageReadOnly.c)
 *     MiInitializeImageProtos @ 0x14025BF1C (MiInitializeImageProtos.c)
 *     MiPrefetchVirtualMemory @ 0x140262E40 (MiPrefetchVirtualMemory.c)
 *     MiInPageSingleKernelStack @ 0x140295F90 (MiInPageSingleKernelStack.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiSectionCreated @ 0x140299C1C (MiSectionCreated.c)
 *     MiReleaseOutSwapReservations @ 0x1402A2084 (MiReleaseOutSwapReservations.c)
 *     MiProbeLeafPteAccess @ 0x1402AFFF0 (MiProbeLeafPteAccess.c)
 *     MiGetNextPageTablePte @ 0x1402B16B0 (MiGetNextPageTablePte.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiDeleteSubsectionPages @ 0x1402DD9C0 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402DFAC0 (MiCheckProtoPtePageState.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiLockPagedAddress @ 0x14036BAD4 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403976DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPurgeImageSection @ 0x1403A5514 (MiPurgeImageSection.c)
 *     KiPageFault @ 0x14040DE00 (KiPageFault.c)
 *     MiLockDriverPageRange @ 0x14052DC44 (MiLockDriverPageRange.c)
 *     MiInitializeDynamicPfns @ 0x14052E7E0 (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x140540B08 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x140540BEC (MiEnableLargeSubsection.c)
 *     MiInitializeProtoPfn @ 0x1405551D0 (MiInitializeProtoPfn.c)
 *     ExpSvmServicePageFault @ 0x1405B9690 (ExpSvmServicePageFault.c)
 *     MiInitializePrototypePtes @ 0x1406FF6DC (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x1408D1EC4 (MmVirtualAccessFault.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiRaisedIrqlFault @ 0x14021FF3C (MiRaisedIrqlFault.c)
 *     KeInvalidAccessAllowed @ 0x140220080 (KeInvalidAccessAllowed.c)
 *     MiReleaseFaultCharges @ 0x1402477FC (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140247E44 (MiRetainSubsection.c)
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     MiIsRetryIoStatus @ 0x140276E54 (MiIsRetryIoStatus.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiDispatchFault @ 0x1402B3800 (MiDispatchFault.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     MiInitializePageFaultPacket @ 0x1403079C8 (MiInitializePageFaultPacket.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiUnlockSystemVa @ 0x14031CE4C (MiUnlockSystemVa.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140326744 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiDeprioritizeVad @ 0x1403819E4 (MiDeprioritizeVad.c)
 *     MiReplenishSlabAllocator @ 0x140392964 (MiReplenishSlabAllocator.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiFaultGetFileExtents @ 0x140548630 (MiFaultGetFileExtents.c)
 *     MiReleaseFaultSynchronization @ 0x140549104 (MiReleaseFaultSynchronization.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 *     MiFreeTransitionPageHeatList @ 0x14055F834 (MiFreeTransitionPageHeatList.c)
 *     MiProcessTransitionHeatBatch @ 0x14056003C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1405602A0 (MiReplenishTransitionPageHeatList.c)
 *     EtwTracePageFault @ 0x1405A7D5C (EtwTracePageFault.c)
 *     MiHandleEnclaveFault @ 0x1408D1E68 (MiHandleEnclaveFault.c)
 */

__int64 __fastcall MmAccessFault(
        ULONG_PTR BugCheckParameter2,
        signed __int64 BugCheckParameter1,
        char a3,
        ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v5; // r14
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // rbx
  int v8; // ecx
  unsigned int v9; // r15d
  NTSTATUS FileExtents; // ebx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rdx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  NTSTATUS v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  ULONG_PTR v25; // rdx
  __int64 **Address; // rax
  __int64 v27; // r8
  __int64 ProtoPteAddress; // rax
  _BYTE *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r9
  unsigned int v32; // ecx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // ecx
  ULONG_PTR v36; // r9
  __int64 v37; // r8
  __int64 v38; // [rsp+30h] [rbp-168h] BYREF
  _QWORD v39[16]; // [rsp+40h] [rbp-158h] BYREF
  ULONG_PTR v40[2]; // [rsp+C0h] [rbp-D8h] BYREF
  ULONG_PTR v41; // [rsp+D0h] [rbp-C8h]
  ULONG_PTR v42; // [rsp+D8h] [rbp-C0h]
  unsigned __int64 v43; // [rsp+E0h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+E8h] [rbp-B0h]
  __int64 v45; // [rsp+F0h] [rbp-A8h]
  __int128 v46; // [rsp+F8h] [rbp-A0h] BYREF
  __int128 v47; // [rsp+108h] [rbp-90h]
  __int128 P; // [rsp+118h] [rbp-80h]
  __int128 BugCheckParameter2a; // [rsp+128h] [rbp-70h] BYREF
  __int128 v50; // [rsp+138h] [rbp-60h]

  v38 = 0LL;
  v5 = BugCheckParameter4;
  v6 = BugCheckParameter1;
  v7 = BugCheckParameter2;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, BugCheckParameter4);
  if ( BugCheckParameter1 >> 47 != -1 && BugCheckParameter1 >> 47 != 0 )
  {
    if ( a3 == 1 )
      return 3221225477LL;
    if ( (BugCheckParameter4 & 1) != 0 )
    {
      v32 = *(unsigned __int8 *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (unsigned __int8)v32 <= 6u )
      {
        v33 = 74;
        if ( _bittest(&v33, v32) )
          return 3221225477LL;
      }
    }
    else if ( KeInvalidAccessAllowed(BugCheckParameter4, 0) == 1 )
    {
      return 3221225477LL;
    }
    KeBugCheckEx(0x50u, v6, v7, v5, 4uLL);
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
  {
    if ( a3 == 1 )
      return MiHandleEnclaveFault(BugCheckParameter1);
    else
      return 3221226658LL;
  }
  v46 = 0LL;
  v47 = 0LL;
  P = 0LL;
  BugCheckParameter2a = 0LL;
  v50 = 0LL;
  v42 = (((unsigned __int64)BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v45 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0;
  if ( (v7 & 0x40) != 0 )
  {
    v8 = 32;
    v7 &= ~2uLL;
  }
  v40[1] = v7;
  v40[0] = BugCheckParameter1;
  v41 = BugCheckParameter4;
  DWORD2(v47) = ((unsigned __int8)v8 ^ (unsigned __int8)(a3 << 6)) & 0x40 ^ v8;
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(v40);
  while ( 1 )
  {
    v9 = 4096;
    if ( v6 < 0xFFFF800000000000uLL || (v22 = MiSystemFault(v40), FileExtents = v22, v22 == 192) )
    {
      FileExtents = MiUserFault(v40);
      if ( FileExtents != -1073741802 )
        goto LABEL_19;
    }
    else if ( v22 != -1073741802 )
    {
      goto LABEL_26;
    }
    FileExtents = MiDispatchFault(v40, &v38);
    if ( FileExtents == -1073741802 )
    {
      v25 = v40[0];
      if ( v40[0] < 0xFFFF800000000000uLL
        && *((_QWORD *)&P + 1) != qword_140C4DE78
        && (!qword_140C4DE80 || *((_QWORD *)&P + 1) != qword_140C4DE80) )
      {
        Address = (__int64 **)P;
        if ( !(_QWORD)P )
        {
          Address = MiLocateAddress(v40[0]);
          v25 = v40[0];
          *(_QWORD *)&P = Address;
        }
        v27 = 4LL;
        if ( (WORD4(v47) & 0x100) != 0 )
          v27 = 2LL;
        ProtoPteAddress = MiGetProtoPteAddress(Address, v25 >> 12, v27, &BugCheckParameter2a);
        if ( !ProtoPteAddress )
        {
          MiReleaseFaultSynchronization(v40);
          *((_QWORD *)&P + 1) = 0LL;
          FileExtents = -1073741819;
          goto LABEL_41;
        }
        if ( *((_QWORD *)&P + 1) != ProtoPteAddress )
          *((_QWORD *)&P + 1) = ProtoPteAddress;
        MiRetainSubsection((__int64 *)BugCheckParameter2a);
      }
      DWORD2(v47) &= ~0x100u;
      FileExtents = 0;
    }
    else
    {
      v11 = v38;
      if ( v38 )
      {
        v23 = *(_QWORD *)(v38 + 256);
        v9 = *(_DWORD *)(v38 + 312);
        if ( v23 )
          v9 = *(_DWORD *)(v23 + 40);
        if ( a3 == 1 )
          *(_DWORD *)(v38 + 192) |= 0x40000u;
        if ( (*(_DWORD *)(v11 + 192) & 1) != 0 && *(int *)(v11 + 80) >= 0 )
        {
          FileExtents = MiFaultGetFileExtents(v40);
          *((_QWORD *)&P + 1) = 0LL;
          goto LABEL_19;
        }
        FileExtents = MiIssueHardFault(v40);
      }
      *((_QWORD *)&P + 1) = 0LL;
    }
    if ( (BYTE8(v47) & 0x10) != 0 )
    {
      memset(v39, 0, sizeof(v39));
      *(_OWORD *)&v39[3] = v46;
      v39[5] = v47;
      MiUnlockSystemVa(v39);
      DWORD2(v47) &= ~0x10u;
    }
    else
    {
      v12 = v47;
      v13 = v46;
      if ( (_QWORD)v47 )
      {
        if ( WORD5(v46) )
        {
          MiEmptyDeferredWorkingSetEntries(&v46);
          v12 = v47;
        }
        MiUnlockPageTableInternal(v13, v12);
        v14 = BYTE13(v46) | 2;
        *(_QWORD *)&v47 = 0LL;
        BYTE13(v46) |= 2u;
      }
      else
      {
        v14 = BYTE13(v46);
      }
      if ( (v14 & 1) != 0 )
        MiUnlockWorkingSetExclusive(v13, BYTE12(v46));
      else
        MiUnlockWorkingSetShared(v13, BYTE12(v46));
    }
LABEL_19:
    if ( (BYTE8(v47) & 1) != 0 )
      MiDeprioritizeVad((PVOID)P);
    if ( *((_QWORD *)&BugCheckParameter2a + 1) )
    {
      if ( *((_QWORD *)&BugCheckParameter2a + 1) == -1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiProcessTransitionHeatBatch();
        MiFreeTransitionPageHeatList(*((PSLIST_ENTRY *)&BugCheckParameter2a + 1));
      }
      *((_QWORD *)&BugCheckParameter2a + 1) = 0LL;
    }
    if ( (_QWORD)v50 )
    {
      v31 = (BYTE8(v47) & 0x40) != 0 ? 0LL : 0x20000LL;
      MiReplenishSlabAllocator(
        v50,
        *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)BugCheckParameter2a + 60LL) & 0x3FF)),
        *((_QWORD *)&v50 + 1),
        v31);
      *(_QWORD *)&v50 = 0LL;
    }
    else if ( (v41 & 1) != 0 && *(_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
    {
      v34 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFFEuLL) + 48);
      if ( v34 )
        MiReplenishSlabAllocator(v34, *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v46 + 174)), 1LL, 0LL);
    }
    v15 = v46;
    if ( (*(_BYTE *)(v46 + 184) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v46 + 4) & 0xFFF) != 0 )
        goto LABEL_26;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->Priority < 16 )
        goto LABEL_26;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) != 0
        || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
      {
        goto LABEL_26;
      }
      v15 = v46;
      if ( (__int64)(*(_QWORD *)(v46 + 120) - *(_QWORD *)(v46 + 112)) <= 100 )
        goto LABEL_26;
    }
    v24 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v15 + 174));
    if ( v24 && !(unsigned int)MiSufficientAvailablePages(v24, 0x420uLL) )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
LABEL_26:
    if ( !FileExtents )
      goto LABEL_31;
    if ( FileExtents == -1073740748 )
    {
      FileExtents = 0;
      goto LABEL_31;
    }
    if ( FileExtents >= 0 )
    {
LABEL_29:
      if ( !*((_QWORD *)&P + 1) && (PerfGlobalGroupMask & 0x1000) != 0 )
      {
        v36 = 0LL;
        if ( (v41 & 1) == 0 )
          v36 = v41;
        v37 = DWORD2(v47) >> 6;
        LOBYTE(v37) = (BYTE8(v47) & 0x40) != 0;
        EtwTracePageFault((unsigned int)FileExtents, v40[0], v37, v36);
      }
      goto LABEL_31;
    }
LABEL_41:
    if ( !MiIsRetryIoStatus(FileExtents, v9) )
      goto LABEL_29;
    v18 = KeGetCurrentThread();
    if ( ((__int64)v18[1].Queue & 4) != 0 || (*((_DWORD *)&v18[1].SwapListEntry + 3) & 0xC) != 0 )
    {
      FileExtents = -1073741801;
    }
    else if ( (v41 & 1) != 0
           && *(_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL) == 5
           && (*(_DWORD *)((v41 & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0xC) != 0 )
    {
      FileExtents = -1073741608;
    }
    else
    {
      v19 = *(unsigned __int16 *)(v46 + 174);
      v20 = *(_QWORD *)(qword_140C4E688 + 8 * v19);
      if ( SBYTE8(v47) < 0
        || !(unsigned int)MiSufficientAvailablePages(*(_QWORD *)(qword_140C4E688 + 8 * v19), 0x420uLL)
        || *(_QWORD *)(v20 + 7168) < 0x400uLL )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      }
      v21 = *(_QWORD *)(v20 + 7104);
      if ( v21 )
        --v21;
      if ( v21 < 0x9F )
      {
        v35 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
        if ( (v35 & 0xC) != 8
          && (v21 < 0x20 && (ULONG_PTR *)v20 == &MiSystemPartition
           || ((v35 & 2) == 0 || v21 < 0x21) && (*(_DWORD *)(v20 + 4) & 0x20) == 0) )
        {
          MiWaitForFreePage(v20);
        }
      }
      FileExtents = 0;
    }
LABEL_31:
    if ( (BYTE8(v47) & 2) != 0 )
      MiCopyOnWriteCheckConditions(v46, 3221225495LL);
    if ( (BYTE8(v47) & 4) != 0 )
      MiCopyOnWriteCheckConditions(v46, 3221226548LL);
    if ( !*((_QWORD *)&P + 1) )
      break;
    v29 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v5 & 1) == 0 )
      goto LABEL_84;
    if ( *v29 == 1 )
      goto LABEL_91;
    if ( (v5 & 1) == 0 )
      goto LABEL_84;
    if ( *v29 == 2 )
    {
LABEL_91:
      v29[1] = 1;
LABEL_84:
      v5 = 0LL;
      goto LABEL_85;
    }
    if ( *v29 != 6 )
      goto LABEL_84;
LABEL_85:
    v30 = BugCheckParameter2a;
    MiInitializePageFaultPacket(2, DWORD2(P), 0, v5, (__int64)v40);
    DWORD2(v47) |= 8u;
    v6 = v40[0];
    *(_QWORD *)&BugCheckParameter2a = v30;
  }
  if ( (_QWORD)BugCheckParameter2a )
    MiReleaseFaultCharges((__int64 *)BugCheckParameter2a);
  return (unsigned int)FileExtents;
}
