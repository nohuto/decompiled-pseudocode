/*
 * XREFs of _TpCallbackSendPendingAlpcMessage@4 @ 0x4B384650
 * Callers:
 *     <none>
 * Callees:
 *     _TppCallbackSendAndDestroyAlpcMessage@4 @ 0x4B2ABDD8 (_TppCallbackSendAndDestroyAlpcMessage@4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

NTSTATUS __stdcall TpCallbackSendPendingAlpcMessage(int a1)
{
  NTSTATUS result; // eax

  if ( !a1 || (*(_BYTE *)(a1 + 132) & 1) == 0 )
    TppRaiseInvalidParameter();
  result = TppCallbackSendAndDestroyAlpcMessage(a1);
  *(_DWORD *)(a1 + 132) &= ~1u;
  return result;
}
