/*
 * XREFs of _TpCallbackReleaseSemaphoreOnCompletion@12 @ 0x4B384610
 * Callers:
 *     <none>
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

_DWORD *__stdcall TpCallbackReleaseSemaphoreOnCompletion(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // eax

  result = a1;
  if ( !a1 || !a2 || a2 == -1 || !a3 || a1[23] )
    TppRaiseInvalidParameter();
  a1[20] |= 8u;
  a1[23] = a2;
  a1[24] = a3;
  return result;
}
