/*
 * XREFs of MmReplaceImportEntry @ 0x14052FDFC
 * Callers:
 *     KsepPatchImportTableEntry @ 0x1408BBD90 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceImportEntry @ 0x1409D6400 (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409D6478 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409D6554 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409D6648 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiLookupDataTableEntry @ 0x140324C98 (MiLookupDataTableEntry.c)
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556408 (MiCopyOnWriteCheckConditions.c)
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
  __int64 v13; // r8
  unsigned __int8 v14; // r13
  __int64 v15; // r8
  char v16; // r12
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r14d
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+18h] BYREF
  int v32; // [rsp+98h] [rbp+20h] BYREF

  v31 = 0;
  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter3, 1);
    v6 = v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter3, BugCheckParameter4);
    LOBYTE(v5) = 1;
    v7 = RtlImageDirectoryEntryToData(*(_QWORD *)(v4 + 48), v5, 12, (int)&v31);
    if ( !v7 || !v31 || BugCheckParameter3 < v7 || BugCheckParameter3 >= v7 + v31 )
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
  v14 = MiLockWorkingSetShared(SessionVm);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
        if ( ((BugCheckParameter3 >> 9) & 0xFF8) != 0 )
          goto LABEL_17;
        MiUnlockPageTableInternal(v12, v11, v13);
      }
      v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v12, v11, 0LL);
LABEL_17:
      v29[0] = MI_READ_PTE_LOCK_FREE(v9);
      v16 = v29[0];
      if ( (v29[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v12, v11, v15);
      MiUnlockWorkingSetShared(v12, v14);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v11, 0LL);
    }
    v17 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v29) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( !MI_PFN_IS_PROTO(v17) )
      break;
    v20 = MiCopyOnWrite(BugCheckParameter3, (ULONG_PTR *)v9, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v20 < 0 )
    {
      MiUnlockPageTableInternal(v12, v11, v13);
      MiUnlockWorkingSetShared(v12, v14);
      MiCopyOnWriteCheckConditions(v12, (unsigned int)v20);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v11, 0LL);
    }
  }
  if ( (v16 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
  }
  else
  {
    v21 = MiMapPageInHyperSpaceWorker(v19, 0LL, 0x80000000, v19);
    LOBYTE(v22) = 17;
    v23 = (_QWORD *)((BugCheckParameter3 & 0xFFF) + v21);
    *v23 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v23, v22, 0x80000000);
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v32, v24, v25, v26);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    v27 = MiCaptureDirtyBitToPfn(v17);
    v28 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v17 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v27 )
      MiReleasePageFileInfo(v28, v27, 1);
  }
  MiUnlockPageTableInternal(v12, v11, v18);
  return MiUnlockWorkingSetShared(v12, v14);
}
