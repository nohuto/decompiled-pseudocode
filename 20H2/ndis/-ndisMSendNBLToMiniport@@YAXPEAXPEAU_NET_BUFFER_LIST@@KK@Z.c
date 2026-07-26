/*
 * XREFs of ?ndisMSendNBLToMiniport@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0004F90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0004FB0 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 */

void __fastcall ndisMSendNBLToMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  ndisMSendNBLToMiniportInternal(a1, a2, a3, a4, 0);
}
