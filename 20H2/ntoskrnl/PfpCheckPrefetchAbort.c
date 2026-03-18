/*
 * XREFs of PfpCheckPrefetchAbort @ 0x14024C988
 * Callers:
 *     PfpOpenHandleCreate @ 0x140634688 (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x140657C04 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchPrivatePages @ 0x1406F1214 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchRequestPerform @ 0x1406F18F0 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x1406F1FD4 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406F2380 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFiles @ 0x1408E20A0 (PfpPrefetchFiles.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpCheckPrefetchAbort(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(*a1 + 72LL);
  result = 1;
  if ( !v1 || !*(_DWORD *)(v1 + 4) )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) == 0 )
      return 0;
    v2 = a1[5];
    if ( !*(_DWORD *)(v2 + 72) && (*(_DWORD *)(v2 + 68) & 4) == 0 )
      return 0;
  }
  return result;
}
