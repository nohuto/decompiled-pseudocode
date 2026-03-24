/*
 * XREFs of MmReplaceImportEntry @ 0x14053591C
 * Callers:
 *     KsepPatchImportTableEntry @ 0x1408C05D0 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceImportEntry @ 0x1409D9470 (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x1409D94E8 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1409D95C4 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1409D96B8 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1402532D0 (RtlImageDirectoryEntryToData.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BEF8 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmReplaceImportEntry(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  int v7; // edx
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rbp
  __int64 SessionVm; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned __int8 v18; // r13
  char v19; // r12
  __int64 v20; // r14
  __int64 v21; // r9
  int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+90h] [rbp+18h] BYREF
  int v40; // [rsp+98h] [rbp+20h] BYREF

  v39 = 0;
  if ( PsLoadedModuleList )
  {
    v6 = MiLookupDataTableEntry(BugCheckParameter3, 1LL, a3, a4);
    v8 = v6;
    if ( !v6 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter3, BugCheckParameter4);
    LOBYTE(v7) = 1;
    v9 = RtlImageDirectoryEntryToData(*(_QWORD *)(v6 + 48), v7, 12, (int)&v39);
    if ( !v9 || !v39 || BugCheckParameter3 < v9 || BugCheckParameter3 >= v9 + v39 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v8, BugCheckParameter3, BugCheckParameter4);
  }
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter3);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
    return result;
  }
  v11 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter3) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v16 = 0LL;
  v17 = SessionVm;
  v18 = MiLockWorkingSetShared(SessionVm, v13, v14, v15);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v16 )
      {
        if ( ((BugCheckParameter3 >> 9) & 0xFF8) != 0 )
          goto LABEL_17;
        MiUnlockPageTableInternal(v17, v16);
      }
      v16 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v17, v16, 0LL);
LABEL_17:
      v37[0] = MI_READ_PTE_LOCK_FREE(v11);
      v19 = v37[0];
      if ( (v37[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v17, v16);
      MiUnlockWorkingSetShared(v17, v18);
      MiLockWorkingSetShared(v17, v26, v27, v28);
      MiLockPageTableInternal(v17, v16, 0LL);
    }
    v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v37) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( !MI_PFN_IS_PROTO(v20) )
      break;
    v22 = MiCopyOnWrite(BugCheckParameter3, (ULONG_PTR *)v11, -1LL, 0);
    if ( v22 < 0 )
    {
      MiUnlockPageTableInternal(v17, v16);
      MiUnlockWorkingSetShared(v17, v18);
      MiCopyOnWriteCheckConditions(v17, (unsigned int)v22);
      MiLockWorkingSetShared(v17, v23, v24, v25);
      MiLockPageTableInternal(v17, v16, 0LL);
    }
  }
  if ( (v19 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
  }
  else
  {
    v29 = MiMapPageInHyperSpaceWorker(v21, 0LL, 0x80000000);
    LOBYTE(v30) = 17;
    v31 = (_QWORD *)((BugCheckParameter3 & 0xFFF) + v29);
    *v31 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v31, v30, 0x80000000);
    v40 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v40, v32, v33, v34);
      while ( *(__int64 *)(v20 + 24) < 0 );
    }
    v35 = MiCaptureDirtyBitToPfn(v20);
    v36 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v20 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v35 )
      MiReleasePageFileInfo(v36, v35, 1);
  }
  MiUnlockPageTableInternal(v17, v16);
  return MiUnlockWorkingSetShared(v17, v18);
}
