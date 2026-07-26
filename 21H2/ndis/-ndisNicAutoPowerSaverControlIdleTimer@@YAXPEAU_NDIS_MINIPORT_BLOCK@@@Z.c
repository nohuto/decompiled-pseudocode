/*
 * XREFs of ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A5DD4
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C005DA40 (ndisWnfPdcCallback.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A7AE8 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A56AC (-ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A74A0 (-ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisNicAutoPowerSaverControlIdleTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( a1->AoAc
    && (a1->PnPFlags & 0x60) == 0x60
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && (a1->PMHardwareCapabilities.Flags & 4) != 0
    && a1->SelectiveSuspend )
  {
    if ( ndisConnectedStandby )
      ndisSetIdleTimer(a1);
    else
      ndisClearIdleTimer(a1);
  }
}
