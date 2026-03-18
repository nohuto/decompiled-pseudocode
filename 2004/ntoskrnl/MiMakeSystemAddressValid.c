/*
 * XREFs of MiMakeSystemAddressValid @ 0x1402556E0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140246200 (MiSetReadOnlyOnSectionView.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiCaptureDeleteHierarchy @ 0x140251E60 (MiCaptureDeleteHierarchy.c)
 *     MiFillHyperPtes @ 0x14025397C (MiFillHyperPtes.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x140255888 (MiSplitPrivatePage.c)
 *     MiSoftFaultMappedView @ 0x14025AFC0 (MiSoftFaultMappedView.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140337F84 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiMakeProtoLeafValid @ 0x140349AB4 (MiMakeProtoLeafValid.c)
 *     MiLockPageTableRange @ 0x14035708C (MiLockPageTableRange.c)
 *     MiLockPagedAddress @ 0x140369694 (MiLockPagedAddress.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C3C68 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140527EC8 (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x1405393F0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405396FC (MiPrepareImagePagesForHotPatch.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140542320 (MiWorkingSetInfoCheckPageTable.c)
 *     MiAddPagesToEnclave @ 0x140543C34 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405442B4 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545660 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1405460CC (MiWriteEnclavePte.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiUpdateForkMaps @ 0x140556300 (MiUpdateForkMaps.c)
 *     MiMapUserLargePages @ 0x140559290 (MiMapUserLargePages.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MmIsAddressValidEx @ 0x1402594E0 (MmIsAddressValidEx.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTable @ 0x1403B2B80 (MiUnlockPageTable.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1405300F8 (MiFlushAllFilesystemPages.c)
 */

unsigned __int64 __fastcall MiMakeSystemAddressValid(
        ULONG_PTR BugCheckParameter4,
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
  unsigned __int64 result; // rax
  _KPROCESS *v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  ULONG_PTR v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 SharedVm; // rsi
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h]
  unsigned __int8 v23; // [rsp+88h] [rbp+20h]

  v23 = a4;
  v22 = a2;
  v5 = a2;
  v6 = a5;
  v8 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a5 & 4) != 0 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  else
    AnyMultiplexedVm = (char *)&Process[1].ActiveProcessorsPadding[6];
  v11 = (__int64)(BugCheckParameter4 << 25) >> 16;
  v12 = v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL;
  v13 = v6 & 1;
  while ( v13 )
  {
    result = MmIsAddressValidEx(BugCheckParameter4);
    if ( (_BYTE)result )
      return result;
LABEL_13:
    if ( v5 )
      MiFlushTbList(v5, v15);
    if ( v13 )
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v23);
    else
      MiUnlockWorkingSetShared(AnyMultiplexedVm, v23);
    v16 = MmAccessFault((v8 << 57) | 0x100000000000002LL, BugCheckParameter4);
    v18 = v16;
    if ( v16 < 0 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v18, (ULONG_PTR)Process, BugCheckParameter4);
    }
    if ( v13 )
    {
      SharedVm = MiGetSharedVm(AnyMultiplexedVm, v17);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
    }
    else
    {
      MiLockWorkingSetShared(AnyMultiplexedVm);
    }
    v5 = v22;
  }
  if ( v12 )
  {
    result = MiFastLockLeafPageTable(AnyMultiplexedVm, v11, 0LL);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 1 )
        return result;
      v19 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( (int)result != 1LL )
        v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiUnlockPageTable(AnyMultiplexedVm, v19);
    }
  }
  result = MiLockLowestValidPageTable((__int64)AnyMultiplexedVm, BugCheckParameter4, &v21);
  if ( result != ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    MiUnlockPageTableInternal(AnyMultiplexedVm, result);
    goto LABEL_13;
  }
  return result;
}
