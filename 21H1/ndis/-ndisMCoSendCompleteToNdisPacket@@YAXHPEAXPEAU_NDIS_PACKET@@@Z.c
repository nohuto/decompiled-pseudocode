/*
 * XREFs of ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00BBBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C00326E8 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0063234 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C28C4 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMCoSendCompleteToNdisPacket(unsigned int a1, _QWORD *a2, struct _NDIS_PACKET *a3)
{
  __int64 v4; // rbp
  struct _NDIS_MINIPORT_BLOCK *v6; // rdi
  struct _NDIS_STACK_RESERVED *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v4 = a2[9];
  v6 = *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120);
  if ( (v6->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)a3->Reserved + a3->Private.NdisPacketOobOffset) )
    ndisMFreeSGList(*(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120), a3, (__int64)a3);
  if ( !a1 )
    NDISM_SEND_PACKET_STATS(v6, a3);
  NDIS_STACK_RESERVED_FROM_PACKET(a3, &v7);
  a3->Private.NdisPacketFlags &= 0xC0u;
  *((_DWORD *)v7 + 2) = 0;
  --*(_DWORD *)&a3[-1].ProtocolReserved[4];
  (*(void (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v4 + 48))(a1, *(_QWORD *)(v4 + 24), a3);
}
