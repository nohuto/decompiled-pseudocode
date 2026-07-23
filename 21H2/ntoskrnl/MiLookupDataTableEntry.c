/*
 * XREFs of MiLookupDataTableEntry @ 0x140298ABC
 * Callers:
 *     MiRemoveWsle @ 0x140343D30 (MiRemoveWsle.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403A8CC0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x14052D42C (MiShowBadMapper.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 *     MmWriteSystemImageTracepoint @ 0x14053F938 (MmWriteSystemImageTracepoint.c)
 *     MiImagePagable @ 0x1406A7E2C (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406A7F00 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406A7FB0 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406A80B0 (MmChangeImageProtection.c)
 *     MmBackSystemImageWithPagefile @ 0x140780C4C (MmBackSystemImageWithPagefile.c)
 *     MiLogPinDriverAddress @ 0x1407B67A4 (MiLogPinDriverAddress.c)
 *     MmGetImageRetpolineCodePage @ 0x1407CDD10 (MmGetImageRetpolineCodePage.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407D2D40 (MmIsDriverVerifyingByAddress.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C65F0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C6710 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x1408C8348 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x1409B17E4 (MmMarkImageForHiberPhase.c)
 *     MmDiscardDriverSection @ 0x140A93E70 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MmUnlockLoadedModuleListShared @ 0x1403274A4 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x1403275D8 (MmLockLoadedModuleListShared.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall MiLookupDataTableEntry(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rbx
  char v9; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = 0LL;
  v9 = 17;
  v4 = a1;
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
  v5 = (_QWORD *)qword_140C4CDA0;
  while ( v5 )
  {
    v6 = *(v5 - 23);
    a1 = v6 + (unsigned int)(*((_DWORD *)v5 - 42) - 1);
    if ( v4 > a1 )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( v4 >= v6 )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  v7 = (unsigned __int64)(v5 - 29) & -(__int64)(v5 != 0LL);
  if ( a2 == 2 )
  {
    LOBYTE(a1) = v9;
    MmUnlockLoadedModuleListShared(a1);
  }
  else if ( a2 == 1 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread(CurrentThread);
  }
  return v7;
}
