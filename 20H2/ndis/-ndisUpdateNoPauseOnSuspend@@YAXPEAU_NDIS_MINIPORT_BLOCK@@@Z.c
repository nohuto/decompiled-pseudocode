/*
 * XREFs of ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002A2CC
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0022EB0 (NdisMSetMiniportAttributes.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0104D60 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C00202B0 (NdisNblTrackerDeregisterComponent.c)
 *     NdisNblTrackerRegisterComponent @ 0x1C002CEB0 (NdisNblTrackerRegisterComponent.c)
 */

void __fastcall ndisUpdateNoPauseOnSuspend(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (a1->InfoFlags & 0x80000000) != 0
    && (a1->MinimumNdisMajorVersion > 6u || a1->MinimumNdisMajorVersion == 6 && a1->MinimumNdisMinorVersion >= 0x1Eu)
    && ndisNoPauseOnSuspend )
  {
    a1->FilterPnPFlags |= 0x80u;
    if ( !a1->LowPowerRcvReturnNblTracker )
      a1->LowPowerRcvReturnNblTracker = (NDIS_NBL_TRACKER_HANDLE__ *)NdisNblTrackerRegisterComponent(
                                                                       3LL,
                                                                       a1,
                                                                       a1->pAdapterInstanceName);
  }
  else
  {
    a1->FilterPnPFlags &= ~0x80u;
    NdisNblTrackerDeregisterComponent((__int64)a1->LowPowerRcvReturnNblTracker);
    a1->LowPowerRcvReturnNblTracker = 0LL;
  }
}
