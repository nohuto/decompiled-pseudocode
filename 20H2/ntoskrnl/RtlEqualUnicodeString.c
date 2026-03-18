/*
 * XREFs of RtlEqualUnicodeString @ 0x14061FE70
 * Callers:
 *     AuthzBasepFindSecurityAttribute @ 0x14022B060 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepEqualUnicodeString @ 0x1402E3068 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1402E48A4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140360F50 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x140392990 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x14050E64C (PiDrvDbFindNode.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405724B0 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140577780 (PopEmModuleAddressMatchCallback.c)
 *     PopPlLookupDevicePowerProfile @ 0x14057CB18 (PopPlLookupDevicePowerProfile.c)
 *     VrpCreateNamespaceNode @ 0x1405D0AB4 (VrpCreateNamespaceNode.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405D38B0 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PspIdentityBasedJobBreakaway @ 0x1405D62F4 (PspIdentityBasedJobBreakaway.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14068DEB8 (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x14068E2B0 (SepValidateReferencedCachedHandles.c)
 *     SepIsNgenImage @ 0x14068FF98 (SepIsNgenImage.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406B533C (ObpLookupDirectoryUsingHash.c)
 *     SepIsImageInMinTcbList @ 0x1406CB408 (SepIsImageInMinTcbList.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1406CEBD0 (IopDeviceInterfaceFilterCallback.c)
 *     _CmIsRootDevice @ 0x1406E4838 (_CmIsRootDevice.c)
 *     DrvDbFindDatabaseNode @ 0x1406E67B4 (DrvDbFindDatabaseNode.c)
 *     IopGetDeviceInterfaces @ 0x1406E8FDC (IopGetDeviceInterfaces.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     EtwpLookupLoggerIdByName @ 0x1407132CC (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1407149CC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140714BA0 (EtwpGetLoggerInfoFromContext.c)
 *     PiDevCfgFindDeviceDriver @ 0x140731708 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgConfigureDevice @ 0x140731D80 (PiDevCfgConfigureDevice.c)
 *     IopQueryRegistryKeySystemPath @ 0x140737670 (IopQueryRegistryKeySystemPath.c)
 *     PiFindDevInstMatch @ 0x140738D4C (PiFindDevInstMatch.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073D688 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14073EA70 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     MiObtainSectionForDriver @ 0x140755478 (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x140756358 (MiResolveImageReferences.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14075B864 (IopCreateSecureDeviceClassSettings.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14075C310 (PiPnpRtlServiceFilterCallback.c)
 *     PipFindDeviceOverrideEntry @ 0x14075FDD4 (PipFindDeviceOverrideEntry.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140767CF8 (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x14076CB68 (MiUseLargeDriverPage.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140776A4C (RtlpGetNtProductTypeFromRegistry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077738C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x1407775C0 (PiDevCfgResolveVariable.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x14077D68C (PiRemoveDeferredSetInterfaceState.c)
 *     CmpFindMachineHiveByMountPoint @ 0x14078FE00 (CmpFindMachineHiveByMountPoint.c)
 *     SLQueryLicenseValueInternal @ 0x1407A0F5C (SLQueryLicenseValueInternal.c)
 *     IopIsReportedAlready @ 0x1407A6018 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1407A8250 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x1407B1388 (PipQueryBindingResolution.c)
 *     AdtpLookupDriveLetter @ 0x1407B3F68 (AdtpLookupDriveLetter.c)
 *     KsepCacheDeviceQueryData @ 0x1407C3978 (KsepCacheDeviceQueryData.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140885AB0 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpPreLoadKey @ 0x140885DEC (VrpPreLoadKey.c)
 *     PipAddRequestToEdge @ 0x1408A038C (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x1408A0604 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A794C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B9CD8 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408BA5DC (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x1408C4320 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1408EF718 (PopBatteryDeviceState.c)
 *     ExpFindArcName @ 0x140952744 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x140970BA0 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x140976FE0 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140979790 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140979B20 (_CmServiceFilterCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x1409C5584 (ViSuspectDriversLookupEntry.c)
 *     VfUtilIsProtectedDriver @ 0x1409C989C (VfUtilIsProtectedDriver.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C9CF0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409CB630 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409CBB18 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409DCBA8 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409DCFCC (VfSuspectDriversUnloadCallback.c)
 *     VfCheckUserHandle @ 0x1409DD194 (VfCheckUserHandle.c)
 *     VfFilterAttach @ 0x1409E7F04 (VfFilterAttach.c)
 *     VfAddVerifierEntry @ 0x1409EF9D8 (VfAddVerifierEntry.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 *     VfInitBootDriversLoaded @ 0x140A4D7D4 (VfInitBootDriversLoaded.c)
 *     CmpCreateHardwareProfiles @ 0x140A56F1C (CmpCreateHardwareProfiles.c)
 *     PnpLoadBootFilterDriver @ 0x140A5AA34 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140A5E094 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140A5E204 (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x140A5E798 (CmGetSystemDriverList.c)
 *     CmpDoSort @ 0x140A5F1A8 (CmpDoSort.c)
 *     CmpFindHiveSubKey @ 0x140A5FEF8 (CmpFindHiveSubKey.c)
 *     ViInitSystemPhase0 @ 0x140A72B38 (ViInitSystemPhase0.c)
 *     CmpGetKnownHivePathNode @ 0x140A91D6C (CmpGetKnownHivePathNode.c)
 *     ViLogAndLoadXdv @ 0x140A96A84 (ViLogAndLoadXdv.c)
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
