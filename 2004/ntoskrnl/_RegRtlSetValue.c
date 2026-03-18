/*
 * XREFs of _RegRtlSetValue @ 0x140756C14
 * Callers:
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140714464 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140714730 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14071C6C4 (DrvDbSetRegValueMappedProperty.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x14071EEC0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetDeviceRegPropWorker @ 0x140724648 (_CmSetDeviceRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x140726CB0 (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14072FAF4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x1407438D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140756614 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14078BE74 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _SysCtxOpenControlSet @ 0x14078DEC4 (_SysCtxOpenControlSet.c)
 *     PiCMGenerateDeviceInstance @ 0x1408AD490 (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1408B3018 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B39F4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B40B8 (PiDrvDbResolveFilePathKeyValues.c)
 *     _PnpCtxRegSetValue @ 0x14097145C (_PnpCtxRegSetValue.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140972568 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x1409743A0 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140978558 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x14097870C (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140978A34 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140978F70 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     ZwSetValueKey @ 0x1403F41C0 (ZwSetValueKey.c)
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
