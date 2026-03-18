/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x1402076E0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiAbThreadClearAcquiredLockEntry @ 0x140207EF0 (KiAbThreadClearAcquiredLockEntry.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseCacheAwarePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  __int64 result; // rax
  ULONG_PTR v5; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // r8
  unsigned __int8 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // rdx

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 16);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v8 = ++CurrentThread->AbAllocationRegionCount;
    v9 = KiAbThreadClearAcquiredLockEntry(CurrentThread, v5, SessionId);
    v12 = v9;
    if ( v9 )
    {
      *(_BYTE *)(v9 + 32) |= 2u;
      if ( *(__int64 *)(v9 + 32) < 0 )
        KiAbEntryRemoveFromTree(v9, v10, v11);
      v13 = *(_DWORD *)(v12 + 88) & 0xFFFE0000;
      *(_BYTE *)(v12 + 25) &= ~1u;
      *(_DWORD *)(v12 + 88) = v13;
      *(_QWORD *)(v12 + 32) = 0LL;
      v14 = (signed __int64)(v12 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v8 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v14;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
    }
    else if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, (unsigned int)v11, 0LL);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
    return KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  return result;
}
