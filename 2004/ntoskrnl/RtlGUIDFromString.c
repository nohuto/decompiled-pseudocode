/*
 * XREFs of RtlGUIDFromString @ 0x1405DD3D0
 * Callers:
 *     RtlQueryPackageClaims @ 0x14026A160 (RtlQueryPackageClaims.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14036A9D8 (PiDevCfgParsePropertyKeyName.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x140508F3C (PiDevCfgParseInterfaceKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405891A0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1405D9C2C (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x1405DAD7C (PiDmCacheDataDecode.c)
 *     _PnpIsValidGuidString @ 0x1405DC108 (_PnpIsValidGuidString.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405DF850 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405E09CC (_CmValidateDeviceInterfaceName.c)
 *     IoVolumeDeviceToGuid @ 0x14063A3D0 (IoVolumeDeviceToGuid.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406BF1AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406C0BE8 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406C0CAC (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406C5F1C (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1407226AC (PiDevCfgConvertPropertyFromValue.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140755D50 (_PnpGetGenericStorePropertyKeys.c)
 *     PipGenerateContainerID @ 0x14075B958 (PipGenerateContainerID.c)
 *     PnpIsValidGuidString @ 0x14075FA04 (PnpIsValidGuidString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407698D0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     BiGetObjectIdentifier @ 0x1407723BC (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x1407729D0 (BiConvertRegistryDataToElement.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14077CAA4 (EtwpEnableAutoLoggerProvider.c)
 *     PiDcInitUpdateProperties @ 0x14078CFC8 (PiDcInitUpdateProperties.c)
 *     _CmSplitDevicePanelId @ 0x140797BF8 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407988D0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     WdipSemLoadNextEndEvent @ 0x14079A970 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14079AC74 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14079AEF4 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14079B300 (WdipSemLoadNextScenario.c)
 *     EtwStartAutoLogger @ 0x14079CB10 (EtwStartAutoLogger.c)
 *     IoVolumeDeviceNameToGuid @ 0x1408925D0 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089978C (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A2D04 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A4134 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B15E0 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x140923470 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14092CCB0 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x14094D834 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x14096B824 (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x14096D29C (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14096D440 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14096EE50 (BiGetObjectReferenceFromEfiEntry.c)
 *     EmpParseEntryTypes @ 0x140A4098C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A417EC (EmpInfParseGetGuidFromName.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140A8DAC0 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1405DD4B0 (ScanHexFormat.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  unsigned __int16 *p_Data2; // r8
  unsigned __int16 *p_Data3; // rax
  unsigned int Length; // edx
  wchar_t *Buffer; // rcx
  unsigned int v7; // ecx
  unsigned __int8 *Data4; // rdx
  unsigned __int8 *v9; // r8
  __int128 v11; // [rsp+70h] [rbp-28h] BYREF

  p_Data2 = &Guid->Data2;
  p_Data3 = &Guid->Data3;
  Length = GuidString->Length;
  Buffer = GuidString->Buffer;
  v11 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       Buffer,
                       Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       p_Data2,
                       p_Data3,
                       &v11,
                       (char *)&v11 + 2,
                       (char *)&v11 + 4,
                       (char *)&v11 + 6,
                       (char *)&v11 + 8,
                       (char *)&v11 + 10,
                       (char *)&v11 + 12,
                       (char *)&v11 + 14) == -1 )
    return -1073741811;
  v7 = 0;
  Data4 = Guid->Data4;
  v9 = (unsigned __int8 *)&v11;
  do
  {
    ++v7;
    *Data4 = *v9;
    v9 += 2;
    ++Data4;
  }
  while ( v7 < 8 );
  return 0;
}
