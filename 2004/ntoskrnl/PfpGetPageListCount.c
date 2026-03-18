/*
 * XREFs of PfpGetPageListCount @ 0x14060B078
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14060AC10 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14060AF5C (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x1406B8CBC (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x1406D0954 (PfpPrefetchPrivatePages.c)
 *     PfpVolumePrefetchMetadata @ 0x1406D148C (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406D1838 (PfpPrefetchDirectoryStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpGetPageListCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  while ( a2 <= a3 )
    result += *(_QWORD *)(a1 + 8LL * a2++);
  return result;
}
