/*
 * XREFs of _AlpcGetOutstandingCompletionListMessageCount@4 @ 0x4B33EC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall AlpcGetOutstandingCompletionListMessageCount(int a1)
{
  return *(_DWORD *)(a1 + 128) - *(_DWORD *)(a1 + 192);
}
