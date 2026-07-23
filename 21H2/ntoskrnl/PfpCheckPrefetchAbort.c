/*
 * XREFs of PfpCheckPrefetchAbort @ 0x140272EDC
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140674268 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x140675A94 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140675E40 (PfpPrefetchDirectoryStream.c)
 *     PfpOpenHandleCreate @ 0x140677DE8 (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x140678220 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchPrivatePages @ 0x1406BE720 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x1408DF9C0 (PfpPrefetchFiles.c)
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
