/*
 * XREFs of _ValidateDDEConvPair@8 @ 0x17FF6F
 * Callers:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _NtUserPostMessage@16 @ 0x6D25E (_NtUserPostMessage@16.c)
 *     __PostTransformableMessageIL@24 @ 0x7F87A (__PostTransformableMessageIL@24.c)
 *     __PostMessageCheckIL@20 @ 0x14EADF (__PostMessageCheckIL@20.c)
 * Callees:
 *     ?FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z @ 0x17E9C1 (-FindDdeConv@@YGPAUtagDDECONV@@PAUtagWND@@0@Z.c)
 */

BOOL __fastcall ValidateDDEConvPair(int a1, int a2)
{
  int v3; // eax

  v3 = ValidateHwnd(a1);
  return v3 && FindDdeConv(v3, a2);
}
