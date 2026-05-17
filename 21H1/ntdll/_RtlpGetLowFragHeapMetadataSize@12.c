/*
 * XREFs of _RtlpGetLowFragHeapMetadataSize@12 @ 0x4B370F75
 * Callers:
 *     _RtlpQueryMemoryUsageHeap@12 @ 0x4B35970A (_RtlpQueryMemoryUsageHeap@12.c)
 *     _GetUCBytes@12 @ 0x4B36D406 (_GetUCBytes@12.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlpGetLowFragHeapMetadataSize(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *result; // eax

  if ( *(_BYTE *)(a1 + 234) == 2 )
    v3 = *(_DWORD *)(a1 + 228);
  else
    v3 = 0;
  if ( v3 )
  {
    *a2 = *(_DWORD *)(v3 + 24) - v3;
    result = a3;
    *a3 = *(_DWORD *)(v3 + 20) - v3;
  }
  else
  {
    result = a3;
    *a3 = 0;
    *a2 = 0;
  }
  return result;
}
