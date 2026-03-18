/*
 * XREFs of PfpGetPageListCount @ 0x1406401C8
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1405D2B24 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1405D2ED0 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x1405D3E50 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFilesTrickle @ 0x14063FD60 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406400AC (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x140650B2C (PfSnCheckActionsNeeded.c)
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
