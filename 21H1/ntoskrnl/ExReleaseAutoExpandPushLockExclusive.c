/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x1402F5090
 * Callers:
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     MiUnlockLoaderEntry @ 0x140325A5C (MiUnlockLoaderEntry.c)
 *     MiFreePhysicalPageChain @ 0x1405460C8 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x140546424 (MiFreePhysicalPages.c)
 *     MiUnlockAwePagesExclusive @ 0x140548480 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1405484D8 (MiUnlockAweVadsExclusive.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14038DF54 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
