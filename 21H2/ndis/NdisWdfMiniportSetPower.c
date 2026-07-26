/*
 * XREFs of NdisWdfMiniportSetPower @ 0x1C0062040
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003ED8C (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003EF70 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6BD0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall NdisWdfMiniportSetPower(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned __int32 a3)
{
  if ( a2 - 2 <= 4 )
    ndisWdfNotifySystemPower((__int64)a1, a2, a3);
  ndisWdfNotifyDevicePower(a1, a2, a3);
  if ( a3 == 1 && a2 - 2 <= 1 )
  {
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(a1, 6LL);
  }
}
