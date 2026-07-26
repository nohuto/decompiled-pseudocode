/*
 * XREFs of ?ndisSriovInterfaceReference@@YAXPEAX@Z @ 0x1C007C170
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C001982C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

void __fastcall ndisSriovInterfaceReference(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisReferenceMiniportNoCheck(a1, 0x44u);
}
