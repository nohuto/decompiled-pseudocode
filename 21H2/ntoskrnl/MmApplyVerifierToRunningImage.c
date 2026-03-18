/*
 * XREFs of MmApplyVerifierToRunningImage @ 0x140A81214
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140A934D8 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140A9391C (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140A93A60 (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14029C6DC (MiIsImportOptimizationEnabled.c)
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 *     MmIsVerifierApplicableToImage @ 0x140583D08 (MmIsVerifierApplicableToImage.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmHasImageBeenImportOptimized @ 0x1406EB784 (MmHasImageBeenImportOptimized.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MmReplaceImportEntriesForVerifier @ 0x14096A1D0 (MmReplaceImportEntriesForVerifier.c)
 */

__int64 __fastcall MmApplyVerifierToRunningImage(_QWORD *a1, int *a2, unsigned int a3)
{
  struct _KTHREAD *Lock; // rsi
  int IsVerifierApplicableToImage; // ebx
  ULONG_PTR v8; // rcx
  int v9; // eax

  Lock = 0LL;
  if ( (MiFlags & 0x30) == 0x10 )
  {
    Lock = MmAcquireLoadLock();
    a1 = MiLookupDataTableEntry(a1[6], 1);
  }
  IsVerifierApplicableToImage = MmIsVerifierApplicableToImage((__int64)a1);
  if ( IsVerifierApplicableToImage >= 0 )
  {
    if ( MiIsImportOptimizationEnabled() && MmHasImageBeenImportOptimized() )
      v9 = MiReapplyImportOptimizationForDriverVerifier(v8, a2, a3);
    else
      v9 = MmReplaceImportEntriesForVerifier((__int64)a1, a2, a3);
    IsVerifierApplicableToImage = v9;
  }
  if ( Lock )
    MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)IsVerifierApplicableToImage;
}
