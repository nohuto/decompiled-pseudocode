/*
 * XREFs of AlpcUnregisterCompletionListWorkerThread @ 0x180076210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl AlpcUnregisterCompletionListWorkerThread(PVOID CompletionList)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rtt

  while ( 1 )
  {
    v1 = *((_QWORD *)CompletionList + 8);
    if ( !HIWORD(v1) || (v1 & 0xFFFFFF) != 0xFFFFFF )
      break;
    v2 = *((_QWORD *)CompletionList + 8);
    if ( v2 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)CompletionList + 8,
                 v1 & 0xFFFFFFFFFFFFLL | ((HIWORD(v1) - 1) << 48),
                 v1) )
      return 1;
  }
  return 0;
}
