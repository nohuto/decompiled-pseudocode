/*
 * XREFs of _AlpcGetCompletionListLastMessageInformation@12 @ 0x4B33EAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall AlpcGetCompletionListLastMessageInformation(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  *a2 = *(_DWORD *)(a1 + 72);
  result = a3;
  *a3 = *(_DWORD *)(a1 + 76);
  return result;
}
