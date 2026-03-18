/*
 * XREFs of PfpGetPageListCount @ 0x1407E0884
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1406AE644 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406AEA14 (PfpPrefetchDirectoryStream.c)
 *     PfSnCheckActionsNeeded @ 0x1407DD3D0 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchFilesTrickle @ 0x1407E0408 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1407E0768 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPrefetchPrivatePages @ 0x140987430 (PfpPrefetchPrivatePages.c)
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
