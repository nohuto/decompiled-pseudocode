/*
 * XREFs of VerifierMmMapLockedPagesSpecifyCache @ 0x1409E9BF0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     VfCheckPagePriority @ 0x1409CAC24 (VfCheckPagePriority.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1409DA2C0 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DF83C (VfFaultsInjectResourceFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1409DF978 (VfFaultsIsSystemSufficientlyBooted.c)
 *     VfAllocPoolNotification @ 0x1409E2FC4 (VfAllocPoolNotification.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1409EA588 (ViMmMapLockedPagesSanityChecks.c)
 */

PVOID __fastcall VerifierMmMapLockedPagesSpecifyCache(
        struct _MDL *BugCheckParameter2,
        KPROCESSOR_MODE a2,
        MEMORY_CACHING_TYPE a3,
        void *a4,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  PVOID v10; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 1) != 0 )
    ViMmMapLockedPagesSanityChecks((ULONG_PTR)BugCheckParameter2);
  VfCheckPagePriority(Priority, retaddr);
  if ( (BugCheckParameter2->MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
  {
    if ( (unsigned int)VfFaultsIsSystemSufficientlyBooted() && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(
        0xC4u,
        0x82uLL,
        (ULONG_PTR)BugCheckParameter2,
        BugCheckParameter2->MdlFlags,
        BugCheckOnFailure);
    goto LABEL_8;
  }
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) != 1 )
  {
LABEL_8:
    v10 = MmMapLockedPagesSpecifyCache(BugCheckParameter2, a2, a3, a4, BugCheckOnFailure, Priority);
    VfAllocPoolNotification();
    if ( v10 )
    {
      if ( (MmVerifierData & 0x1000) != 0 )
        ViTargetAddToCounter(retaddr, 192LL, 0xC8u, BugCheckParameter2->ByteCount);
    }
    return v10;
  }
  if ( a2 )
    RtlRaiseStatus(-1073741670);
  return 0LL;
}
