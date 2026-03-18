/*
 * XREFs of MiMakeSystemAddressValid @ 0x1402AE710
 * Callers:
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiSetReadOnlyOnSectionView @ 0x14029F230 (MiSetReadOnlyOnSectionView.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiCaptureDeleteHierarchy @ 0x1402AAE90 (MiCaptureDeleteHierarchy.c)
 *     MiFillHyperPtes @ 0x1402AC9AC (MiFillHyperPtes.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 *     MiSoftFaultMappedView @ 0x1402B3FF0 (MiSoftFaultMappedView.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402FAF54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiMakeProtoLeafValid @ 0x14030BB74 (MiMakeProtoLeafValid.c)
 *     MiLockPageTableRange @ 0x14031949C (MiLockPageTableRange.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C2DA8 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140527878 (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x140538DA0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405390AC (MiPrepareImagePagesForHotPatch.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140541CD0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140543C64 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140545A7C (MiWriteEnclavePte.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 *     MiUpdateForkMaps @ 0x140555CB0 (MiUpdateForkMaps.c)
 *     MiMapUserLargePages @ 0x140558C40 (MiMapUserLargePages.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MmIsAddressValidEx @ 0x1402B2510 (MmIsAddressValidEx.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTable @ 0x1403ACF00 (MiUnlockPageTable.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(
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
  __int64 result; // rax
  _KPROCESS *v15; // rdx
  int v16; // eax
  ULONG_PTR v17; // rsi
  unsigned __int64 v18; // rdx
  LONG *SharedVm; // rsi
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h]
  unsigned __int8 v22; // [rsp+88h] [rbp+20h]

  v22 = a4;
  v21 = a2;
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
    result = MmIsAddressValidEx(BugCheckParameter1);
    if ( (_BYTE)result )
      return result;
LABEL_13:
    if ( v5 )
      MiFlushTbList(v5, v15);
    if ( v13 )
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v22);
    else
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v22);
    v16 = MmAccessFault((v8 << 57) | 0x100000000000002LL, BugCheckParameter1, 0, 0LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v17, (ULONG_PTR)Process, BugCheckParameter1);
    }
    if ( v13 )
    {
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
    }
    else
    {
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
    v5 = v21;
  }
  if ( v12 )
  {
    result = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v11, 0);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 1 )
        return result;
      v18 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( (int)result != 1LL )
        v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiUnlockPageTable(AnyMultiplexedVm, v18);
    }
  }
  result = MiLockLowestValidPageTable((__int64)AnyMultiplexedVm, BugCheckParameter1, &v20);
  if ( result != ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    MiUnlockPageTableInternal(AnyMultiplexedVm, result);
    goto LABEL_13;
  }
  return result;
}
