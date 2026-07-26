/*
 * XREFs of ?ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002D430
 * Callers:
 *     ?ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C002CF88 (-ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002D154 (-ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C009F364 (-ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0138984 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisUpdateLoopbackOpens(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_OPEN_BLOCK *OpenQueue; // rax
  unsigned __int8 v2; // dl
  unsigned int PacketFilters; // r8d

  OpenQueue = a1->OpenQueue;
  v2 = 0;
  while ( OpenQueue )
  {
    PacketFilters = OpenQueue->PacketFilters;
    if ( (PacketFilters & 0x80u) != 0 || (PacketFilters & 0x20) != 0 && (PacketFilters & 0x10000) == 0 )
      ++v2;
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  a1->LoopbackOpens = v2;
}
