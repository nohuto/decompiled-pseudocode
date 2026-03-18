/*
 * XREFs of Control_EP_TransferEventHandler @ 0x1C0006AE0
 * Callers:
 *     <none>
 * Callees:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006B04 (Control_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1C0040AA8 (Control_ProcessTransferEventWithED0.c)
 */

__int64 __fastcall Control_EP_TransferEventHandler(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Control_ProcessTransferEventWithED1(a1, a2);
  else
    return Control_ProcessTransferEventWithED0(a1, a2);
}
