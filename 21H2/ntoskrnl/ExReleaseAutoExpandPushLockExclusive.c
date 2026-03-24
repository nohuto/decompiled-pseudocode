/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x1402A22D0
 * Callers:
 *     MiUnlockLoaderEntry @ 0x1402E74F0 (MiUnlockLoaderEntry.c)
 *     MiDeletePagablePteRange @ 0x140337360 (MiDeletePagablePteRange.c)
 *     MiFreePhysicalPageChain @ 0x14054BBE8 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x14054BF44 (MiFreePhysicalPages.c)
 *     MiUnlockAwePagesExclusive @ 0x14054DFA0 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054DFF8 (MiUnlockAweVadsExclusive.c)
 * Callees:
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140391484 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  int v4; // eax
  int v5; // ecx
  __int64 result; // rax

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v4 & 1) != 0 )
  {
    ExpReleaseFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
  }
  else
  {
    v5 = *(_DWORD *)(BugCheckParameter2 + 12);
    if ( (v5 & 0xF0000u) < 0xF0000 )
      *(_DWORD *)(BugCheckParameter2 + 12) = v5 + 0x10000;
  }
  result = ExReleasePushLockEx(BugCheckParameter2, 2uLL);
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease(BugCheckParameter2);
  return result;
}
