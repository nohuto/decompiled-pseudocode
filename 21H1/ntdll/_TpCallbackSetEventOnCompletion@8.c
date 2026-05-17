/*
 * XREFs of _TpCallbackSetEventOnCompletion@8 @ 0x4B2F26D0
 * Callers:
 *     <none>
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpCallbackSetEventOnCompletion(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( !a1 || !a2 || a2 == -1 || *(_DWORD *)(a1 + 84) )
    TppRaiseInvalidParameter();
  *(_DWORD *)(a1 + 80) |= 4u;
  *(_DWORD *)(a1 + 84) = a2;
  return result;
}
