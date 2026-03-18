/*
 * XREFs of ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30
 * Callers:
 *     FsRtlInsertPerFileContext @ 0x1402563D0 (FsRtlInsertPerFileContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1402A2FE0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402A3510 (FsRtlInsertPerFileObjectContext.c)
 *     MiLockLoaderEntry @ 0x1402D96AC (MiLockLoaderEntry.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     FsRtlRemovePerFileContext @ 0x1405417D0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1405418D0 (FsRtlRemovePerStreamContext.c)
 *     MiFreePhysicalPageChain @ 0x1405AA6C4 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiLockAwePagesExclusive @ 0x1405AB970 (MiLockAwePagesExclusive.c)
 *     MiLockAweVadsExclusive @ 0x1405AB9B8 (MiLockAweVadsExclusive.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406B41F0 (FsRtlTeardownPerFileContexts.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1407B1200 (FsRtlTeardownPerStreamContexts.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14039F294 (ExpAcquireFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int AbEntrySummary; // eax
  __int64 v6; // rcx
  int SessionId; // eax
  __int64 result; // rax

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v6, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
      _enable();
      v2 = (__int64)(&CurrentThread[1].Process + 12 * v6);
      if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v2 + 8) = SessionId;
      *(_QWORD *)v2 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v2, BugCheckParameter2);
  result = *(unsigned int *)(BugCheckParameter2 + 8);
  if ( (result & 1) != 0 )
    result = ExpAcquireFannedOutPushLockExclusive((unsigned int)result & 0xFFFFFFF8, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
