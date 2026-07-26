/*
 * XREFs of ?ndisMCheckReceiveFilterPacketCoalescingAttributes@@YAHPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1C001EE1C
 * Callers:
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C001EBB0 (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMCheckReceiveFilterPacketCoalescingAttributes(struct _NDIS_RECEIVE_FILTER_CAPABILITIES *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (a1->SupportedQueueProperties & 0x100) != 0 && (a1->EnabledFilterTypes & 2) == 0 )
    return 3221291013LL;
  return result;
}
