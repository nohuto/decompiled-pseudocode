/*
 * XREFs of _TpCallbackLeaveCriticalSectionOnCompletion@8 @ 0x4B3845A0
 * Callers:
 *     <none>
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpCallbackLeaveCriticalSectionOnCompletion(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( !a1 || !a2 || *(_DWORD *)(a1 + 112) )
    TppRaiseInvalidParameter();
  *(_DWORD *)(a1 + 80) |= 1u;
  *(_DWORD *)(a1 + 112) = a2;
  return result;
}
