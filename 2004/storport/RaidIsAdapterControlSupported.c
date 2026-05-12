/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C0018548
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C00109DC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterStop @ 0x1C0011E04 (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C0011E54 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0011EDC (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0012A10 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0012A80 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterRescanBus @ 0x1C0015F7C (RaidAdapterRescanBus.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DD50 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002E9CC (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C002F720 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0031890 (RaidPowerSettingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C003D950 (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C003D9D8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003DA68 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003DAEC (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C003DB6C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003DBF4 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterActiveCondition @ 0x1C003F0F0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterDirectedPowerDown @ 0x1C003F1E0 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C003F560 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterIdleCondition @ 0x1C003F830 (StorPortAdapterIdleCondition.c)
 *     StorPortAdapterIdleState @ 0x1C003F900 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C003FC00 (StorPortAdapterPowerControl.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C003FCD0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C003FF90 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0074934 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0076D18 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0077E54 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011F5C (RaCallMiniportAdapterControl.c)
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
