/*
 * XREFs of ?ndisPnPNotifyBindingUnlocked@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C010A494
 * Callers:
 *     ?ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010A400 (-ndisRestartProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C012028C (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D70 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z @ 0x1C0019A28 (-ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z.c)
 *     ?ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019C24 (-ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012BB74 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ndisPnPNotifyBindingUnlocked(struct _NDIS_OPEN_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  struct _KEVENT Event; // [rsp+20h] [rbp-28h] BYREF

  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  ndisAcquireMiniportPnPEventLock(a1->MiniportHandle, &Event);
  LODWORD(a2) = ndisPnPNotifyBinding(a1, a2);
  ndisReleaseMiniportPnPEventLock(a1->MiniportHandle);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  return (unsigned int)a2;
}
