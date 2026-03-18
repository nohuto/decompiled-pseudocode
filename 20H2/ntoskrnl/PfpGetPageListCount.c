/*
 * XREFs of PfpGetPageListCount @ 0x14065806C
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x14064C34C (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchFilesTrickle @ 0x140657C04 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140657F50 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPrefetchPrivatePages @ 0x1406F1214 (PfpPrefetchPrivatePages.c)
 *     PfpVolumePrefetchMetadata @ 0x1406F1FD4 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406F2380 (PfpPrefetchDirectoryStream.c)
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
