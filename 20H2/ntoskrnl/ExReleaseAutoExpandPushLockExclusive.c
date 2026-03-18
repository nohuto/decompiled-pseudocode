/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x1403052B0
 * Callers:
 *     MiUnlockLoaderEntry @ 0x140252F08 (MiUnlockLoaderEntry.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 *     MiFreePhysicalPageChain @ 0x14054A0E8 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x14054A444 (MiFreePhysicalPages.c)
 *     MiUnlockAwePagesExclusive @ 0x14054C4A0 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054C4F8 (MiUnlockAweVadsExclusive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140390FB4 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
