/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x14076E894
 * Callers:
 *     PiCreateDriverSwDevices @ 0x14076ABAC (PiCreateDriverSwDevices.c)
 *     PiQueryRemovableDeviceOverride @ 0x14076AD40 (PiQueryRemovableDeviceOverride.c)
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x14076E168 (PiUpdateDevicePanel.c)
 *     PnpSaveDeviceCapabilities @ 0x14076FC68 (PnpSaveDeviceCapabilities.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x140943248 (PiGetDeviceRegistryProperty.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x140957044 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 48)) != 0 )
    return CmOpenDeviceRegKey(PiPnpRtlCtx, v5, 16, 0, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
