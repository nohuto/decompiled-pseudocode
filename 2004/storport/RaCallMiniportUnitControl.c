/*
 * XREFs of RaCallMiniportUnitControl @ 0x1C0018104
 * Callers:
 *     RaidIsUnitControlSupported @ 0x1C0007340 (RaidIsUnitControlSupported.c)
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
 *     RaUnitAdapterRemove @ 0x1C0045C30 (RaUnitAdapterRemove.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0072C94 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0072FB0 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStartDeviceIrp @ 0x1C00738F8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
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
