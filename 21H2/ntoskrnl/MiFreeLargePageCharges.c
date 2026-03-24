/*
 * XREFs of MiFreeLargePageCharges @ 0x14055E47C
 * Callers:
 *     MiFreeContiguousPages @ 0x140296068 (MiFreeContiguousPages.c)
 *     MiFreeSmallPageFromMdl @ 0x1402FFEA4 (MiFreeSmallPageFromMdl.c)
 *     MiFinishLargePageFree @ 0x1403F7A04 (MiFinishLargePageFree.c)
 *     MiFreeBootDriverPages @ 0x140A50050 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x140296B90 (MiReleaseNonPagedResources.c)
 */

unsigned __int64 __fastcall MiFreeLargePageCharges(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 )
    return MiReleaseNonPagedResources(a1, a2);
  return result;
}
