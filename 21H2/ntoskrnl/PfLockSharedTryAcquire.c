/*
 * XREFs of PfLockSharedTryAcquire @ 0x140360258
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1407DBC0C (PfCheckDeprioritizeFile.c)
 * Callees:
 *     ExfTryAcquirePushLockSharedEx @ 0x140220664 (ExfTryAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 */

__int64 __fastcall PfLockSharedTryAcquire(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v6; // rcx
  int SessionId; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  AbEntrySummary = v3->AbEntrySummary;
  if ( v3->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, (__int64)v3)) != 0 )
  {
    _BitScanForward((unsigned int *)&v6, AbEntrySummary);
    v3->AbEntrySummary = AbEntrySummary & ~(1 << v6);
    _enable();
    v4 = (unsigned __int64)(&v3[1].Process + 12 * v6);
    if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL)
    || ExfTryAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0) )
  {
    if ( v4 )
      *(_BYTE *)(v4 + 18) = 1;
    return 1LL;
  }
  else
  {
    if ( v4 )
      KeAbPostReleaseEx(BugCheckParameter2, v4);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
