/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x140331DC0
 * Callers:
 *     MiDeletePagablePteRange @ 0x140242470 (MiDeletePagablePteRange.c)
 *     MiUnlockLoaderEntry @ 0x1402E095C (MiUnlockLoaderEntry.c)
 *     MiFreePhysicalPageChain @ 0x140546718 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x140546A74 (MiFreePhysicalPages.c)
 *     MiUnlockAwePagesExclusive @ 0x140548AD0 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x140548B28 (MiUnlockAweVadsExclusive.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14038EAC4 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

char __fastcall ExReleaseAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  int v4; // eax
  int v5; // ecx
  char result; // al

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
