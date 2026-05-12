/*
 * XREFs of RaidIsUnitControlSupported @ 0x1C0007340
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C0007080 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C0007210 (StorPortUnitIdleCondition.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00117EC (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0011D84 (RaidUnitSendPowerToMiniport.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0012D94 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0016470 (RaidBusEnumeratorVisitUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0018E08 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C0018FCC (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C001BB78 (RaUnitDeleteDeviceIrp.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C003EBCC (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C003EC58 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C003ECE4 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C003EDC0 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitDirectedPowerDown @ 0x1C0040190 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x1C0040650 (StorPortUnitDirectedPowerUp.c)
 *     StorPortUnitIdleState @ 0x1C0040970 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0040F50 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00412E0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitAdapterRemove @ 0x1C0045C30 (RaUnitAdapterRemove.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0072C94 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0072FB0 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStartDeviceIrp @ 0x1C00738F8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaCallMiniportUnitControl @ 0x1C0018104 (RaCallMiniportUnitControl.c)
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
