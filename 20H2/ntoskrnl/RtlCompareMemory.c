/*
 * XREFs of RtlCompareMemory @ 0x140405B40
 * Callers:
 *     SepIsPackageSid @ 0x1402055E4 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140205640 (SepIsCapabilitySid.c)
 *     SepNormalAccessCheck @ 0x140226B20 (SepNormalAccessCheck.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402402D0 (IoReportTargetDeviceChangeAsynchronous.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1402FC300 (RtlNormalizeSecurityDescriptor.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x1403A252C (PpmPerfCalculateQosClassPolicies.c)
 *     HalpGenericErrorSourceRecovery @ 0x1404CE348 (HalpGenericErrorSourceRecovery.c)
 *     RtlpStdLogCapturedStackTrace @ 0x140584980 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x14059303C (RtlpHpSizeHeap.c)
 *     EtwpTraceStackKey @ 0x1405AC3AC (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x1405B95EC (WheaGetErrPacketFromErrRecord.c)
 *     WbInitializeEncryptionSegment @ 0x1405D4C04 (WbInitializeEncryptionSegment.c)
 *     RtlIsPackageSid @ 0x1405D7EF0 (RtlIsPackageSid.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405E352C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtAlpcOpenSenderProcess @ 0x1405E6F70 (NtAlpcOpenSenderProcess.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x1405EFE10 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     PnpNotifyTargetDeviceChange @ 0x140649A60 (PnpNotifyTargetDeviceChange.c)
 *     PnpIsNullGuid @ 0x14064AEA0 (PnpIsNullGuid.c)
 *     sub_14065DBBC @ 0x14065DBBC (sub_14065DBBC.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14066FC68 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     EtwpTrackDebugIdForSession @ 0x1406AFEB4 (EtwpTrackDebugIdForSession.c)
 *     SepCheckCapabilities @ 0x1406CAEC0 (SepCheckCapabilities.c)
 *     NtAlpcOpenSenderThread @ 0x1406CE920 (NtAlpcOpenSenderThread.c)
 *     ObpCompareEntryLevel2 @ 0x1406D52E0 (ObpCompareEntryLevel2.c)
 *     PopArePowerSettingsEqual @ 0x1406FAB78 (PopArePowerSettingsEqual.c)
 *     RtlGetAppContainerSidType @ 0x1406FB810 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1406FBF2C (RtlIsCapabilitySid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140717CA4 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpCalculateUpdateNotification @ 0x14071AA18 (EtwpCalculateUpdateNotification.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x140724594 (SPCallServerHandleFileIntegrityQuery.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140735110 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpNotifyDeviceClassChange @ 0x14073B830 (PnpNotifyDeviceClassChange.c)
 *     IopPnPDispatch @ 0x140748B90 (IopPnPDispatch.c)
 *     PnpBusTypeGuidGetIndex @ 0x1407687F4 (PnpBusTypeGuidGetIndex.c)
 *     IoReportTargetDeviceChange @ 0x1407697B0 (IoReportTargetDeviceChange.c)
 *     PipGenerateContainerID @ 0x14076A248 (PipGenerateContainerID.c)
 *     PnpCompareInterruptInformation @ 0x14076EA4C (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14076F628 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopInitSIdle @ 0x140788CC8 (PopInitSIdle.c)
 *     CmpFilterAcpiDockingState @ 0x14079BD90 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x140875518 (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x1408A24F8 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x1408A27C8 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B9614 (PiDrvDbQuerySyncNodesUpdated.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1408CC09C (MiCompareUserSidHotPatchNodes.c)
 *     ObpGetTraceIndex @ 0x1408E0FC8 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408F2FC0 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x140914324 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x140927504 (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x14093471C (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x14094373C (EtwpTrackBinaryForSession.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 *     ExpCovIsModulePresent @ 0x140959C14 (ExpCovIsModulePresent.c)
 *     BiUpdateBcdObject @ 0x140975778 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x1409C9624 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1409CB08C (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x1409D0E60 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x1409D0FB0 (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x140A4FA7C (PipMigratePnpState.c)
 *     HalpAuditSlicTables @ 0x140A63DF0 (HalpAuditSlicTables.c)
 *     VhdiInitializeBootDisk @ 0x140A97B00 (VhdiInitializeBootDisk.c)
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
