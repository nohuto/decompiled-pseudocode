/*
 * XREFs of MiLookupDataTableEntry @ 0x1402E776C
 * Callers:
 *     MiRemoveWsle @ 0x140338FE0 (MiRemoveWsle.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403A7F30 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x14052D1EC (MiShowBadMapper.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     MmWriteSystemImageTracepoint @ 0x14053F6F8 (MmWriteSystemImageTracepoint.c)
 *     MiImagePagable @ 0x1406D0B4C (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406D0C20 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406D0CD0 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406D0DD0 (MmChangeImageProtection.c)
 *     MmBackSystemImageWithPagefile @ 0x140780A8C (MmBackSystemImageWithPagefile.c)
 *     MiLogPinDriverAddress @ 0x1407B4E84 (MiLogPinDriverAddress.c)
 *     MmGetImageRetpolineCodePage @ 0x1407CDBA0 (MmGetImageRetpolineCodePage.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407D2BD0 (MmIsDriverVerifyingByAddress.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C6490 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C65B0 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x1408C81E8 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x1409B08B4 (MmMarkImageForHiberPhase.c)
 *     MmDiscardDriverSection @ 0x140A92E70 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     MmUnlockLoadedModuleListShared @ 0x14031C754 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14031C888 (MmLockLoadedModuleListShared.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall MiLookupDataTableEntry(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // edi
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  char v11; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = 0LL;
  v11 = 17;
  v5 = a2;
  v6 = a1;
  if ( (_DWORD)a2 == 2 )
  {
    MmLockLoadedModuleListShared(&v11, a2, a3, a4);
  }
  else if ( (_DWORD)a2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v7 = (_QWORD *)qword_140C4CD60;
  while ( v7 )
  {
    v8 = *(v7 - 23);
    a1 = v8 + (unsigned int)(*((_DWORD *)v7 - 42) - 1);
    if ( v6 > a1 )
    {
      v7 = (_QWORD *)v7[1];
    }
    else
    {
      if ( v6 >= v8 )
        break;
      v7 = (_QWORD *)*v7;
    }
  }
  v9 = (unsigned __int64)(v7 - 29) & -(__int64)(v7 != 0LL);
  if ( v5 == 2 )
  {
    LOBYTE(a1) = v11;
    MmUnlockLoadedModuleListShared(a1);
  }
  else if ( v5 == 1 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v9;
}
