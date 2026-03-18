/*
 * XREFs of _RegRtlSetValue @ 0x140752584
 * Callers:
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407125B4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14071A334 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14071A6EC (DrvDbSetRegValueMappedProperty.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x14071D240 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x140729808 (_CmSetDeviceRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x14072BE70 (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407363C8 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x140741D50 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140751F84 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _SysCtxOpenControlSet @ 0x14078BFF4 (_SysCtxOpenControlSet.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140793044 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiCMGenerateDeviceInstance @ 0x1408AC170 (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B1CF8 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B26D4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B2D98 (PiDrvDbResolveFilePathKeyValues.c)
 *     _PnpCtxRegSetValue @ 0x1409700BC (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1409711C8 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140973000 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409771B8 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14097736C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140977694 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140977BD0 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 */

int __fastcall RegRtlSetValue(HANDLE KeyHandle, const WCHAR *a2, ULONG a3, void *a4, ULONG DataSize)
{
  int result; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  ValueName = 0LL;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
    return ZwSetValueKey(KeyHandle, &ValueName, 0, a3, a4, DataSize);
  return result;
}
