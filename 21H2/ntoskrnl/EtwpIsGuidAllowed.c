/*
 * XREFs of EtwpIsGuidAllowed @ 0x140797B54
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x140790B38 (EtwpIsRegEntryAllowed.c)
 *     EtwpAddRegEntryToGroup @ 0x140794F30 (EtwpAddRegEntryToGroup.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E448C (EtwpNotifyDisallowedGuidChange.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x1403E1840 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  bool v5; // di

  v2 = (signed __int64 *)(a1 + 688);
  ExAcquirePushLockSharedEx(a1 + 688, 0LL);
  if ( *(_WORD *)(a1 + 1064) )
    v5 = bsearch(a2, *(const void **)(a1 + 1072), *(unsigned __int16 *)(a1 + 1064), 0x10uLL, EtwpCompareGuid) == 0LL;
  else
    v5 = 1;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v5;
}
