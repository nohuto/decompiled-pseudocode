/*
 * XREFs of memcmp @ 0x1403CF3E0
 * Callers:
 *     AuthzBasepFindSecurityAttributeValue @ 0x140268DC0 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlSidHashLookup @ 0x14026D960 (RtlSidHashLookup.c)
 *     RtlFindAceBySid @ 0x14027DA50 (RtlFindAceBySid.c)
 *     RtlSidDominates @ 0x140294A10 (RtlSidDominates.c)
 *     SepMaximumAccessCheck @ 0x1402986C0 (SepMaximumAccessCheck.c)
 *     RtlEqualSid @ 0x140298E50 (RtlEqualSid.c)
 *     SepNormalAccessCheck @ 0x14029B4E0 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14029BDD0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x14029C910 (SepMandatoryIntegrityCheck.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1402FBFF0 (RtlpIsNameInExpressionPrivate.c)
 *     SepPotentialGlobalTableAttribute @ 0x1402FE950 (SepPotentialGlobalTableAttribute.c)
 *     RtlAreNamesEqual @ 0x140322AD0 (RtlAreNamesEqual.c)
 *     RtlpOwnerAcesPresent @ 0x14032AA00 (RtlpOwnerAcesPresent.c)
 *     HalpAcpiGetRsdt @ 0x140335638 (HalpAcpiGetRsdt.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14033598C (HalpAcpiIsCachedTableCompromised.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1403554E0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403560E8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     CompareEventEntry @ 0x140373B9C (CompareEventEntry.c)
 *     HalMatchAcpiOemTableId @ 0x1403CB630 (HalMatchAcpiOemTableId.c)
 *     IoRaiseInformationalHardError @ 0x140500AE0 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x1405016C0 (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x140512C50 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1405BC844 (AuthzBasepCompareOctetStringOperands.c)
 *     ConstraintEval @ 0x1405D16A8 (ConstraintEval.c)
 *     PropertyEval @ 0x1405D3A60 (PropertyEval.c)
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405D9D60 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405DA99C (PiDmObjectUpdateCachedObjectProperty.c)
 *     RtlFindUnicodeSubstring @ 0x1405E5D40 (RtlFindUnicodeSubstring.c)
 *     ExpWnfFindScopeInstance @ 0x140625AE0 (ExpWnfFindScopeInstance.c)
 *     SepSidInSidAndAttributes @ 0x140632864 (SepSidInSidAndAttributes.c)
 *     CmpFindMatchingDescriptorCell @ 0x14063E868 (CmpFindMatchingDescriptorCell.c)
 *     ObLogSecurityDescriptor @ 0x140669810 (ObLogSecurityDescriptor.c)
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 *     SPCallServerHandleQueryPolicy @ 0x14066E740 (SPCallServerHandleQueryPolicy.c)
 *     PopEtAggregateFind @ 0x14069B3B4 (PopEtAggregateFind.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406A9984 (PfSnPrefetchCacheEntryUpdate.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1406B8FB4 (PfSnPrefetchCacheEntryGet.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406BF1AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     EtwpGenerateFileName @ 0x1406C6434 (EtwpGenerateFileName.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406DFC20 (FsRtlNotifyFilterReportChange.c)
 *     TraitsCompare @ 0x1406E4FCC (TraitsCompare.c)
 *     RtlpInternEntryMatch @ 0x1406E7D70 (RtlpInternEntryMatch.c)
 *     PfSnEndProcessTrace @ 0x14070876C (PfSnEndProcessTrace.c)
 *     PnpProcessTargetDeviceEvent @ 0x14072B270 (PnpProcessTargetDeviceEvent.c)
 *     PiDmObjectProcessPropertyChange @ 0x140736424 (PiDmObjectProcessPropertyChange.c)
 *     PiDcCompareUpdateProperties @ 0x140756BE0 (PiDcCompareUpdateProperties.c)
 *     PopApplyPolicy @ 0x14078550C (PopApplyPolicy.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140793910 (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140793C50 (RtlpCheckDynamicTimeZoneInformation.c)
 *     SLQueryLicenseValueInternal @ 0x1407946B4 (SLQueryLicenseValueInternal.c)
 *     FsRtlIsDbcsInExpression @ 0x140889520 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A5010 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AB80C (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408BF664 (AlpcpEnterStateChangeEventMessageLog.c)
 *     MiComputeBadImageHeaderType @ 0x1408C3EB8 (MiComputeBadImageHeaderType.c)
 *     RtlReplaceSidInSd @ 0x140910650 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x14091DFD0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x14091E900 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x140921040 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409211C4 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x14093E090 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x14093E0AC (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095838C (ExpKdPullRemoteFileForUser.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1409611DC (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x14096E6D8 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x14096FC84 (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x1409CDB64 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x1409E1430 (ViCtxEqualExtendedState.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A4CF70 (PipCheckSystemFirmwareUpdated.c)
 *     CmpGetBiosDate @ 0x140A57CDC (CmpGetBiosDate.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140A5C4BC (HalpAcpiDetectMachineSpecificActions.c)
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
