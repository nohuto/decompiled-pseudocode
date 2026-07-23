/*
 * XREFs of _AlpcRegisterCompletionListWorkerThread@4 @ 0x4B33ECE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl AlpcRegisterCompletionListWorkerThread(PVOID CompletionList)
{
  volatile signed __int64 *v1; // edi
  unsigned int v2; // esi
  unsigned int v4; // [esp+Ch] [ebp-4h]

  v1 = (volatile signed __int64 *)((char *)CompletionList + 64);
  while ( HIWORD(*((_DWORD *)CompletionList + 17)) != 0xFFFF )
  {
    v2 = *((_DWORD *)CompletionList + 17);
    v4 = *(_DWORD *)v1;
    if ( _InterlockedCompareExchange64(
           v1,
           __SPAIR64__(
             (unsigned __int16)v2 | (unsigned int)((__PAIR64__(v2 & 0xFFFF0000, 0) + 0x1000000000000LL) >> 32),
             *(_DWORD *)v1),
           __SPAIR64__(v2, *(_DWORD *)v1)) == __PAIR64__(v2, v4) )
      return 1;
  }
  return 0;
}
