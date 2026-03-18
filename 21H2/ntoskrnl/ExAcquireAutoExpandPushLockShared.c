/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x14029EDB0
 * Callers:
 *     FsRtlLookupPerFileContext @ 0x140258F50 (FsRtlLookupPerFileContext.c)
 *     MiLockAwePagesShared @ 0x1405AB994 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x1405AB9F0 (MiLockAweVadsShared.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  unsigned int v2; // r14d
  __int64 v4; // rdi
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int AbEntrySummary; // eax
  __int64 v8; // rcx
  int SessionId; // eax
  unsigned int v10; // eax
  ULONG_PTR v11; // rbx
  unsigned __int64 v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // ecx
  volatile signed __int64 *v16; // rbp

  v2 = BugCheckParameter1;
  v4 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v5 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v8, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
      _enable();
      v4 = (__int64)(&CurrentThread[1].Process + 12 * v8);
      if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v4 + 8) = SessionId;
      *(_QWORD *)v4 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
  }
  v10 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v10 & 1) != 0 )
  {
    v13 = v10;
    v14 = (v10 >> 13) & 0x3FFFF;
    _BitScanReverse(&v15, v14);
    v16 = (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v15 - 2)
                                                + 8LL * (v14 ^ (1 << v15))
                                                + 8)
                                    + 8 * ((v13 >> 4) & 0x1FF));
    if ( _InterlockedCompareExchange64(v16, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v16, v2, v4, BugCheckParameter2);
    v11 = (ULONG_PTR)v16;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, v2, v4, BugCheckParameter2);
    v11 = BugCheckParameter2 | 1;
  }
  if ( !v5 )
    v11 |= 2uLL;
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  return v11;
}
