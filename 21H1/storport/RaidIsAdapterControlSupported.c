/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C00166D8
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000EC1C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterStop @ 0x1C000FF90 (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C000FFE0 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0010068 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0010BA0 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0010C10 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterRescanBus @ 0x1C001410C (RaidAdapterRescanBus.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002D7A0 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002E41C (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C002F170 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0031340 (RaidPowerSettingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C003D380 (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C003D408 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003D498 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003D51C (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C003D59C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003D624 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterActiveCondition @ 0x1C003EB20 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterDirectedPowerDown @ 0x1C003EC10 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C003EF90 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterIdleCondition @ 0x1C003F260 (StorPortAdapterIdleCondition.c)
 *     StorPortAdapterIdleState @ 0x1C003F330 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C003F630 (StorPortAdapterPowerControl.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C003F700 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C003F9C0 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C00745F4 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0076DF4 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0077F30 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00100E8 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // ecx
  int v6; // eax

  v2 = a1 + 304;
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 552) & 0x10) == 0 )
  {
    *(_OWORD *)(a1 + 576) = 0LL;
    *(_QWORD *)(a1 + 592) = 0LL;
    *(_DWORD *)(a1 + 576) = 19;
    v6 = RaCallMiniportAdapterControl(a1 + 304);
    v4 = 0;
    if ( v6 < 0 )
      return v4;
    *(_BYTE *)(v2 + 248) |= 0x10u;
  }
  return *(unsigned __int8 *)(v3 + v2 + 276);
}
