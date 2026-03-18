/*
 * XREFs of wcschr @ 0x1403D35A0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14036C9B8 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x14059B850 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x140668D88 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14066AB68 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x14066B8FC (_CmGetDeviceRegPropWorker.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406E4A48 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406E594C (DrvDbGetObjectDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406E5EBC (_RegRtlCreateTreeTransacted.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406ED0FC (PiPnpRtlGetFilteredDeviceList.c)
 *     EtwpGenerateFileName @ 0x140711F88 (EtwpGenerateFileName.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407226DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140727B18 (_CmGetDeviceInterfaceReferenceString.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140731594 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFindDeviceDriver @ 0x140731708 (PiDevCfgFindDeviceDriver.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14073EA70 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiSwFindSwDevice @ 0x140741ED0 (PiSwFindSwDevice.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140744000 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14074CC94 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslPathClean @ 0x14074D734 (AslPathClean.c)
 *     PiNormalizeDeviceText @ 0x140766AB0 (PiNormalizeDeviceText.c)
 *     BiCreatePartitionDevice @ 0x1407812E0 (BiCreatePartitionDevice.c)
 *     LocalGetSDDLDeliminator @ 0x140784148 (LocalGetSDDLDeliminator.c)
 *     SepParseElamCertResources @ 0x1407A19A8 (SepParseElamCertResources.c)
 *     MmCallDllInitialize @ 0x1407A23C0 (MmCallDllInitialize.c)
 *     _CmSplitDevicePanelId @ 0x1407A6F28 (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1407A71EC (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x1407B2F40 (LocalpConvertStringSidToSid.c)
 *     SdbQueryDataExTagID @ 0x1407BD368 (SdbQueryDataExTagID.c)
 *     PiGetDeviceRegistryProperty @ 0x1408A0F48 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408AC4BC (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AD05C (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1409484A8 (EtwpCovSampSplitSegments.c)
 *     BiDoesHiveKeyExist @ 0x1409720E4 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x1409724C8 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097F68C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbValidateDeviceIdName @ 0x140980FB4 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x14098102C (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x140981094 (DrvDbValidateDriverInfFileName.c)
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
