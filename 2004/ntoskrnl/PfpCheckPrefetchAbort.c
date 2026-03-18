/*
 * XREFs of PfpCheckPrefetchAbort @ 0x140263D2C
 * Callers:
 *     PfpOpenHandleCreate @ 0x14060587C (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x14060AC10 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchPrivatePages @ 0x1406D0954 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchRequestPerform @ 0x1406D0DA8 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x1406D148C (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406D1838 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFiles @ 0x1408DC260 (PfpPrefetchFiles.c)
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
