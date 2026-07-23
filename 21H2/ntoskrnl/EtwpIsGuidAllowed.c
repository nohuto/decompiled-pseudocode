/*
 * XREFs of EtwpIsGuidAllowed @ 0x140639580
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x140638390 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x1406BB1FC (EtwpIsRegEntryAllowed.c)
 *     EtwpDisallowedGuidAddition @ 0x140933DD4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1409340BC (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     bsearch @ 0x1403D25F0 (bsearch.c)
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
