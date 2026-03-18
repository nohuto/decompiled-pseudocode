/*
 * XREFs of MiMakeSystemAddressValid @ 0x140235350
 * Callers:
 *     MiSoftFaultMappedView @ 0x140202000 (MiSoftFaultMappedView.c)
 *     MiFillHyperPtes @ 0x140233F64 (MiFillHyperPtes.c)
 *     MiCopyToUserVa @ 0x140234540 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MiCaptureDeleteHierarchy @ 0x140250710 (MiCaptureDeleteHierarchy.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14025F3B4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiMakeProtoLeafValid @ 0x14031A4F4 (MiMakeProtoLeafValid.c)
 *     MiLockPageTableRange @ 0x140327A8C (MiLockPageTableRange.c)
 *     MiLockPagedAddress @ 0x14036B674 (MiLockPagedAddress.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C63D8 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052B898 (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x14053CDC0 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053D0CC (MiPrepareImagePagesForHotPatch.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140545CF0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140547C84 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140549030 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140549A9C (MiWriteEnclavePte.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiUpdateForkMaps @ 0x140559CD0 (MiUpdateForkMaps.c)
 *     MiMapUserLargePages @ 0x14055CC60 (MiMapUserLargePages.c)
 * Callees:
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14026F9F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MmIsAddressValidEx @ 0x1402CC2D0 (MmIsAddressValidEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiUnlockPageTable @ 0x1403B54F0 (MiUnlockPageTable.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140533AC8 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(
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
  __int64 AnyMultiplexedVm; // r12
  unsigned __int64 v11; // rdi
  BOOL v12; // r15d
  int v13; // ebp
  __int64 result; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  ULONG_PTR v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 SharedVm; // rsi
  char v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h]
  unsigned __int8 v23; // [rsp+88h] [rbp+20h]

  v23 = a4;
  v22 = a2;
  v5 = a2;
  v6 = a5;
  v8 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (a5 & 4) != 0 )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  else
    AnyMultiplexedVm = (__int64)&Process[1].ActiveProcessorsPadding[6];
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
      MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v23);
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
  result = MiLockLowestValidPageTable(AnyMultiplexedVm, BugCheckParameter4, &v21);
  if ( result != ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    MiUnlockPageTableInternal(AnyMultiplexedVm);
    goto LABEL_13;
  }
  return result;
}
