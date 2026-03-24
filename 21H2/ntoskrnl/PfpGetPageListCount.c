/*
 * XREFs of PfpGetPageListCount @ 0x1406C9D98
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1406C71A4 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406C7550 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x1406C9930 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406C9C7C (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x1406CB1FC (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x1407100D0 (PfpPrefetchPrivatePages.c)
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
