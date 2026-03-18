/*
 * XREFs of MmReplaceImportEntry @ 0x14053044C
 * Callers:
 *     KsepPatchImportTableEntry @ 0x1408BD0B0 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceImportEntry @ 0x1409D6460 (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409D64D8 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409D65B4 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409D66A8 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556A58 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  __int64 v4; // rax
  int v5; // edx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  __int64 SessionVm; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int8 v13; // r13
  char v14; // r12
  __int64 v15; // r14
  __int64 v16; // r9
  int v17; // r14d
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+18h] BYREF
  int v27; // [rsp+98h] [rbp+20h] BYREF

  v26 = 0;
  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter3, 1);
    v6 = v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter3, BugCheckParameter4);
    LOBYTE(v5) = 1;
    v7 = RtlImageDirectoryEntryToData(*(_QWORD *)(v4 + 48), v5, 12, (int)&v26);
    if ( !v7 || !v26 || BugCheckParameter3 < v7 || BugCheckParameter3 >= v7 + v26 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v6, BugCheckParameter3, BugCheckParameter4);
  }
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter3);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
    return result;
  }
  v9 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter3) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v11 = 0LL;
  v12 = SessionVm;
  v13 = MiLockWorkingSetShared(SessionVm);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
        if ( ((BugCheckParameter3 >> 9) & 0xFF8) != 0 )
          goto LABEL_17;
        MiUnlockPageTableInternal(v12, v11);
      }
      v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v12, v11, 0LL);
LABEL_17:
      v24[0] = MI_READ_PTE_LOCK_FREE(v9);
      v14 = v24[0];
      if ( (v24[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v12, v11);
      MiUnlockWorkingSetShared(v12, v13);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v11, 0LL);
    }
    v15 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v24) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( !MI_PFN_IS_PROTO(v15) )
      break;
    v17 = MiCopyOnWrite(BugCheckParameter3, (ULONG_PTR *)v9, -1LL, 0);
    if ( v17 < 0 )
    {
      MiUnlockPageTableInternal(v12, v11);
      MiUnlockWorkingSetShared(v12, v13);
      MiCopyOnWriteCheckConditions(v12, (unsigned int)v17);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v11, 0LL);
    }
  }
  if ( (v14 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
  }
  else
  {
    v18 = (_QWORD *)((BugCheckParameter3 & 0xFFF) + MiMapPageInHyperSpaceWorker(v16, 0LL, 0x80000000, v16));
    *v18 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v18, 0x11u, 0x80000000);
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27, v19, v20, v21);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    v22 = MiCaptureDirtyBitToPfn(v15);
    v23 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v22 )
      MiReleasePageFileInfo(v23, v22, 1);
  }
  MiUnlockPageTableInternal(v12, v11);
  return MiUnlockWorkingSetShared(v12, v13);
}
