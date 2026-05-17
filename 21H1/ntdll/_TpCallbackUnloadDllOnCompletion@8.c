/*
 * XREFs of _TpCallbackUnloadDllOnCompletion@8 @ 0x4B2ED590
 * Callers:
 *     <none>
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpCallbackUnloadDllOnCompletion(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( !a1 || !a2 || a2 == -1 || *(_DWORD *)(a1 + 116) )
    TppRaiseInvalidParameter();
  *(_DWORD *)(a1 + 80) |= 0x80u;
  *(_DWORD *)(a1 + 116) = a2;
  return result;
}
