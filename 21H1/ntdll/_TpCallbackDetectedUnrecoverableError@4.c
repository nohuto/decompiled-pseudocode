/*
 * XREFs of _TpCallbackDetectedUnrecoverableError@4 @ 0x4B384570
 * Callers:
 *     <none>
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpCallbackDetectedUnrecoverableError(int a1)
{
  if ( !a1 )
    TppRaiseInvalidParameter();
  *(_BYTE *)(a1 + 40) |= 4u;
  *(_DWORD *)(a1 + 56) = 220;
  return 0;
}
