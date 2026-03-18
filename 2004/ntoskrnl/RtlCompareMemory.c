/*
 * XREFs of RtlCompareMemory @ 0x1403FF870
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x14026EE00 (RtlNormalizeSecurityDescriptor.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140273570 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SepIsCapabilitySid @ 0x140298600 (SepIsCapabilitySid.c)
 *     SepIsPackageSid @ 0x14029865C (SepIsPackageSid.c)
 *     SepNormalAccessCheck @ 0x14029B4E0 (SepNormalAccessCheck.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x1403A005C (PpmPerfCalculateQosClassPolicies.c)
 *     HalpGenericErrorSourceRecovery @ 0x1404CADE8 (HalpGenericErrorSourceRecovery.c)
 *     RtlpStdLogCapturedStackTrace @ 0x140581020 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x14058F598 (RtlpHpSizeHeap.c)
 *     EtwpTraceStackKey @ 0x1405A884C (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x1405B5A8C (WheaGetErrPacketFromErrRecord.c)
 *     WbInitializeEncryptionSegment @ 0x1405CE760 (WbInitializeEncryptionSegment.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1405E34BC (CmpCompareNewValueDataAgainstKCBCache.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406267D4 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtAlpcOpenSenderProcess @ 0x14062C840 (NtAlpcOpenSenderProcess.c)
 *     RtlIsPackageSid @ 0x140633BF0 (RtlIsPackageSid.c)
 *     EtwpCalculateUpdateNotification @ 0x140633F88 (EtwpCalculateUpdateNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x140648470 (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x140648C04 (PnpIsNullGuid.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x140683730 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     PopArePowerSettingsEqual @ 0x1406A81D8 (PopArePowerSettingsEqual.c)
 *     RtlGetAppContainerSidType @ 0x1406BAF40 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1406BB5D0 (RtlIsCapabilitySid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406C7250 (EtwpClearSessionAndUnreferenceEntry.c)
 *     sub_1406D9B38 @ 0x1406D9B38 (sub_1406D9B38.c)
 *     SepCheckCapabilities @ 0x1406F7DD0 (SepCheckCapabilities.c)
 *     EtwpTrackDebugIdForSession @ 0x1406FAB7C (EtwpTrackDebugIdForSession.c)
 *     NtAlpcOpenSenderThread @ 0x1406FC080 (NtAlpcOpenSenderThread.c)
 *     ObpCompareEntryLevel2 @ 0x140701A60 (ObpCompareEntryLevel2.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x1407165D4 (SPCallServerHandleFileIntegrityQuery.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140726680 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpNotifyDeviceClassChange @ 0x14072CDB4 (PnpNotifyDeviceClassChange.c)
 *     IopPnPDispatch @ 0x140739C80 (IopPnPDispatch.c)
 *     PnpBusTypeGuidGetIndex @ 0x14075A034 (PnpBusTypeGuidGetIndex.c)
 *     IoReportTargetDeviceChange @ 0x14075AEC0 (IoReportTargetDeviceChange.c)
 *     PipGenerateContainerID @ 0x14075B958 (PipGenerateContainerID.c)
 *     PnpCompareInterruptInformation @ 0x14076043C (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140761018 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopInitSIdle @ 0x14077A6C8 (PopInitSIdle.c)
 *     CmpFilterAcpiDockingState @ 0x14078F3D8 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x14086F9C8 (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x14089C9C8 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089CC98 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B39F4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1408C625C (MiCompareUserSidHotPatchNodes.c)
 *     ObpGetTraceIndex @ 0x1408DB188 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408ED3B0 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x14090E7E4 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x1409228B0 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x14092E8EC (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x14093D97C (EtwpTrackBinaryForSession.c)
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 *     ExpCovIsModulePresent @ 0x140953E54 (ExpCovIsModulePresent.c)
 *     BiUpdateBcdObject @ 0x14096F9A8 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x1409C3604 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1409C506C (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x1409CAE40 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x1409CAF90 (ViCopyBackModifiedBuffer.c)
 *     HalpAuditSlicTables @ 0x140A5CA90 (HalpAuditSlicTables.c)
 *     PipMigratePnpState @ 0x140A6EFD4 (PipMigratePnpState.c)
 *     VhdiInitializeBootDisk @ 0x140A91EA0 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
