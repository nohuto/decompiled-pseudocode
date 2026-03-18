/*
 * XREFs of ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14037CE7C
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14037C880 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 */

__int64 __fastcall StLockTryAcquireExclusive(ULONG_PTR BugCheckParameter2, unsigned int *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v8; // rcx
  int SessionId; // eax
  __int64 result; // rax
  struct _KTHREAD *v11; // rcx
  bool v12; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeGetCurrentThread();
  v6 = 0LL;
  _disable();
  AbEntrySummary = v5->AbEntrySummary;
  if ( v5->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, (__int64)v5)) != 0 )
  {
    _BitScanForward((unsigned int *)&v8, AbEntrySummary);
    v5->AbEntrySummary = AbEntrySummary & ~(1 << v8);
    _enable();
    v6 = (unsigned __int64)(&v5[1].Process + 12 * v8);
    if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx(BugCheckParameter2, v6);
    v11 = KeGetCurrentThread();
    v12 = v11->SpecialApcDisable++ == -1;
    if ( v12 && ($CEA84C04E3712D858E5667A507841A2A *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  else
  {
    result = 1LL;
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    *a2 = 1;
  }
  return result;
}
