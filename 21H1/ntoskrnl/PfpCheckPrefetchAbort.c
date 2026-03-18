/*
 * XREFs of PfpCheckPrefetchAbort @ 0x1402BCD5C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1405D2440 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x1405D2B24 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1405D2ED0 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x1405D3E50 (PfpPrefetchPrivatePages.c)
 *     PfpOpenHandleCreate @ 0x14063A8BC (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x14063FD60 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408DAEF0 (PfpPrefetchFiles.c)
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
