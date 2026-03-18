/*
 * XREFs of Bulk_EP_TransferEventHandler @ 0x1C000B5C0
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000B5E4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C000D328 (Bulk_ProcessTransferEventWithED0.c)
 */

__int64 __fastcall Bulk_EP_TransferEventHandler(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Bulk_ProcessTransferEventWithED1(a1, a2);
  else
    return Bulk_ProcessTransferEventWithED0(a1, a2);
}
