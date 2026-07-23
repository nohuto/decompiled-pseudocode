/*
 * XREFs of _AlpcUnregisterCompletionListWorkerThread@4 @ 0x4B33ED90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl AlpcUnregisterCompletionListWorkerThread(PVOID CompletionList)
{
  unsigned int *v1; // edi
  unsigned int v2; // edx
  unsigned int v3; // esi
  unsigned int v5; // [esp+Ch] [ebp-4h]

  v1 = (unsigned int *)((char *)CompletionList + 64);
  while ( 1 )
  {
    v2 = *v1;
    if ( !HIWORD(*((_DWORD *)CompletionList + 17)) || (v2 & 0xFFFFFF) != 0xFFFFFF )
      break;
    v3 = *((_DWORD *)CompletionList + 17);
    v5 = *v1;
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)CompletionList + 8,
           __SPAIR64__((unsigned __int16)v3 | ((HIWORD(v3) - 1) << 16), v2),
           __SPAIR64__(v3, v2)) == __PAIR64__(v3, v5) )
      return 1;
  }
  return 0;
}
