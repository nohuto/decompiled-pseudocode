/*
 * XREFs of MiFreeLargePageCharges @ 0x14055E6BC
 * Callers:
 *     MiFreeContiguousPages @ 0x140217D28 (MiFreeContiguousPages.c)
 *     MiFreeSmallPageFromMdl @ 0x14030ABF4 (MiFreeSmallPageFromMdl.c)
 *     MiFinishLargePageFree @ 0x1403F7A04 (MiFinishLargePageFree.c)
 *     MiFreeBootDriverPages @ 0x140A51050 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x140217EF8 (MiReleaseNonPagedResources.c)
 */

unsigned __int64 __fastcall MiFreeLargePageCharges(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax

  if ( a2 )
    return MiReleaseNonPagedResources(a1, a2, a3, a4);
  return result;
}
