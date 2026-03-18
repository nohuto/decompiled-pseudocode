/*
 * XREFs of VerifierMmMapLockedPages @ 0x1409E9B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1409DA2C0 (ViTargetAddToCounter.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1409DF978 (VfFaultsIsSystemSufficientlyBooted.c)
 *     VfAllocPoolNotification @ 0x1409E2FC4 (VfAllocPoolNotification.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1409EA588 (ViMmMapLockedPagesSanityChecks.c)
 */

__int64 __fastcall VerifierMmMapLockedPages(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // di
  __int64 v4; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  if ( (MmVerifierData & 1) != 0 )
    ViMmMapLockedPagesSanityChecks(BugCheckParameter2);
  if ( (*(_WORD *)(BugCheckParameter2 + 10) & 0x2000) == 0
    && (unsigned int)VfFaultsIsSystemSufficientlyBooted()
    && (MmVerifierData & 1) != 0 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x81uLL, BugCheckParameter2, *(__int16 *)(BugCheckParameter2 + 10), 0LL);
  }
  LOBYTE(a2) = v2;
  v4 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvMmMapLockedPagesSpecifyCache)(
         BugCheckParameter2,
         a2,
         1LL);
  VfAllocPoolNotification();
  if ( v4 && (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 192LL, 0xC8u, *(unsigned int *)(BugCheckParameter2 + 40));
  return v4;
}
