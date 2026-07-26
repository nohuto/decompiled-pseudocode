/*
 * XREFs of ?ndisMDeregisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005F32C
 * Callers:
 *     NdisMDeregisterAdapterShutdownHandler @ 0x1C0060A30 (NdisMDeregisterAdapterShutdownHandler.c)
 *     ?ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C2BC (-ndisMHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139A18 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139BB8 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMDeregisterBugCheckHandler(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int Flags; // eax

  Flags = a1->Flags;
  if ( (Flags & 0x2000) != 0 )
  {
    a1->Flags = Flags & 0xFFFFDFFF;
    KeDeregisterBugCheckCallback(&a1->BugcheckCallbackRecord);
  }
}
