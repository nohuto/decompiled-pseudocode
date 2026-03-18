/*
 * XREFs of RtlEqualUnicodeString @ 0x140609D30
 * Callers:
 *     AuthzBasepFindSecurityAttribute @ 0x140259DD0 (AuthzBasepFindSecurityAttribute.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1402DEFD0 (RtlDeriveCapabilitySidsFromName.c)
 *     AuthzBasepEqualUnicodeString @ 0x140338E68 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403584C0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     PnpMultiSzContainsString @ 0x14038F960 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x14050A6CC (PiDrvDbFindNode.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x14056E430 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140573700 (PopEmModuleAddressMatchCallback.c)
 *     PopPlLookupDevicePowerProfile @ 0x140578AA8 (PopPlLookupDevicePowerProfile.c)
 *     VrpCreateNamespaceNode @ 0x1405C9524 (VrpCreateNamespaceNode.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405CBE80 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PspIdentityBasedJobBreakaway @ 0x1405CEA74 (PspIdentityBasedJobBreakaway.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     SepIsNgenImage @ 0x14066EF0C (SepIsNgenImage.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x140678288 (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x140678680 (SepValidateReferencedCachedHandles.c)
 *     EtwpLookupLoggerIdByName @ 0x140679038 (EtwpLookupLoggerIdByName.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14067A780 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14067A954 (EtwpGetLoggerInfoFromContext.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     DrvDbFindDatabaseNode @ 0x1406B03AC (DrvDbFindDatabaseNode.c)
 *     _CmIsRootDevice @ 0x1406B19F4 (_CmIsRootDevice.c)
 *     IopGetDeviceInterfaces @ 0x1406B3D5C (IopGetDeviceInterfaces.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406BC61C (ObpLookupDirectoryUsingHash.c)
 *     SepIsImageInMinTcbList @ 0x1406D50C8 (SepIsImageInMinTcbList.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1406D88D0 (IopDeviceInterfaceFilterCallback.c)
 *     PiDevCfgFindDeviceDriver @ 0x140721430 (PiDevCfgFindDeviceDriver.c)
 *     PiFindDevInstMatch @ 0x1407254B4 (PiFindDevInstMatch.c)
 *     IopQueryRegistryKeySystemPath @ 0x140726670 (IopQueryRegistryKeySystemPath.c)
 *     PiDevCfgConfigureDevice @ 0x1407284B0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407357A4 (PiDevCfgLogDeviceConfigured.c)
 *     MiObtainSectionForDriver @ 0x140744D18 (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x140745BF8 (MiResolveImageReferences.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140749310 (PiPnpRtlServiceFilterCallback.c)
 *     PipFindDeviceOverrideEntry @ 0x14074CB6C (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140757A28 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140757A98 (PiUEventQueueBroadcastEventEntry.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140758064 (IopCreateSecureDeviceClassSettings.c)
 *     MiUseLargeDriverPage @ 0x14075C018 (MiUseLargeDriverPage.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14076605C (RtlpGetNtProductTypeFromRegistry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14076699C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x140766BD0 (PiDevCfgResolveVariable.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x14076C4BC (PiRemoveDeferredSetInterfaceState.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140788520 (CmpFindMachineHiveByMountPoint.c)
 *     SLQueryLicenseValueInternal @ 0x140791E84 (SLQueryLicenseValueInternal.c)
 *     IopIsReportedAlready @ 0x140796F38 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140799170 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x14079E078 (PipQueryBindingResolution.c)
 *     AdtpLookupDriveLetter @ 0x1407A25CC (AdtpLookupDriveLetter.c)
 *     KsepCacheDeviceQueryData @ 0x1407B1FD8 (KsepCacheDeviceQueryData.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14087EC70 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpPreLoadKey @ 0x14087EFAC (VrpPreLoadKey.c)
 *     PipAddRequestToEdge @ 0x14089953C (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x1408997B4 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A0AFC (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B2D98 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B369C (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x1408BD2A0 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1408E8888 (PopBatteryDeviceState.c)
 *     ExpFindArcName @ 0x14094B5E4 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x140969A30 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x14096FE70 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140972620 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1409729B0 (_CmServiceFilterCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x1409BF564 (ViSuspectDriversLookupEntry.c)
 *     VfUtilIsProtectedDriver @ 0x1409C386C (VfUtilIsProtectedDriver.c)
 *     ViIsDriverSuspectForVerifier @ 0x1409C3CC0 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409C5600 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409C5AE8 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409D6B28 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409D6F4C (VfSuspectDriversUnloadCallback.c)
 *     VfCheckUserHandle @ 0x1409D7114 (VfCheckUserHandle.c)
 *     VfFilterAttach @ 0x1409E1E84 (VfFilterAttach.c)
 *     VfAddVerifierEntry @ 0x1409E9958 (VfAddVerifierEntry.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     VfInitBootDriversLoaded @ 0x140A41CDC (VfInitBootDriversLoaded.c)
 *     CmpCreateHardwareProfiles @ 0x140A50B9C (CmpCreateHardwareProfiles.c)
 *     PnpLoadBootFilterDriver @ 0x140A54634 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140A57C94 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140A57E04 (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x140A58398 (CmGetSystemDriverList.c)
 *     CmpDoSort @ 0x140A58DA8 (CmpDoSort.c)
 *     CmpFindHiveSubKey @ 0x140A59AF8 (CmpFindHiveSubKey.c)
 *     ViInitSystemPhase0 @ 0x140A6BFC8 (ViInitSystemPhase0.c)
 *     CmpGetKnownHivePathNode @ 0x140A8CA74 (CmpGetKnownHivePathNode.c)
 *     ViLogAndLoadXdv @ 0x140A91710 (ViLogAndLoadXdv.c)
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
