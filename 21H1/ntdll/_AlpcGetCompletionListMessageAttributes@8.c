/*
 * XREFs of _AlpcGetCompletionListMessageAttributes@8 @ 0x4B33EAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall AlpcGetCompletionListMessageAttributes(int a1, int a2)
{
  int v3; // eax

  if ( !*(_DWORD *)(a1 + 36) )
    return 0;
  v3 = ((_BYTE)a2 + (unsigned __int8)*(_WORD *)(a2 + 2)) & 3;
  return a2 + *(unsigned __int16 *)(a2 + 2) + (v3 != 0 ? 4 - v3 : 0);
}
