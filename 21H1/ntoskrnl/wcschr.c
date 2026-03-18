/*
 * XREFs of wcschr @ 0x1403CFAD0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14036A018 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x1405976C0 (SmUniqueIdParseProductName.c)
 *     EtwpGenerateFileName @ 0x140677150 (EtwpGenerateFileName.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1406AAB3C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406ADEA0 (DrvDbGetObjectDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406AE410 (_RegRtlCreateTreeTransacted.c)
 *     PiGetDeviceRegProperty @ 0x1406AFA48 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406AFDF0 (_CmGetDeviceRegPropWorker.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406B0898 (DrvDbGetDeviceIdMappedProperty.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406B2EB0 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407125B4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140717798 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiDevCfgFindDeviceDriver @ 0x140721430 (PiDevCfgFindDeviceDriver.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140730140 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     PiSwFindSwDevice @ 0x140734680 (PiSwFindSwDevice.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14073C530 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslPathClean @ 0x14073CFD0 (AslPathClean.c)
 *     PiNormalizeDeviceText @ 0x140755F00 (PiNormalizeDeviceText.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140756AC0 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140757A28 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     BiCreatePartitionDevice @ 0x1407708D0 (BiCreatePartitionDevice.c)
 *     LocalGetSDDLDeliminator @ 0x140773738 (LocalGetSDDLDeliminator.c)
 *     SepParseElamCertResources @ 0x1407928D0 (SepParseElamCertResources.c)
 *     MmCallDllInitialize @ 0x1407932E0 (MmCallDllInitialize.c)
 *     _CmSplitDevicePanelId @ 0x140797E48 (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14079810C (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x1407A168C (LocalpConvertStringSidToSid.c)
 *     SdbQueryDataExTagID @ 0x1407AC2C8 (SdbQueryDataExTagID.c)
 *     PiGetDeviceRegistryProperty @ 0x14089A0F8 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A566C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408A620C (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x140941468 (EtwpCovSampSplitSegments.c)
 *     BiDoesHiveKeyExist @ 0x14096AF74 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x14096B358 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097851C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbValidateDeviceIdName @ 0x140979E44 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x140979EBC (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140979F24 (DrvDbValidateDriverInfFileName.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
