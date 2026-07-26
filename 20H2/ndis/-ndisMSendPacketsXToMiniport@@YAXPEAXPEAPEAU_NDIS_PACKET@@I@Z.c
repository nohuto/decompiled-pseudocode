/*
 * XREFs of ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BFEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0062EE0 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00BF8E0 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C2ED4 (-ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C5150 (-ndisMLoopbackPacketX@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMSendPacketsXToMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  unsigned __int8 v3; // r13
  __int64 v4; // r12
  unsigned int v5; // esi
  _NDIS_PACKET **v6; // r15
  struct _NDIS_PACKET **v8; // r14
  struct _NDIS_PACKET *v9; // rdi
  unsigned int v10; // ebp
  unsigned int Flags; // eax
  unsigned __int8 NdisPacketFlags; // dl
  unsigned __int8 SendFlags; // al
  unsigned int v14; // eax

  if ( a3 )
  {
    v3 = 0;
    v4 = a3;
    v5 = 0;
    v6 = a2;
    v8 = a2;
    do
    {
      v9 = *v8;
      v10 = 0;
      *(unsigned __int64 *)((char *)(*v8)->Reserved + (*v8)->Private.NdisPacketOobOffset) = 0LL;
      if ( (a1->SendFlags & 8) != 0 )
      {
        v10 = ndisMCheckPacketAndPad(a1, v9);
        if ( v10 )
          goto LABEL_16;
      }
      Flags = a1->Flags;
      if ( (Flags & 0x4000) != 0 || (Flags & 0x8800000) != 0 && SLOBYTE(v9->Private.Flags) >= 0 )
        v3 = ndisMLoopbackPacketX(a1, v9);
      NdisPacketFlags = v9->Private.NdisPacketFlags;
      if ( (NdisPacketFlags & 4) != 0 || v3 )
      {
LABEL_16:
        ndisMSendCompleteX(a1, v9, v10);
        if ( v5 )
        {
          a1->WSendPacketsHandler(a1->MiniportAdapterContext, v6, v5);
          v5 = 0;
          v6 = v8 + 1;
        }
      }
      else if ( (a1->Flags & 0x40) != 0 )
      {
        ndisMAllocSGList(a1, v9);
      }
      else
      {
        SendFlags = a1->SendFlags;
        v9->Private.NdisPacketFlags = NdisPacketFlags | 0x10;
        if ( (SendFlags & 1) != 0 )
        {
          ++v5;
        }
        else
        {
          v14 = a1->SendHandler(a1->MiniportAdapterContext, v9, v9->Private.Flags);
          if ( v14 != 259 )
            ndisMSendCompleteX(a1, v9, v14);
        }
      }
      ++v8;
      --v4;
    }
    while ( v4 );
    if ( v5 )
      a1->WSendPacketsHandler(a1->MiniportAdapterContext, v6, v5);
  }
}
