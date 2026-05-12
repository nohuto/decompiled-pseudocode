/*
 * XREFs of RaidIsUnitControlSupported @ 0x1C0006D50
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C0006A90 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C0006C20 (StorPortUnitIdleCondition.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000FA2C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C000FF10 (RaidUnitSendPowerToMiniport.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0010F24 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0014600 (RaidBusEnumeratorVisitUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0016F98 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001715C (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0019CD0 (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C003E5FC (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C003E688 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C003E714 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C003E7F0 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitDirectedPowerDown @ 0x1C003FBC0 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C0040080 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitIdleState @ 0x1C00403A0 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0040920 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C0040CB0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitAdapterRemove @ 0x1C0045520 (RaUnitAdapterRemove.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0072D84 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00730A0 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStartDeviceIrp @ 0x1C00735AC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaCallMiniportUnitControl @ 0x1C0016294 (RaCallMiniportUnitControl.c)
 */

char __fastcall RaidIsUnitControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rsi
  int *v6; // r8
  int v7; // eax
  int v8; // edx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = a2;
  if ( **(_DWORD **)(v2 + 536) == 208 )
  {
    if ( (*(_BYTE *)(v2 + 552) & 8) != 0 )
      return *(_BYTE *)(v4 + v2 + 560);
    *(_QWORD *)(v2 + 560) = 0LL;
    v6 = (int *)(v2 + 556);
    *(_QWORD *)(v2 + 568) = 0LL;
    v7 = *(_DWORD *)(v2 + 600);
    *(_DWORD *)(v2 + 556) = 12;
    if ( v7 > 0 )
    {
      v8 = *v6;
      if ( *(_BYTE *)(v2 + 604) )
        v8 = 13;
      *v6 = v8;
    }
    if ( (int)RaCallMiniportUnitControl(v2 + 304, 0LL) >= 0 )
    {
      *(_BYTE *)(v2 + 552) |= 8u;
      return *(_BYTE *)(v4 + v2 + 560);
    }
  }
  return v3;
}
