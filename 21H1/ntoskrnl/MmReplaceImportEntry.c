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
  ULONG_PTR v5; // rdi
  PVOID v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  __int64 SessionVm; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r8
  unsigned __int8 v13; // r13
  __int64 v14; // r8
  char v15; // r12
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28[9]; // [rsp+30h] [rbp-48h] BYREF
  ULONG Size; // [rsp+90h] [rbp+18h] BYREF
  int v31; // [rsp+98h] [rbp+20h] BYREF

  Size = 0;
  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter3, 1);
    v5 = v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter3, BugCheckParameter4);
    v6 = RtlImageDirectoryEntryToData(*(PVOID *)(v4 + 48), 1u, 0xCu, &Size);
    if ( !v6 || !Size || BugCheckParameter3 < (unsigned __int64)v6 || BugCheckParameter3 >= (unsigned __int64)v6 + Size )
      KeBugCheckEx(0x1Au, 0x1014uLL, v5, BugCheckParameter3, BugCheckParameter4);
  }
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter3);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
    return result;
  }
  v8 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter3) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v10 = 0LL;
  v11 = SessionVm;
  v13 = MiLockWorkingSetShared(SessionVm);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 )
      {
        if ( ((BugCheckParameter3 >> 9) & 0xFF8) != 0 )
          goto LABEL_17;
        MiUnlockPageTableInternal(v11, v10, v12);
      }
      v10 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v11, v10, 0LL);
LABEL_17:
      v28[0] = MI_READ_PTE_LOCK_FREE(v8);
      v15 = v28[0];
      if ( (v28[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v11, v10, v14);
      MiUnlockWorkingSetShared(v11, v13);
      MiLockWorkingSetShared(v11);
      MiLockPageTableInternal(v11, v10, 0LL);
    }
    v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v28) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( !MI_PFN_IS_PROTO(v16) )
      break;
    v19 = MiCopyOnWrite(BugCheckParameter3, (ULONG_PTR *)v8, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v19 < 0 )
    {
      MiUnlockPageTableInternal(v11, v10, v12);
      MiUnlockWorkingSetShared(v11, v13);
      MiCopyOnWriteCheckConditions(v11, (unsigned int)v19);
      MiLockWorkingSetShared(v11);
      MiLockPageTableInternal(v11, v10, 0LL);
    }
  }
  if ( (v15 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
  }
  else
  {
    v20 = MiMapPageInHyperSpaceWorker(v18, 0LL, 0x80000000, v18);
    LOBYTE(v21) = 17;
    v22 = (_QWORD *)((BugCheckParameter3 & 0xFFF) + v20);
    *v22 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v22, v21, 0x80000000);
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v31, v23, v24, v25);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    v26 = MiCaptureDirtyBitToPfn(v16);
    v27 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v16 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v26 )
      MiReleasePageFileInfo(v27, v26, 1);
  }
  MiUnlockPageTableInternal(v11, v10, v17);
  return MiUnlockWorkingSetShared(v11, v13);
}
