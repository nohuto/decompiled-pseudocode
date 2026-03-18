/*
 * XREFs of MiLookupDataTableEntry @ 0x1402FDA80
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403C773C (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MiShowBadMapper @ 0x140593B18 (MiShowBadMapper.c)
 *     MmWriteSystemImageTracepoint @ 0x1405A40C4 (MmWriteSystemImageTracepoint.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x1406F5E50 (MmLockPagableDataSection.c)
 *     MiLogPinDriverAddress @ 0x140713440 (MiLogPinDriverAddress.c)
 *     MmPageEntireDriver @ 0x140761010 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x140761128 (MiImagePagable.c)
 *     MmIsDriverVerifyingByAddress @ 0x1407B4CE0 (MmIsDriverVerifyingByAddress.c)
 *     MmGetSectionRange @ 0x1408024FC (MmGetSectionRange.c)
 *     MmBackSystemImageWithPagefile @ 0x14080F66C (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x140969FB0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x14096A0D0 (MmAddVerifierThunks.c)
 *     MmGetImageRetpolineCodePage @ 0x140970DA0 (MmGetImageRetpolineCodePage.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x14097F73C (MiCheckVerifierFunctionsCfgState.c)
 *     MmMarkImageForHiberPhase @ 0x140A4F9F4 (MmMarkImageForHiberPhase.c)
 *     MmApplyVerifierToRunningImage @ 0x140A81214 (MmApplyVerifierToRunningImage.c)
 *     MmDiscardDriverSection @ 0x140B2FE74 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiLookupDataTableEntry(unsigned __int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 CurrentIrql; // di
  _QWORD *v6; // rbp
  _QWORD *v7; // rax
  unsigned __int8 v9; // cl
  unsigned __int64 v10; // r9
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v13; // r9
  int v14; // edx
  bool v15; // zf

  CurrentThread = 0LL;
  CurrentIrql = 17;
  v6 = 0LL;
  if ( a2 == 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 0xFu )
    {
      v9 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (v9 + 1)) & 0xFFFC;
        }
      }
    }
    ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
  }
  else if ( a2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v7 = (_QWORD *)BugCheckParameter3;
  if ( BugCheckParameter3 )
  {
    do
    {
      v10 = *(v7 - 23);
      if ( a1 > v10 + (unsigned int)(*((_DWORD *)v7 - 42) - 1) )
      {
        v7 = (_QWORD *)v7[1];
      }
      else
      {
        if ( a1 >= v10 )
        {
          if ( v7 )
            v6 = v7 - 29;
          break;
        }
        v7 = (_QWORD *)*v7;
      }
    }
    while ( v7 );
  }
  if ( a2 == 2 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( CurrentIrql < 0xFu )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  else if ( a2 == 1 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v6;
}
