/*
 * XREFs of wcschr @ 0x1403D0910
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x14036A9D8 (PiDevCfgParsePropertyKeyName.c)
 *     SmUniqueIdParseProductName @ 0x140597DB0 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x1405DD1A8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405DF850 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceRegPropWorker @ 0x1405E05EC (_CmGetDeviceRegPropWorker.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406C3318 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406C421C (DrvDbGetObjectDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406C478C (_RegRtlCreateTreeTransacted.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406C5BFC (PiPnpRtlGetFilteredDeviceList.c)
 *     EtwpGenerateFileName @ 0x1406C6434 (EtwpGenerateFileName.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140714464 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140719B28 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x14072DE0C (PiDevCfgFindDeviceDriver.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14072E2EC (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiSwFindSwDevice @ 0x140732A40 (PiSwFindSwDevice.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140734B70 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14073E0B0 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslPathClean @ 0x14073EB50 (AslPathClean.c)
 *     PiNormalizeDeviceText @ 0x140757E70 (PiNormalizeDeviceText.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1407594CC (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     BiCreatePartitionDevice @ 0x140772CE0 (BiCreatePartitionDevice.c)
 *     LocalGetSDDLDeliminator @ 0x140775B48 (LocalGetSDDLDeliminator.c)
 *     SepParseElamCertResources @ 0x14078B6F8 (SepParseElamCertResources.c)
 *     MmCallDllInitialize @ 0x14078C110 (MmCallDllInitialize.c)
 *     _CmSplitDevicePanelId @ 0x140797BF8 (_CmSplitDevicePanelId.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140797EBC (_CmGetMatchingDeviceListForSubkey.c)
 *     LocalpConvertStringSidToSid @ 0x1407A3C10 (LocalpConvertStringSidToSid.c)
 *     SdbQueryDataExTagID @ 0x1407AF428 (SdbQueryDataExTagID.c)
 *     PiGetDeviceRegistryProperty @ 0x14089B418 (PiGetDeviceRegistryProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A698C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408A752C (PiDevCfgSplitDriverConfigurationId.c)
 *     EtwpCovSampSplitSegments @ 0x1409426E8 (EtwpCovSampSplitSegments.c)
 *     BiDoesHiveKeyExist @ 0x14096C314 (BiDoesHiveKeyExist.c)
 *     BiCreateFileDeviceElement @ 0x14096C6F8 (BiCreateFileDeviceElement.c)
 *     DrvDbDeleteObjectSubKey @ 0x1409798BC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbValidateDeviceIdName @ 0x14097B1E4 (DrvDbValidateDeviceIdName.c)
 *     DrvDbValidateDriverDatabaseName @ 0x14097B25C (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbValidateDriverInfFileName @ 0x14097B2C4 (DrvDbValidateDriverInfFileName.c)
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
