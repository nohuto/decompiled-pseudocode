/*
 * XREFs of memcmp @ 0x1403D2070
 * Callers:
 *     RtlpOwnerAcesPresent @ 0x140204EC0 (RtlpOwnerAcesPresent.c)
 *     SepMaximumAccessCheck @ 0x140204FB0 (SepMaximumAccessCheck.c)
 *     RtlSidHashLookup @ 0x140205990 (RtlSidHashLookup.c)
 *     RtlFindAceBySid @ 0x140209CB0 (RtlFindAceBySid.c)
 *     RtlSidDominates @ 0x14020FB40 (RtlSidDominates.c)
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140223E30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x140224970 (SepMandatoryIntegrityCheck.c)
 *     SepNormalAccessCheck @ 0x140226B20 (SepNormalAccessCheck.c)
 *     HalpAcpiGetRsdt @ 0x14025EE38 (HalpAcpiGetRsdt.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14025F18C (HalpAcpiIsCachedTableCompromised.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1402E2CC0 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1402E4C80 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x1402EF320 (RtlAreNamesEqual.c)
 *     SepPotentialGlobalTableAttribute @ 0x1402FD050 (SepPotentialGlobalTableAttribute.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1403261A0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403267EC (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     CompareEventEntry @ 0x14037625C (CompareEventEntry.c)
 *     HalMatchAcpiOemTableId @ 0x1403CE250 (HalMatchAcpiOemTableId.c)
 *     IoRaiseInformationalHardError @ 0x1405043B0 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140504F98 (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x140516580 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1405C03A4 (AuthzBasepCompareOctetStringOperands.c)
 *     SepSidInSidAndAttributes @ 0x1405D70D0 (SepSidInSidAndAttributes.c)
 *     CmpFindMatchingDescriptorCell @ 0x1405E1D18 (CmpFindMatchingDescriptorCell.c)
 *     ObLogSecurityDescriptor @ 0x1405F6110 (ObLogSecurityDescriptor.c)
 *     RtlpInternEntryMatch @ 0x14062D404 (RtlpInternEntryMatch.c)
 *     PiPnpRtlCmActionCallback @ 0x14063DB50 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x14063E640 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14063F27C (PiDmObjectUpdateCachedObjectProperty.c)
 *     PropertyEval @ 0x14064211C (PropertyEval.c)
 *     PfSnPrefetchCacheEntryGet @ 0x14064B104 (PfSnPrefetchCacheEntryGet.c)
 *     ExpWnfFindScopeInstance @ 0x140656BF0 (ExpWnfFindScopeInstance.c)
 *     PopEtAggregateFind @ 0x140667724 (PopEtAggregateFind.c)
 *     RtlFindUnicodeSubstring @ 0x140671200 (RtlFindUnicodeSubstring.c)
 *     SPCallServerHandleQueryPolicy @ 0x140688AF0 (SPCallServerHandleQueryPolicy.c)
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406B7570 (FsRtlNotifyFilterReportChange.c)
 *     TraitsCompare @ 0x1406BBE8C (TraitsCompare.c)
 *     ConstraintEval @ 0x1406D810C (ConstraintEval.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406E9AEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PfSnEndProcessTrace @ 0x1406F1174 (PfSnEndProcessTrace.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406F40D4 (PfSnPrefetchCacheEntryUpdate.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     EtwpGenerateFileName @ 0x140711F88 (EtwpGenerateFileName.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     PnpProcessTargetDeviceEvent @ 0x140739D00 (PnpProcessTargetDeviceEvent.c)
 *     PiDmObjectProcessPropertyChange @ 0x1407458B4 (PiDmObjectProcessPropertyChange.c)
 *     PiDcCompareUpdateProperties @ 0x140765820 (PiDcCompareUpdateProperties.c)
 *     PopApplyPolicy @ 0x14079325C (PopApplyPolicy.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407A009C (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407A03DC (RtlpCheckDynamicTimeZoneInformation.c)
 *     SLQueryLicenseValueInternal @ 0x1407A0F5C (SLQueryLicenseValueInternal.c)
 *     FsRtlIsDbcsInExpression @ 0x14088F070 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408AAB40 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408B133C (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408C5414 (AlpcpEnterStateChangeEventMessageLog.c)
 *     MiComputeBadImageHeaderType @ 0x1408C9CF8 (MiComputeBadImageHeaderType.c)
 *     RtlReplaceSidInSd @ 0x140916190 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x140923C50 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140924580 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x140926E60 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140926FE4 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x140943E50 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x140943E6C (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095E14C (ExpKdPullRemoteFileForUser.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140966FAC (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x1409744A8 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140975A54 (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x1409D3B84 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x1409E7450 (ViCtxEqualExtendedState.c)
 *     CmpGetBiosDate @ 0x140A5835C (CmpGetBiosDate.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A5BF0C (PipCheckSystemFirmwareUpdated.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140A6381C (HalpAcpiDetectMachineSpecificActions.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
