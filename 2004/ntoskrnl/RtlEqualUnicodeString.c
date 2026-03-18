/*
 * XREFs of RtlEqualUnicodeString @ 0x140681E80
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x140269168 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140296650 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402FC4E0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14034A710 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x1403904D0 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x14050AD1C (PiDrvDbFindNode.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14056EA80 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140573D50 (PopEmModuleAddressMatchCallback.c)
 *     PopPlLookupDevicePowerProfile @ 0x1405790E8 (PopPlLookupDevicePowerProfile.c)
 *     VrpCreateNamespaceNode @ 0x1405CA8F4 (VrpCreateNamespaceNode.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405CD250 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PspIdentityBasedJobBreakaway @ 0x1405CFE44 (PspIdentityBasedJobBreakaway.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     SepIsNgenImage @ 0x140617A84 (SepIsNgenImage.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x1406319FC (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x140631DF4 (SepValidateReferencedCachedHandles.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140645544 (EtwpAcquireLoggerContextByLoggerName.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     IopGetDeviceInterfaces @ 0x1406BE69C (IopGetDeviceInterfaces.c)
 *     _CmIsRootDevice @ 0x1406C3108 (_CmIsRootDevice.c)
 *     DrvDbFindDatabaseNode @ 0x1406C5084 (DrvDbFindDatabaseNode.c)
 *     EtwpLookupLoggerIdByName @ 0x1406C7980 (EtwpLookupLoggerIdByName.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406C868C (EtwpGetLoggerInfoFromContext.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406DD85C (ObpLookupDirectoryUsingHash.c)
 *     SepIsImageInMinTcbList @ 0x1406F8548 (SepIsImageInMinTcbList.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1406FC330 (IopDeviceInterfaceFilterCallback.c)
 *     PiDevCfgConfigureDevice @ 0x1407232F0 (PiDevCfgConfigureDevice.c)
 *     IopQueryRegistryKeySystemPath @ 0x140728BE0 (IopQueryRegistryKeySystemPath.c)
 *     PiFindDevInstMatch @ 0x14072A2BC (PiFindDevInstMatch.c)
 *     PiDevCfgFindDeviceDriver @ 0x14072DE0C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14072EED0 (PiDevCfgLogDeviceConfigured.c)
 *     MiObtainSectionForDriver @ 0x140746898 (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x140747778 (MiResolveImageReferences.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14074CC84 (IopCreateSecureDeviceClassSettings.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14074D730 (PiPnpRtlServiceFilterCallback.c)
 *     PipFindDeviceOverrideEntry @ 0x1407511F4 (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1407594CC (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14075953C (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x14075E4F8 (MiUseLargeDriverPage.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140768444 (RtlpGetNtProductTypeFromRegistry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140768D7C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x140768FB0 (PiDevCfgResolveVariable.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x14076EC5C (PiRemoveDeferredSetInterfaceState.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140782B00 (CmpFindMachineHiveByMountPoint.c)
 *     SLQueryLicenseValueInternal @ 0x1407946B4 (SLQueryLicenseValueInternal.c)
 *     IopIsReportedAlready @ 0x140796CE8 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140798F20 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x1407A2058 (PipQueryBindingResolution.c)
 *     AdtpLookupDriveLetter @ 0x1407A4E18 (AdtpLookupDriveLetter.c)
 *     KsepCacheDeviceQueryData @ 0x1407B5148 (KsepCacheDeviceQueryData.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14087FF60 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpPreLoadKey @ 0x14088029C (VrpPreLoadKey.c)
 *     PipAddRequestToEdge @ 0x14089A85C (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14089AAD4 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A1E1C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B40B8 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B49BC (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x1408BE5C0 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1408E9B08 (PopBatteryDeviceState.c)
 *     ExpFindArcName @ 0x14094C984 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x14096ADD0 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x140971210 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x1409739C0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140973D50 (_CmServiceFilterCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x1409BF574 (ViSuspectDriversLookupEntry.c)
 *     VfUtilIsProtectedDriver @ 0x1409C387C (VfUtilIsProtectedDriver.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C3CD0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409C5610 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409C5AF8 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409D6B88 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409D6FAC (VfSuspectDriversUnloadCallback.c)
 *     VfCheckUserHandle @ 0x1409D7174 (VfCheckUserHandle.c)
 *     VfFilterAttach @ 0x1409E1EE4 (VfFilterAttach.c)
 *     VfAddVerifierEntry @ 0x1409E99B8 (VfAddVerifierEntry.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     VfInitBootDriversLoaded @ 0x140A47538 (VfInitBootDriversLoaded.c)
 *     CmpFindHiveSubKey @ 0x140A49538 (CmpFindHiveSubKey.c)
 *     CmpDoSort @ 0x140A4A40C (CmpDoSort.c)
 *     CmGetSystemDriverList @ 0x140A4B2CC (CmGetSystemDriverList.c)
 *     PnpLoadBootFilterDriver @ 0x140A4BA98 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140A4F0F8 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140A4F268 (PipLookupGroupName.c)
 *     CmpCreateHardwareProfiles @ 0x140A5689C (CmpCreateHardwareProfiles.c)
 *     ViInitSystemPhase0 @ 0x140A6C258 (ViInitSystemPhase0.c)
 *     CmpGetKnownHivePathNode @ 0x140A8C05C (CmpGetKnownHivePathNode.c)
 *     ViLogAndLoadXdv @ 0x140A90E20 (ViLogAndLoadXdv.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rax
  wchar_t *v6; // r10
  wchar_t *i; // rbx
  signed __int64 v8; // r10
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11

  Length = String1->Length;
  if ( (_DWORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v6 = String2->Buffer;
  for ( i = (wchar_t *)((char *)Buffer + Length); (unsigned int)Length >= 8; v6 += 4 )
  {
    if ( *(_QWORD *)Buffer != *(_QWORD *)v6 )
      break;
    LODWORD(Length) = Length - 8;
    if ( !(_DWORD)Length )
      return 1;
    Buffer += 4;
  }
  if ( Buffer < i )
  {
    if ( CaseInSensitive )
    {
      v8 = (char *)v6 - (char *)Buffer;
      while ( 1 )
      {
        v9 = *Buffer;
        v10 = *(wchar_t *)((char *)Buffer + v8);
        if ( (_WORD)v9 != (_WORD)v10 )
        {
          if ( (unsigned int)v9 >= 0x61 )
          {
            if ( (unsigned int)v9 > 0x7A )
            {
              if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v9 >= 0xC0u )
                LOWORD(v9) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                      + 2
                                      * ((v9 & 0xF)
                                       + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                             + 2LL
                                                             * (((unsigned __int8)v9 >> 4)
                                                              + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                                  + 2 * (v9 >> 8))))))
                           + v9;
            }
            else
            {
              LOWORD(v9) = v9 - 32;
            }
          }
          if ( (unsigned int)v10 >= 0x61 )
          {
            if ( (unsigned int)v10 > 0x7A )
            {
              if ( Nls844UnicodeUpcaseTable )
              {
                if ( (unsigned __int16)v10 >= 0xC0u )
                  LOWORD(v10) = *(_WORD *)(Nls844UnicodeUpcaseTable
                                         + 2
                                         * ((v10 & 0xF)
                                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                + 2LL
                                                                * (((unsigned __int8)v10 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v10 >> 8))))))
                              + v10;
              }
            }
            else
            {
              LOWORD(v10) = v10 - 32;
            }
          }
          if ( (_WORD)v9 != (_WORD)v10 )
            break;
        }
        if ( ++Buffer >= i )
          return 1;
      }
    }
    else
    {
      while ( *Buffer == *v6 )
      {
        ++Buffer;
        ++v6;
        if ( Buffer >= i )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
