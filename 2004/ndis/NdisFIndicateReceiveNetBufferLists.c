/*
 * XREFs of NdisFIndicateReceiveNetBufferLists @ 0x1C0007FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C0074924 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE0A0 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AE11C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C00C6B28 (PktMonClientNblLogNdis.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  __int64 v9; // rax

  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyRxIndication(
      (ULONG_PTR)NetBufferLists,
      PortNumber,
      NumberOfNetBufferLists,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)NdisFilterHandle,
      *((enum _NDIS_MEDIUM *)NdisFilterHandle + 84));
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(NetBufferLists, NumberOfNetBufferLists);
  if ( byte_1C00E3FD8 )
  {
    v9 = *((_QWORD *)NdisFilterHandle + 114);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 52) & 1) != 0 )
        PktMonClientNblLogNdis((char *)NdisFilterHandle + 888, NetBufferLists, *(_QWORD *)&PortNumber, 1LL);
    }
  }
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))NdisFilterHandle + 79))(
    NdisFilterHandle,
    NetBufferLists,
    PortNumber,
    NumberOfNetBufferLists,
    ReceiveFlags);
  if ( (Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00E3FD8) && (ReceiveFlags & 2) != 0 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
}
