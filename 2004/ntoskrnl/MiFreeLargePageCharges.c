/*
 * XREFs of MiFreeLargePageCharges @ 0x140558FDC
 * Callers:
 *     MiFreeSmallPageFromMdl @ 0x1403176EC (MiFreeSmallPageFromMdl.c)
 *     MiFreeContiguousPages @ 0x140337158 (MiFreeContiguousPages.c)
 *     MiFinishLargePageFree @ 0x1403F1D54 (MiFinishLargePageFree.c)
 *     MiFreeBootDriverPages @ 0x140A48474 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x140337328 (MiReleaseNonPagedResources.c)
 */

unsigned __int64 __fastcall MiFreeLargePageCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 )
    return MiReleaseNonPagedResources(a1, a2);
  return result;
}
