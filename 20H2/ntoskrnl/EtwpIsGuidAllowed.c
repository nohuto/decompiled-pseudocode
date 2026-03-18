/*
 * XREFs of EtwpIsGuidAllowed @ 0x14066A9D0
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x140669A60 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x14071A404 (EtwpIsRegEntryAllowed.c)
 *     EtwpDisallowedGuidAddition @ 0x140936434 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14093671C (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x1403D1B10 (bsearch.c)
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
