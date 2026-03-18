/*
 * XREFs of MiLookupDataTableEntry @ 0x1402DFB98
 * Callers:
 *     MiRemoveWsle @ 0x1402440F0 (MiRemoveWsle.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403AB9B0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x140527D1C (MiShowBadMapper.c)
 *     MmReplaceImportEntry @ 0x14053044C (MmReplaceImportEntry.c)
 *     MmWriteSystemImageTracepoint @ 0x14053A228 (MmWriteSystemImageTracepoint.c)
 *     MiImagePagable @ 0x1406A884C (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406A88B0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406A8960 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406A8A60 (MmChangeImageProtection.c)
 *     MmBackSystemImageWithPagefile @ 0x14076E27C (MmBackSystemImageWithPagefile.c)
 *     MiLogPinDriverAddress @ 0x1407A22E4 (MiLogPinDriverAddress.c)
 *     MmGetImageRetpolineCodePage @ 0x1407BB050 (MmGetImageRetpolineCodePage.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407BFF50 (MmIsDriverVerifyingByAddress.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C2E90 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C2FB0 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x1408C4BE8 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x1409ADA44 (MmMarkImageForHiberPhase.c)
 *     MmDiscardDriverSection @ 0x140A90300 (MmDiscardDriverSection.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MmUnlockLoadedModuleListShared @ 0x140224598 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x1402247F4 (MmLockLoadedModuleListShared.c)
 */

__int64 __fastcall MiLookupDataTableEntry(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = 0LL;
  v9 = 17;
  if ( a2 == 2 )
  {
    MmLockLoadedModuleListShared(&v9);
  }
  else if ( a2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v5 = (_QWORD *)qword_140C4CB60;
  while ( v5 )
  {
    v6 = *(v5 - 23);
    if ( a1 > v6 + (unsigned int)(*((_DWORD *)v5 - 42) - 1) )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a1 >= v6 )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  v7 = (unsigned __int64)(v5 - 29) & -(__int64)(v5 != 0LL);
  if ( a2 == 2 )
  {
    MmUnlockLoadedModuleListShared(v9);
  }
  else if ( a2 == 1 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v7;
}
