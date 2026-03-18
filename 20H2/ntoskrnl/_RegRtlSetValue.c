/*
 * XREFs of _RegRtlSetValue @ 0x140765854
 * Callers:
 *     DrvDbSetRegValueMappedProperty @ 0x140722198 (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407222DC (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407226DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x14072CF10 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x1407330D8 (_CmSetDeviceRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x140735740 (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073E2AC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x1407524B0 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140765254 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _SysCtxOpenControlSet @ 0x14079A604 (_SysCtxOpenControlSet.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407A2124 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B2FC0 (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B8C38 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B9614 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B9CD8 (PiDrvDbResolveFilePathKeyValues.c)
 *     _PnpCtxRegSetValue @ 0x14097722C (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140978338 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x14097A170 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14097E328 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14097E4DC (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14097E804 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x14097ED40 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
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
