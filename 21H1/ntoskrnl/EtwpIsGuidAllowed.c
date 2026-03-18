/*
 * XREFs of EtwpIsGuidAllowed @ 0x1405F2794
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1405F4850 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x14067F748 (EtwpIsRegEntryAllowed.c)
 *     EtwpDisallowedGuidAddition @ 0x14092F354 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14092F63C (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x1403CE040 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  bool v5; // di

  v2 = (signed __int64 *)(a1 + 704);
  ExAcquirePushLockSharedEx(a1 + 704, 0LL);
  if ( *(_WORD *)(a1 + 1048) )
    v5 = bsearch(a2, *(const void **)(a1 + 1056), *(unsigned __int16 *)(a1 + 1048), 0x10uLL, EtwpCompareGuid) == 0LL;
  else
    v5 = 1;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v5;
}
