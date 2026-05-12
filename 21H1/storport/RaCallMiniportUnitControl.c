/*
 * XREFs of RaCallMiniportUnitControl @ 0x1C0016294
 * Callers:
 *     RaidIsUnitControlSupported @ 0x1C0006D50 (RaidIsUnitControlSupported.c)
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
 *     RaUnitAdapterRemove @ 0x1C0045520 (RaUnitAdapterRemove.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0072D84 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C00730A0 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStartDeviceIrp @ 0x1C00735AC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportUnitControl(__int64 a1)
{
  unsigned int (__fastcall *v1)(__int64); // rax

  v1 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 200LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL) != 0 ? 0xC0000001 : 0;
  else
    return 3221225659LL;
}
