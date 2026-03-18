/*
 * XREFs of VerifierExInitializeLookasideListEx @ 0x1409DE130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C3AEC (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfCheckPoolType @ 0x1409C4D44 (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x1409D3EC0 (VfTargetDriversIsEnabled.c)
 *     ViLookasideAdd @ 0x1409DE544 (ViLookasideAdd.c)
 */

__int64 __fastcall VerifierExInitializeLookasideListEx(
        _QWORD *BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        ULONG_PTR BugCheckParameter3,
        int a7,
        __int16 a8)
{
  int IsEnabled; // edi
  int v13; // esi
  unsigned __int64 retaddr; // [rsp+78h] [rbp+0h]

  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  if ( IsEnabled )
  {
    VfCheckPoolType(a4, retaddr, a7);
    if ( BugCheckParameter3 < 8 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, 8LL);
    VfUtilSynchronizationObjectSanityChecks(BugCheckParameter2, 0x60uLL);
  }
  v13 = pXdvExInitializeLookasideListEx(
          (int)BugCheckParameter2,
          a2,
          a3,
          a4,
          a5,
          BugCheckParameter3,
          a7,
          a8,
          IsEnabled,
          (__int64)ExInitializeLookasideListExInternal);
  if ( v13 >= 0 )
  {
    if ( (IsEnabled || KernelVerifier)
      && (PVOID (__fastcall *)(POOL_TYPE, SIZE_T, ULONG, PLOOKASIDE_LIST_EX))BugCheckParameter2[6] == CmpAllocateTransientPoolWithTag
      && (__int64 (__fastcall *)(ULONG_PTR))BugCheckParameter2[7] == ExFreePoolEx )
    {
      BugCheckParameter2[6] = VerifierExAllocatePoolEx;
      BugCheckParameter2[7] = VerifierExFreePoolEx;
    }
    ViLookasideAdd((ULONG_PTR)BugCheckParameter2);
  }
  return (unsigned int)v13;
}
