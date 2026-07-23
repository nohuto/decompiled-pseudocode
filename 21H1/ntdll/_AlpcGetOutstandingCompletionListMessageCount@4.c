/*
 * XREFs of _AlpcGetOutstandingCompletionListMessageCount@4 @ 0x4B33EC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl AlpcGetOutstandingCompletionListMessageCount(PVOID CompletionList)
{
  return *((_DWORD *)CompletionList + 32) - *((_DWORD *)CompletionList + 48);
}
