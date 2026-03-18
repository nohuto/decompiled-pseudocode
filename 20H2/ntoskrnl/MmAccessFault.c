/*
 * XREFs of MmAccessFault @ 0x14026E3B0
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x14022D6A0 (MiPrefetchVirtualMemory.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiProbeLeafPteAccess @ 0x14026CA10 (MiProbeLeafPteAccess.c)
 *     MiGetNextPageTablePte @ 0x14026E0D0 (MiGetNextPageTablePte.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiDeleteSubsectionPages @ 0x1402C7990 (MiDeleteSubsectionPages.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402C9A90 (MiCheckProtoPtePageState.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 *     MiFaultInProbeAddress @ 0x140316E80 (MiFaultInProbeAddress.c)
 *     MiMakeImageReadOnly @ 0x140319024 (MiMakeImageReadOnly.c)
 *     MiMakeProtoAddressValid @ 0x140323340 (MiMakeProtoAddressValid.c)
 *     MiDeletePerSessionProtos @ 0x14032D664 (MiDeletePerSessionProtos.c)
 *     MiInPageSingleKernelStack @ 0x140335B20 (MiInPageSingleKernelStack.c)
 *     MiReleaseOutSwapReservations @ 0x140339E78 (MiReleaseOutSwapReservations.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiInitializeImageProtos @ 0x140350EE8 (MiInitializeImageProtos.c)
 *     MiSectionCreated @ 0x1403563C4 (MiSectionCreated.c)
 *     MiLockPagedAddress @ 0x14036B674 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140397114 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiPurgeImageSection @ 0x1403A4B04 (MiPurgeImageSection.c)
 *     KiPageFault @ 0x14040B480 (KiPageFault.c)
 *     MiLockDriverPageRange @ 0x14052BF04 (MiLockDriverPageRange.c)
 *     MiInitializeDynamicPfns @ 0x14052CAA0 (MiInitializeDynamicPfns.c)
 *     MiEliminateStaleExtents @ 0x14053EDC8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14053EEAC (MiEnableLargeSubsection.c)
 *     MiInitializeProtoPfn @ 0x1405534C0 (MiInitializeProtoPfn.c)
 *     ExpSvmServicePageFault @ 0x1405B7A30 (ExpSvmServicePageFault.c)
 *     MiInitializePrototypePtes @ 0x14068304C (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x1408D45A4 (MmVirtualAccessFault.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x14022DC70 (MiSufficientAvailablePages.c)
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiUserFault @ 0x14026EA90 (MiUserFault.c)
 *     MiDispatchFault @ 0x140270220 (MiDispatchFault.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiUnlockSystemVa @ 0x1402996DC (MiUnlockSystemVa.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14029F34C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiInitializePageFaultPacket @ 0x1402CFE30 (MiInitializePageFaultPacket.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     MiRaisedIrqlFault @ 0x140306278 (MiRaisedIrqlFault.c)
 *     KeInvalidAccessAllowed @ 0x1403063B0 (KeInvalidAccessAllowed.c)
 *     MiReleaseFaultCharges @ 0x140327DCC (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140328334 (MiRetainSubsection.c)
 *     MiIsRetryIoStatus @ 0x14034450C (MiIsRetryIoStatus.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiDeprioritizeVad @ 0x140381794 (MiDeprioritizeVad.c)
 *     MiReplenishSlabAllocator @ 0x1403923A4 (MiReplenishSlabAllocator.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiFaultGetFileExtents @ 0x1405468F0 (MiFaultGetFileExtents.c)
 *     MiReleaseFaultSynchronization @ 0x1405473C4 (MiReleaseFaultSynchronization.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055A428 (MiCopyOnWriteCheckConditions.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
 *     MiFreeTransitionPageHeatList @ 0x14055DB24 (MiFreeTransitionPageHeatList.c)
 *     MiProcessTransitionHeatBatch @ 0x14055E32C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055E590 (MiReplenishTransitionPageHeatList.c)
 *     EtwTracePageFault @ 0x1405A60FC (EtwTracePageFault.c)
 *     MiHandleEnclaveFault @ 0x1408D4548 (MiHandleEnclaveFault.c)
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
  unsigned int FileExtents; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // rdx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 **Address; // rax
  __int64 v26; // r8
  __int64 ProtoPteAddress; // rax
  _BYTE *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r9
  unsigned int v31; // ecx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // ecx
  ULONG_PTR v35; // r9
  __int64 v36; // r8
  __int64 v37; // [rsp+30h] [rbp-168h] BYREF
  _QWORD v38[16]; // [rsp+40h] [rbp-158h] BYREF
  unsigned __int64 v39[2]; // [rsp+C0h] [rbp-D8h] BYREF
  ULONG_PTR v40; // [rsp+D0h] [rbp-C8h]
  ULONG_PTR v41; // [rsp+D8h] [rbp-C0h]
  unsigned __int64 v42; // [rsp+E0h] [rbp-B8h]
  unsigned __int64 v43; // [rsp+E8h] [rbp-B0h]
  __int64 v44; // [rsp+F0h] [rbp-A8h]
  __int128 v45; // [rsp+F8h] [rbp-A0h] BYREF
  __int128 v46; // [rsp+108h] [rbp-90h]
  __int128 P; // [rsp+118h] [rbp-80h]
  __int128 BugCheckParameter2a; // [rsp+128h] [rbp-70h] BYREF
  __int128 v49; // [rsp+138h] [rbp-60h]

  v37 = 0LL;
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
      v31 = *(unsigned __int8 *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (unsigned __int8)v31 <= 6u )
      {
        v32 = 74;
        if ( _bittest(&v32, v31) )
          return 3221225477LL;
      }
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(BugCheckParameter4, 0LL) == 1 )
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
  v45 = 0LL;
  v46 = 0LL;
  P = 0LL;
  BugCheckParameter2a = 0LL;
  v49 = 0LL;
  v41 = (((unsigned __int64)BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v42 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0;
  if ( (v7 & 0x40) != 0 )
  {
    v8 = 32;
    v7 &= ~2uLL;
  }
  v39[1] = v7;
  v39[0] = BugCheckParameter1;
  v40 = BugCheckParameter4;
  DWORD2(v46) = ((unsigned __int8)v8 ^ (unsigned __int8)(a3 << 6)) & 0x40 ^ v8;
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(v39);
  while ( 1 )
  {
    v9 = 4096;
    if ( v6 < 0xFFFF800000000000uLL || (v21 = MiSystemFault(v39), FileExtents = v21, v21 == 192) )
    {
      FileExtents = MiUserFault(v39);
      if ( FileExtents != -1073741802 )
        goto LABEL_19;
    }
    else if ( v21 != -1073741802 )
    {
      goto LABEL_26;
    }
    FileExtents = MiDispatchFault(v39, &v37);
    if ( FileExtents == -1073741802 )
    {
      v24 = v39[0];
      if ( v39[0] < 0xFFFF800000000000uLL
        && *((_QWORD *)&P + 1) != qword_140C4DCB8
        && (!qword_140C4DCC0 || *((_QWORD *)&P + 1) != qword_140C4DCC0) )
      {
        Address = (__int64 **)P;
        if ( !(_QWORD)P )
        {
          Address = MiLocateAddress(v39[0]);
          v24 = v39[0];
          *(_QWORD *)&P = Address;
        }
        v26 = 4LL;
        if ( (WORD4(v46) & 0x100) != 0 )
          v26 = 2LL;
        ProtoPteAddress = MiGetProtoPteAddress(Address, v24 >> 12, v26, &BugCheckParameter2a);
        if ( !ProtoPteAddress )
        {
          MiReleaseFaultSynchronization(v39);
          *((_QWORD *)&P + 1) = 0LL;
          FileExtents = -1073741819;
          goto LABEL_41;
        }
        if ( *((_QWORD *)&P + 1) != ProtoPteAddress )
          *((_QWORD *)&P + 1) = ProtoPteAddress;
        MiRetainSubsection(BugCheckParameter2a);
      }
      DWORD2(v46) &= ~0x100u;
      FileExtents = 0;
    }
    else
    {
      v11 = v37;
      if ( v37 )
      {
        v22 = *(_QWORD *)(v37 + 256);
        v9 = *(_DWORD *)(v37 + 312);
        if ( v22 )
          v9 = *(_DWORD *)(v22 + 40);
        if ( a3 == 1 )
          *(_DWORD *)(v37 + 192) |= 0x40000u;
        if ( (*(_DWORD *)(v11 + 192) & 1) != 0 && *(int *)(v11 + 80) >= 0 )
        {
          FileExtents = MiFaultGetFileExtents(v39);
          *((_QWORD *)&P + 1) = 0LL;
          goto LABEL_19;
        }
        FileExtents = MiIssueHardFault(v39);
      }
      *((_QWORD *)&P + 1) = 0LL;
    }
    if ( (BYTE8(v46) & 0x10) != 0 )
    {
      memset(v38, 0, sizeof(v38));
      *(_OWORD *)&v38[3] = v45;
      v38[5] = v46;
      MiUnlockSystemVa(v38);
      DWORD2(v46) &= ~0x10u;
    }
    else
    {
      v12 = v45;
      if ( (_QWORD)v46 )
      {
        if ( WORD5(v45) )
          MiEmptyDeferredWorkingSetEntries(&v45);
        MiUnlockPageTableInternal(v12);
        v13 = BYTE13(v45) | 2;
        *(_QWORD *)&v46 = 0LL;
        BYTE13(v45) |= 2u;
      }
      else
      {
        v13 = BYTE13(v45);
      }
      if ( (v13 & 1) != 0 )
        MiUnlockWorkingSetExclusive(v12, BYTE12(v45));
      else
        MiUnlockWorkingSetShared(v12, BYTE12(v45));
    }
LABEL_19:
    if ( (BYTE8(v46) & 1) != 0 )
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
    if ( (_QWORD)v49 )
    {
      v30 = (BYTE8(v46) & 0x40) != 0 ? 0LL : 0x20000LL;
      MiReplenishSlabAllocator(
        v49,
        *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(*(_QWORD *)BugCheckParameter2a + 60LL) & 0x3FF)),
        *((_QWORD *)&v49 + 1),
        v30);
      *(_QWORD *)&v49 = 0LL;
    }
    else if ( (v40 & 1) != 0 && *(_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
    {
      v33 = *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFFEuLL) + 48);
      if ( v33 )
        MiReplenishSlabAllocator(v33, *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v45 + 174)), 1LL, 0LL);
    }
    v14 = v45;
    if ( (*(_BYTE *)(v45 + 184) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v45 + 4) & 0xFFF) != 0 )
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
      v14 = v45;
      if ( (__int64)(*(_QWORD *)(v45 + 120) - *(_QWORD *)(v45 + 112)) <= 100 )
        goto LABEL_26;
    }
    v23 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v14 + 174));
    if ( v23 && !(unsigned int)MiSufficientAvailablePages(v23, 0x420uLL) )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
LABEL_26:
    if ( !FileExtents )
      goto LABEL_31;
    if ( FileExtents == -1073740748 )
    {
      FileExtents = 0;
      goto LABEL_31;
    }
    if ( (FileExtents & 0x80000000) == 0 )
    {
LABEL_29:
      if ( !*((_QWORD *)&P + 1) && (PerfGlobalGroupMask & 0x1000) != 0 )
      {
        v35 = 0LL;
        if ( (v40 & 1) == 0 )
          v35 = v40;
        v36 = DWORD2(v46) >> 6;
        LOBYTE(v36) = (BYTE8(v46) & 0x40) != 0;
        EtwTracePageFault(FileExtents, v39[0], v36, v35);
      }
      goto LABEL_31;
    }
LABEL_41:
    if ( !(unsigned int)MiIsRetryIoStatus(FileExtents, v9) )
      goto LABEL_29;
    v17 = KeGetCurrentThread();
    if ( ((__int64)v17[1].Queue & 4) != 0 || (*((_DWORD *)&v17[1].SwapListEntry + 3) & 0xC) != 0 )
    {
      FileExtents = -1073741801;
    }
    else if ( (v40 & 1) != 0
           && *(_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL) == 5
           && (*(_DWORD *)((v40 & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0xC) != 0 )
    {
      FileExtents = -1073741608;
    }
    else
    {
      v18 = *(unsigned __int16 *)(v45 + 174);
      v19 = *(_QWORD *)(qword_140C4E4C8 + 8 * v18);
      if ( SBYTE8(v46) < 0
        || !(unsigned int)MiSufficientAvailablePages(*(_QWORD *)(qword_140C4E4C8 + 8 * v18), 0x420uLL)
        || *(_QWORD *)(v19 + 7168) < 0x400uLL )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      }
      v20 = *(_QWORD *)(v19 + 7104);
      if ( v20 )
        --v20;
      if ( v20 < 0x9F )
      {
        v34 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
        if ( (v34 & 0xC) != 8
          && (v20 < 0x20 && (ULONG_PTR *)v19 == &MiSystemPartition
           || ((v34 & 2) == 0 || v20 < 0x21) && (*(_DWORD *)(v19 + 4) & 0x20) == 0) )
        {
          MiWaitForFreePage(v19);
        }
      }
      FileExtents = 0;
    }
LABEL_31:
    if ( (BYTE8(v46) & 2) != 0 )
      MiCopyOnWriteCheckConditions(v45, 3221225495LL);
    if ( (BYTE8(v46) & 4) != 0 )
      MiCopyOnWriteCheckConditions(v45, 3221226548LL);
    if ( !*((_QWORD *)&P + 1) )
      break;
    v28 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v5 & 1) == 0 )
      goto LABEL_84;
    if ( *v28 == 1 )
      goto LABEL_91;
    if ( (v5 & 1) == 0 )
      goto LABEL_84;
    if ( *v28 == 2 )
    {
LABEL_91:
      v28[1] = 1;
LABEL_84:
      v5 = 0LL;
      goto LABEL_85;
    }
    if ( *v28 != 6 )
      goto LABEL_84;
LABEL_85:
    v29 = BugCheckParameter2a;
    MiInitializePageFaultPacket(2, DWORD2(P), 0, v5, (__int64)v39);
    DWORD2(v46) |= 8u;
    v6 = v39[0];
    *(_QWORD *)&BugCheckParameter2a = v29;
  }
  if ( (_QWORD)BugCheckParameter2a )
    MiReleaseFaultCharges(BugCheckParameter2a);
  return FileExtents;
}
