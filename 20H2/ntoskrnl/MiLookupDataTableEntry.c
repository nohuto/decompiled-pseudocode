/*
 * XREFs of MiLookupDataTableEntry @ 0x14030CDEC
 * Callers:
 *     MiRemoveWsle @ 0x1402BC4C0 (MiRemoveWsle.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403ADF80 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x14052B6EC (MiShowBadMapper.c)
 *     MmReplaceImportEntry @ 0x140533E1C (MmReplaceImportEntry.c)
 *     MmWriteSystemImageTracepoint @ 0x14053DBF8 (MmWriteSystemImageTracepoint.c)
 *     MmChangeImageProtection @ 0x140658F80 (MmChangeImageProtection.c)
 *     MiImagePagable @ 0x1406B943C (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406B94A0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406B9550 (MmLockPagableDataSection.c)
 *     MmBackSystemImageWithPagefile @ 0x14077CCAC (MmBackSystemImageWithPagefile.c)
 *     MiLogPinDriverAddress @ 0x1407B1614 (MiLogPinDriverAddress.c)
 *     MmGetImageRetpolineCodePage @ 0x1407C98E0 (MmGetImageRetpolineCodePage.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407CE7E0 (MmIsDriverVerifyingByAddress.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C8CD0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C8DF0 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x1408CAA28 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x1409B39B4 (MmMarkImageForHiberPhase.c)
 *     MmDiscardDriverSection @ 0x140A96000 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     MmUnlockLoadedModuleListShared @ 0x140297044 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140297178 (MmLockLoadedModuleListShared.c)
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
  v5 = (_QWORD *)qword_140C4CBE0;
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
