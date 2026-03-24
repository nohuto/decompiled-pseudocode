/*
 * XREFs of MiMakeSystemAddressValid @ 0x14030E390
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140240B90 (MiSetReadOnlyOnSectionView.c)
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiSoftFaultMappedView @ 0x14028D5A0 (MiSoftFaultMappedView.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402980D4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiFillHyperPtes @ 0x1402ADD8C (MiFillHyperPtes.c)
 *     MiMakeProtoLeafValid @ 0x1402BCAB4 (MiMakeProtoLeafValid.c)
 *     MiLockPageTableRange @ 0x1402C8C5C (MiLockPageTableRange.c)
 *     MiCaptureDeleteHierarchy @ 0x1402FE3F0 (MiCaptureDeleteHierarchy.c)
 *     MiSplitPrivatePage @ 0x14030CFB0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x14030DA00 (MiProtectPrivateMemory.c)
 *     MiCopyToUserVa @ 0x14030E538 (MiCopyToUserVa.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6DC8 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D398 (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x14053E8C0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EBCC (MiPrepareImagePagesForHotPatch.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1405477F0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiAddPagesToEnclave @ 0x140549104 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140549784 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549A28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AB30 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x14054B59C (MiWriteEnclavePte.c)
 *     MiWriteAwePtes @ 0x14054E298 (MiWriteAwePtes.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 *     MiUpdateForkMaps @ 0x14055B7A0 (MiUpdateForkMaps.c)
 *     MiMapUserLargePages @ 0x14055E730 (MiMapUserLargePages.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14020E6D0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     MmIsAddressValidEx @ 0x14030C4F0 (MmIsAddressValidEx.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiUnlockPageTable @ 0x1403B6C60 (MiUnlockPageTable.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1405355C8 (MiFlushAllFilesystemPages.c)
 */

char __fastcall MiMakeSystemAddressValid(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        char a5)
{
  __int64 v5; // rsi
  char v6; // bp
  __int64 v8; // rbx
  _KPROCESS *Process; // r14
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v11; // rdi
  BOOL v12; // r15d
  int v13; // ebp
  unsigned __int64 valid; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  ULONG_PTR v19; // rsi
  unsigned __int64 v20; // rdx
  LONG *SharedVm; // rsi
  unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h]
  unsigned __int8 v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  v24 = a2;
  v5 = a2;
  v6 = a5;
  v8 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a5 & 4) != 0 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  else
    AnyMultiplexedVm = (char *)&Process[1].ActiveProcessorsPadding[6];
  v11 = (__int64)(BugCheckParameter1 << 25) >> 16;
  v12 = v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL;
  v13 = v6 & 1;
  while ( v13 )
  {
    LOBYTE(valid) = MmIsAddressValidEx(BugCheckParameter1);
    if ( (_BYTE)valid )
      return valid;
LABEL_13:
    if ( v5 )
      MiFlushTbList(v5);
    if ( v13 )
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v25);
    else
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v25);
    v15 = MmAccessFault((v8 << 57) | 0x100000000000002LL, BugCheckParameter1, 0, 0LL);
    v19 = v15;
    if ( v15 < 0 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v19, (ULONG_PTR)Process, BugCheckParameter1);
    }
    if ( v13 )
    {
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
    }
    else
    {
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v16, v17, v18);
    }
    v5 = v24;
  }
  if ( v12 )
  {
    LODWORD(valid) = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v11, 0);
    if ( (_DWORD)valid )
    {
      if ( (_DWORD)valid == 1 )
        return valid;
      v20 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( (int)valid != 1LL )
        v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiUnlockPageTable(AnyMultiplexedVm, v20, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL);
    }
  }
  valid = MiLockLowestValidPageTable((__int64)AnyMultiplexedVm, BugCheckParameter1, &v23);
  if ( valid != ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, valid);
    goto LABEL_13;
  }
  return valid;
}
