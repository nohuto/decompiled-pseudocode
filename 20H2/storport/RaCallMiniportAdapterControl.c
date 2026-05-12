/*
 * XREFs of RaCallMiniportAdapterControl @ 0x1C00134AC
 * Callers:
 *     RaidAdapterStopAdapter @ 0x1C00133A4 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C001342C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterRescanBus @ 0x1C0016410 (RaidAdapterRescanBus.c)
 *     RaidIsAdapterControlSupported @ 0x1C00189E0 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002EBB4 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C002F830 (RaidAdapterStartDevice.c)
 *     RaidCoalescingCallback @ 0x1C0030580 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0032700 (RaidPowerSettingCallback.c)
 *     RaidAdapterPerfStateCallback @ 0x1C003E820 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C003E8F8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C003E988 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003EA0C (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C003EA8C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003EB14 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x1C0040B20 (StorPortAdapterPowerControl.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0075844 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00781EC (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C007934C (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
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
