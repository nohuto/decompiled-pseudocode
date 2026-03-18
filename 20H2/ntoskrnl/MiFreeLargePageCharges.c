/*
 * XREFs of MiFreeLargePageCharges @ 0x14055C9AC
 * Callers:
 *     MiFreeContiguousPages @ 0x140261B18 (MiFreeContiguousPages.c)
 *     MiFreeSmallPageFromMdl @ 0x14034E0A4 (MiFreeSmallPageFromMdl.c)
 *     MiFinishLargePageFree @ 0x1403F6268 (MiFinishLargePageFree.c)
 *     MiFreeBootDriverPages @ 0x140A4E704 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x140262BF8 (MiReleaseNonPagedResources.c)
 */

unsigned __int64 __fastcall MiFreeLargePageCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 )
    return MiReleaseNonPagedResources(a1, a2);
  return result;
}
