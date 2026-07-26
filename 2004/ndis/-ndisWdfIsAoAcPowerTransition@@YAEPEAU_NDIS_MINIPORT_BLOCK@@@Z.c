/*
 * XREFs of ?ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005D414
 * Callers:
 *     ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003E87C (-ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C0061E80 (NdisWdfPnpPowerEventHandler.c)
 *     ndisWdfMiniportUpdatePowerState @ 0x1C0083DE0 (ndisWdfMiniportUpdatePowerState.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisWdfIsAoAcPowerTransition(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v2; // al
  char v3; // bl

  AoAc = a1->AoAc;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v3 = *((_BYTE *)AoAc + 440);
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v2);
  return v3;
}
