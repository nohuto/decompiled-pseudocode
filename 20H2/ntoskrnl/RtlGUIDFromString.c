/*
 * XREFs of RtlGUIDFromString @ 0x1406409E0
 * Callers:
 *     RtlQueryPackageClaims @ 0x1402E4000 (RtlQueryPackageClaims.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14036C9B8 (PiDevCfgParsePropertyKeyName.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x14050C86C (PiDevCfgParseInterfaceKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058CBD0 (RtlRaiseCustomSystemEventTrigger.c)
 *     IoVolumeDeviceToGuid @ 0x1405DD520 (IoVolumeDeviceToGuid.c)
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14063E50C (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x14063F65C (PiDmCacheDataDecode.c)
 *     _PnpIsValidGuidString @ 0x14064095C (_PnpIsValidGuidString.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14066AB68 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x14066BCDC (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406E9AEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406EB528 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406EB5EC (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406ED41C (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1407307BC (PiDevCfgConvertPropertyFromValue.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140764990 (_PnpGetGenericStorePropertyKeys.c)
 *     PipGenerateContainerID @ 0x14076A248 (PipGenerateContainerID.c)
 *     PnpIsValidGuidString @ 0x14076E074 (PnpIsValidGuidString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140777EE0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     BiGetObjectIdentifier @ 0x1407809BC (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x140780FD0 (BiConvertRegistryDataToElement.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14078EE9C (EtwpEnableAutoLoggerProvider.c)
 *     PiDcInitUpdateProperties @ 0x140799708 (PiDcInitUpdateProperties.c)
 *     _CmSplitDevicePanelId @ 0x1407A6F28 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1407A7C00 (_CmDevicePanelEnumSubkeyCallback.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A9CA0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1407A9FA4 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1407AA224 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1407AA630 (WdipSemLoadNextScenario.c)
 *     EtwStartAutoLogger @ 0x1407ABE40 (EtwStartAutoLogger.c)
 *     IoVolumeDeviceNameToGuid @ 0x140898250 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089F2BC (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A8834 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A9C64 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B7200 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x140929298 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140932AE0 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x1409535F4 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x1409715F4 (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x14097306C (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140973210 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140974C20 (BiGetObjectReferenceFromEfiEntry.c)
 *     EmpParseEntryTypes @ 0x140A46C2C (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A47A8C (EmpInfParseGetGuidFromName.c)
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140A937C0 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x140640AC0 (ScanHexFormat.c)
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
