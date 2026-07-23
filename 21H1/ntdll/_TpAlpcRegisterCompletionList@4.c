/*
 * XREFs of _TpAlpcRegisterCompletionList@4 @ 0x4B383400
 * Callers:
 *     <none>
 * Callees:
 *     _TppFastAlpcAdjustConcurrencyCount@4 @ 0x4B2B7189 (_TppFastAlpcAdjustConcurrencyCount@4.c)
 *     _TppAlpcpValidateAlpc@12 @ 0x4B2E9A18 (_TppAlpcpValidateAlpc@12.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

int __stdcall TpAlpcRegisterCompletionList(int a1)
{
  if ( !TppAlpcpValidateAlpc(a1, 0, 1) || (*(_BYTE *)(a1 + 180) & 1) == 0 )
    TppRaiseInvalidParameter();
  _InterlockedExchange((volatile __int32 *)(a1 + 176), 0);
  *(_DWORD *)(a1 + 180) |= 2u;
  return TppFastAlpcAdjustConcurrencyCount(a1);
}
