/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C0011F5C
 * Callers:
 *     RaidAdapterStopAdapter @ 0x1C0011E54 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0011EDC (RaidAdapterRestartAdapter.c)
 *     RaidAdapterRescanBus @ 0x1C0015F7C (RaidAdapterRescanBus.c)
 *     RaidIsAdapterControlSupported @ 0x1C0018548 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DD50 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002E9CC (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C002F720 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0031890 (RaidPowerSettingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C003D900 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C003D9D8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003DA68 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003DAEC (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C003DB6C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003DBF4 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C003FC00 (StorPortAdapterPowerControl.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0074934 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0076D18 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0077E54 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
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
