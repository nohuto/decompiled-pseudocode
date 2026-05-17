/*
 * XREFs of _TpAlpcUnregisterCompletionList@4 @ 0x4B383450
 * Callers:
 *     <none>
 * Callees:
 *     _TppAlpcpValidateAlpc@12 @ 0x4B2E9A18 (_TppAlpcpValidateAlpc@12.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpAlpcUnregisterCompletionList(int a1)
{
  int result; // eax

  result = TppAlpcpValidateAlpc(a1, 0, 1);
  if ( !result || (*(_BYTE *)(a1 + 180) & 1) == 0 )
    TppRaiseInvalidParameter();
  *(_DWORD *)(a1 + 180) &= ~2u;
  return result;
}
