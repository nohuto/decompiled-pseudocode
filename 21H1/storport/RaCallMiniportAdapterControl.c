/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C00100E8
 * Callers:
 *     RaidAdapterStopAdapter @ 0x1C000FFE0 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0010068 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterRescanBus @ 0x1C001410C (RaidAdapterRescanBus.c)
 *     RaidIsAdapterControlSupported @ 0x1C00166D8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002D7A0 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002E41C (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C002F170 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0031340 (RaidPowerSettingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C003D330 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C003D408 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003D498 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003D51C (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C003D59C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003D624 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C003F630 (StorPortAdapterPowerControl.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C00745F4 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0076DF4 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0077F30 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaCallMiniportAdapterControl(__int64 a1)
{
  unsigned int (__fastcall *v1)(__int64); // rax

  v1 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL) != 0 ? 0xC0000001 : 0;
  else
    return 3221225659LL;
}
