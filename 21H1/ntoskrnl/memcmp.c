/*
 * XREFs of memcmp @ 0x1403CE5A0
 * Callers:
 *     RtlSidHashLookup @ 0x140204E00 (RtlSidHashLookup.c)
 *     SepMaximumAccessCheck @ 0x140205D00 (SepMaximumAccessCheck.c)
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     SepNormalAccessCheck @ 0x1402089D0 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402092C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x140209E00 (SepMandatoryIntegrityCheck.c)
 *     RtlSidDominates @ 0x140258190 (RtlSidDominates.c)
 *     RtlFindAceBySid @ 0x14025B320 (RtlFindAceBySid.c)
 *     RtlAreNamesEqual @ 0x1402E7E50 (RtlAreNamesEqual.c)
 *     RtlpOwnerAcesPresent @ 0x1402EFB70 (RtlpOwnerAcesPresent.c)
 *     HalpAcpiGetRsdt @ 0x1402F8608 (HalpAcpiGetRsdt.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x1402F895C (HalpAcpiIsCachedTableCompromised.c)
 *     SepPotentialGlobalTableAttribute @ 0x140313924 (SepPotentialGlobalTableAttribute.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140317A30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403185C8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140338AC0 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140357FD0 (RtlpIsNameInExpressionPrivate.c)
 *     CompareEventEntry @ 0x140372D8C (CompareEventEntry.c)
 *     HalMatchAcpiOemTableId @ 0x1403CA850 (HalMatchAcpiOemTableId.c)
 *     IoRaiseInformationalHardError @ 0x140500490 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140501070 (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x140512600 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1405BC124 (AuthzBasepCompareOctetStringOperands.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1405D1630 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnEndProcessTrace @ 0x1405D40A8 (PfSnEndProcessTrace.c)
 *     SPCall2ServerInternal @ 0x1405D6678 (SPCall2ServerInternal.c)
 *     PopEtAggregateFind @ 0x1405F1EA4 (PopEtAggregateFind.c)
 *     SPCallServerHandleQueryPolicy @ 0x1405F66A0 (SPCallServerHandleQueryPolicy.c)
 *     ObLogSecurityDescriptor @ 0x140614530 (ObLogSecurityDescriptor.c)
 *     RtlFindUnicodeSubstring @ 0x14061B360 (RtlFindUnicodeSubstring.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140650E24 (PfSnPrefetchCacheEntryGet.c)
 *     ExpWnfFindScopeInstance @ 0x14066B200 (ExpWnfFindScopeInstance.c)
 *     EtwpGenerateFileName @ 0x140677150 (EtwpGenerateFileName.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     CmpFindMatchingDescriptorCell @ 0x14068BD84 (CmpFindMatchingDescriptorCell.c)
 *     ConstraintEval @ 0x1406A0008 (ConstraintEval.c)
 *     PropertyEval @ 0x1406A215C (PropertyEval.c)
 *     PiPnpRtlCmActionCallback @ 0x1406A78A0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406A8390 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1406A8FCC (PiDmObjectUpdateCachedObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406AC24C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406BF6A0 (FsRtlNotifyFilterReportChange.c)
 *     TraitsCompare @ 0x1406C55BC (TraitsCompare.c)
 *     RtlpInternEntryMatch @ 0x1406C7478 (RtlpInternEntryMatch.c)
 *     SepSidInSidAndAttributes @ 0x1407040E0 (SepSidInSidAndAttributes.c)
 *     PiDmObjectProcessPropertyChange @ 0x14072F324 (PiDmObjectProcessPropertyChange.c)
 *     PnpProcessTargetDeviceEvent @ 0x140730A0C (PnpProcessTargetDeviceEvent.c)
 *     PiDcCompareUpdateProperties @ 0x140752550 (PiDcCompareUpdateProperties.c)
 *     PopApplyPolicy @ 0x14077CB0C (PopApplyPolicy.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140790DA4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140791100 (RtlpCheckDynamicTimeZoneInformation.c)
 *     SLQueryLicenseValueInternal @ 0x140791E84 (SLQueryLicenseValueInternal.c)
 *     FsRtlIsDbcsInExpression @ 0x140888200 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A3CF0 (PiDevCfgResolveVariableExpression.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AA4EC (PiSwDoesCreateChangesRequireReEnum.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408BE314 (AlpcpEnterStateChangeEventMessageLog.c)
 *     MiComputeBadImageHeaderType @ 0x1408C2B68 (MiComputeBadImageHeaderType.c)
 *     RtlReplaceSidInSd @ 0x14090F2B0 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x14091CD20 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x14091D650 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x14091FD90 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x14091FF14 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x14093CE10 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x14093CE2C (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 *     ExpKdPullRemoteFileForUser @ 0x140956CBC (ExpKdPullRemoteFileForUser.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14095FE3C (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x14096D338 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x14096E8E4 (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x1409CDB54 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x1409E13D0 (ViCtxEqualExtendedState.c)
 *     CmpGetBiosDate @ 0x140A51FDC (CmpGetBiosDate.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140A55B0C (PipCheckSystemFirmwareUpdated.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140A5D41C (HalpAcpiDetectMachineSpecificActions.c)
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
