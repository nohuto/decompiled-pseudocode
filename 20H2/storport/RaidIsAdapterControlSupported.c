/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C00189E0
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011EDC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterStop @ 0x1C0013354 (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C00133A4 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C001342C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0013F70 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0013FE0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterRescanBus @ 0x1C0016410 (RaidAdapterRescanBus.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002EBB4 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002F830 (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C0030580 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0032700 (RaidPowerSettingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C003E870 (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C003E8F8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003E988 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003EA0C (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C003EA8C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003EB14 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterActiveCondition @ 0x1C0040010 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterDirectedPowerDown @ 0x1C0040100 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x1C0040480 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterIdleCondition @ 0x1C0040750 (StorPortAdapterIdleCondition.c)
 *     StorPortAdapterIdleState @ 0x1C0040820 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C0040B20 (StorPortAdapterPowerControl.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0040BF0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C0040EB0 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0075844 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00781EC (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C007934C (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C00134AC (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // ecx
  int v6; // eax

  v2 = a1 + 320;
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 568) & 0x10) == 0 )
  {
    *(_OWORD *)(a1 + 592) = 0LL;
    *(_QWORD *)(a1 + 608) = 0LL;
    *(_DWORD *)(a1 + 592) = 19;
    v6 = RaCallMiniportAdapterControl(a1 + 320);
    v4 = 0;
    if ( v6 < 0 )
      return v4;
    *(_BYTE *)(v2 + 248) |= 0x10u;
  }
  return *(unsigned __int8 *)(v3 + v2 + 276);
}
