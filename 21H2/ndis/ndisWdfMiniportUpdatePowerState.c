/*
 * XREFs of ndisWdfMiniportUpdatePowerState @ 0x1C0083F60
 * Callers:
 *     ndisWdfDevicePowerDown @ 0x1C0083840 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C0083A9C (ndisWdfDevicePowerOn.c)
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017B50 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005D6A4 (-ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisWdfMiniportUpdatePowerState(struct _NDIS_MINIPORT_BLOCK *a1, _DEVICE_POWER_STATE a2)
{
  enum _NDIS_MINIPORT_EVENT v3; // ax

  a1->PrevDriverPowerState = a1->DriverPowerState;
  a1->DriverPowerState = a2;
  a1->CurrentDevicePowerState = a2;
  if ( a2 == PowerDeviceD0 )
  {
    v3 = NdisMEventD0_Complete;
  }
  else
  {
    if ( a1->AoAc )
      ndisWdfIsAoAcPowerTransition(a1);
    v3 = NdisMEventDx_Complete;
  }
  ndisLogMiniportEvent(a1, v3);
}
