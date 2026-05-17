/*
 * XREFs of _TpCallbackReleaseMutexOnCompletion@8 @ 0x4B3845D0
 * Callers:
 *     <none>
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpCallbackReleaseMutexOnCompletion(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( !a1 || !a2 || a2 == -1 || *(_DWORD *)(a1 + 88) )
    TppRaiseInvalidParameter();
  *(_DWORD *)(a1 + 80) |= 2u;
  *(_DWORD *)(a1 + 88) = a2;
  return result;
}
