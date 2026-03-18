/*
 * XREFs of ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03C1D6C
 * Callers:
 *     ?SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C0070F60 (-SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??$SmmAcquirePushLockExclusive@$0CF@@@YAXPEAU?$SYSMM_PUSHLOCK@$0CF@@@@Z @ 0x1C006D6F4 (--$SmmAcquirePushLockExclusive@$0CF@@@YAXPEAU-$SYSMM_PUSHLOCK@$0CF@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$02@@YAXPEAU?$SYSMM_PUSHLOCK@$02@@@Z @ 0x1C006D73C (--$SmmReleasePushLockExclusive@$02@@YAXPEAU-$SYSMM_PUSHLOCK@$02@@@Z.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x1C0070E18 (SmmUnmapLockedPagesFromIommu.c)
 *     SmmUnlockPages @ 0x1C03C1EB8 (SmmUnlockPages.c)
 */

void __fastcall SmmUnlockPagedObject(struct SYSMM_PHYSICAL_OBJECT *a1, struct SYSMM_ADAPTER_OBJECT *a2)
{
  __int64 v2; // rbp

  v2 = *((_QWORD *)a2 + 2);
  SmmAcquirePushLockExclusive<37>((__int64)a1 + 32);
  if ( !*((_DWORD *)a1 + 12) )
  {
    WdLogSingleEntry1(1LL, 476LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPhysicalObject->PagedData.LockData.LockCount > 0",
      476LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    WdLogSingleEntry1(1LL, 477LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPhysicalObject->PagedData.LockData.Mdl != nullptr",
      477LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)a1 + 12))-- == 1 )
  {
    if ( *((_DWORD *)a2 + 8) )
      WdLogSingleEntry5(0LL, 484LL, 5LL, a2, v2, *((_QWORD *)a1 + 7));
    SmmUnmapLockedPagesFromIommu(v2, (__int64)a1, (__int64)a2, *((_DWORD **)a1 + 7));
    SmmUnlockPages(*((PMDL *)a1 + 7));
    *((_QWORD *)a1 + 7) = 0LL;
  }
  SmmReleasePushLockExclusive<3>((__int64)a1 + 32);
}
