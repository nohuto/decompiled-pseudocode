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
  ULONG_PTR v5; // rdi
  PVOID v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  __int64 SessionVm; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int8 v12; // r13
  char v13; // r12
  __int64 v14; // r14
  __int64 v15; // r9
  int v16; // r14d
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23[9]; // [rsp+30h] [rbp-48h] BYREF
  ULONG Size; // [rsp+90h] [rbp+18h] BYREF
  int v26; // [rsp+98h] [rbp+20h] BYREF

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
  v12 = MiLockWorkingSetShared(SessionVm);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 )
      {
        if ( ((BugCheckParameter3 >> 9) & 0xFF8) != 0 )
          goto LABEL_17;
        MiUnlockPageTableInternal(v11, v10);
      }
      v10 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v11, v10, 0LL);
LABEL_17:
      v23[0] = MI_READ_PTE_LOCK_FREE(v8);
      v13 = v23[0];
      if ( (v23[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v11, v10);
      MiUnlockWorkingSetShared(v11, v12);
      MiLockWorkingSetShared(v11);
      MiLockPageTableInternal(v11, v10, 0LL);
    }
    v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v23) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( !MI_PFN_IS_PROTO(v14) )
      break;
    v16 = MiCopyOnWrite(BugCheckParameter3, (ULONG_PTR *)v8, -1LL, 0);
    if ( v16 < 0 )
    {
      MiUnlockPageTableInternal(v11, v10);
      MiUnlockWorkingSetShared(v11, v12);
      MiCopyOnWriteCheckConditions(v11, (unsigned int)v16);
      MiLockWorkingSetShared(v11);
      MiLockPageTableInternal(v11, v10, 0LL);
    }
  }
  if ( (v13 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
  }
  else
  {
    v17 = (_QWORD *)((BugCheckParameter3 & 0xFFF) + MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000, v15));
    *v17 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v17, 0x11u, 0x80000000);
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v26, v18, v19, v20);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    v21 = MiCaptureDirtyBitToPfn(v14);
    v22 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v14 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v21 )
      MiReleasePageFileInfo(v22, v21, 1);
  }
  MiUnlockPageTableInternal(v11, v10);
  return MiUnlockWorkingSetShared(v11, v12);
}
