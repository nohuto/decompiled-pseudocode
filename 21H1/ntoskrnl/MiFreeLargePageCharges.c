/*
 * XREFs of MiFreeLargePageCharges @ 0x14055898C
 * Callers:
 *     MiFreeContiguousPages @ 0x1402FA128 (MiFreeContiguousPages.c)
 *     MiFreeSmallPageFromMdl @ 0x140346A2C (MiFreeSmallPageFromMdl.c)
 *     MiFinishLargePageFree @ 0x1403F09F4 (MiFinishLargePageFree.c)
 *     MiFreeBootDriverPages @ 0x140A42C14 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x1402FA2F8 (MiReleaseNonPagedResources.c)
 */

unsigned __int64 __fastcall MiFreeLargePageCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 )
    return MiReleaseNonPagedResources(a1, a2);
  return result;
}
