/*
 * XREFs of RtlGUIDFromString @ 0x1406AA8D0
 * Callers:
 *     RtlQueryPackageClaims @ 0x1402E65A0 (RtlQueryPackageClaims.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14036A018 (PiDevCfgParsePropertyKeyName.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x1405088EC (PiDevCfgParseInterfaceKeyName.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x140588AB0 (RtlRaiseCustomSystemEventTrigger.c)
 *     IoVolumeDeviceToGuid @ 0x140687F50 (IoVolumeDeviceToGuid.c)
 *     PiPnpRtlCmActionCallback @ 0x1406A78A0 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1406A825C (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmCacheDataDecode @ 0x1406A93AC (PiDmCacheDataDecode.c)
 *     _PnpIsValidGuidString @ 0x1406AA6AC (_PnpIsValidGuidString.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406AA728 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406AAB3C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406AC24C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406AD334 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406AF11C (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1406B31D0 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1407207EC (PiDevCfgConvertPropertyFromValue.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1407516C0 (_PnpGetGenericStorePropertyKeys.c)
 *     PipGenerateContainerID @ 0x140759D50 (PipGenerateContainerID.c)
 *     PnpIsValidGuidString @ 0x14075D754 (PnpIsValidGuidString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1407674F0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     BiGetObjectIdentifier @ 0x14076FFAC (BiGetObjectIdentifier.c)
 *     BiConvertRegistryDataToElement @ 0x1407705C0 (BiConvertRegistryDataToElement.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14077D4C0 (EtwpEnableAutoLoggerProvider.c)
 *     WdipSemLoadNextEndEvent @ 0x140784F98 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14078529C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14078551C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140785928 (WdipSemLoadNextScenario.c)
 *     PiDcInitUpdateProperties @ 0x14078B0F8 (PiDcInitUpdateProperties.c)
 *     _CmSplitDevicePanelId @ 0x140797E48 (_CmSplitDevicePanelId.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140798B20 (_CmDevicePanelEnumSubkeyCallback.c)
 *     EtwStartAutoLogger @ 0x1407A05CC (EtwStartAutoLogger.c)
 *     IoVolumeDeviceNameToGuid @ 0x1408912B0 (IoVolumeDeviceNameToGuid.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14089846C (PipGetDriverKsrGuidRegistryValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A19E4 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1408A2E14 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B02C0 (PiCreateDriverSwDeviceCallback.c)
 *     SddlpUuidFromString @ 0x1409221C0 (SddlpUuidFromString.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14092BA00 (WdipSemLoadLocalGroupPolicy.c)
 *     ExpParseSignatureName @ 0x14094C494 (ExpParseSignatureName.c)
 *     BcdEnumerateObjects @ 0x14096A484 (BcdEnumerateObjects.c)
 *     BiBindEfiEntryToBcdObject @ 0x14096BEFC (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14096C0A0 (BiBuildIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14096DAB0 (BiGetObjectReferenceFromEfiEntry.c)
 *     EmpParseEntryTypes @ 0x140A479FC (EmpParseEntryTypes.c)
 *     EmpInfParseGetGuidFromName @ 0x140A4885C (EmpInfParseGetGuidFromName.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 *     PipResetDevice @ 0x140A8E4D0 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ScanHexFormat @ 0x1406AA9B0 (ScanHexFormat.c)
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
