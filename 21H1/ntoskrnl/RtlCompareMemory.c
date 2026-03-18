/*
 * XREFs of RtlCompareMemory @ 0x1403FE5E0
 * Callers:
 *     SepIsCapabilitySid @ 0x140205C40 (SepIsCapabilitySid.c)
 *     SepIsPackageSid @ 0x140205C9C (SepIsPackageSid.c)
 *     SepNormalAccessCheck @ 0x1402089D0 (SepNormalAccessCheck.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1402D91B0 (RtlNormalizeSecurityDescriptor.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402DF540 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x14039F8CC (PpmPerfCalculateQosClassPolicies.c)
 *     HalpGenericErrorSourceRecovery @ 0x1404CA938 (HalpGenericErrorSourceRecovery.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1405808A0 (RtlpStdLogCapturedStackTrace.c)
 *     RtlpHpSizeHeap @ 0x14058EEA8 (RtlpHpSizeHeap.c)
 *     EtwpTraceStackKey @ 0x1405A815C (EtwpTraceStackKey.c)
 *     WheaGetErrPacketFromErrRecord @ 0x1405B536C (WheaGetErrPacketFromErrRecord.c)
 *     WbInitializeEncryptionSegment @ 0x1405CD390 (WbInitializeEncryptionSegment.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405F31AC (EtwpClearSessionAndUnreferenceEntry.c)
 *     AlpcpExposeWorkOnBehalfAttribute @ 0x14060B5C0 (AlpcpExposeWorkOnBehalfAttribute.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140618ADC (CmpCompareNewValueDataAgainstKCBCache.c)
 *     NtAlpcOpenSenderProcess @ 0x14064A3F0 (NtAlpcOpenSenderProcess.c)
 *     sub_14065C2B0 @ 0x14065C2B0 (sub_14065C2B0.c)
 *     EtwpCalculateUpdateNotification @ 0x14067FD5C (EtwpCalculateUpdateNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x140684748 (PnpNotifyTargetDeviceChange.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406C6290 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepCheckCapabilities @ 0x1406D4A94 (SepCheckCapabilities.c)
 *     EtwpTrackDebugIdForSession @ 0x1406D723C (EtwpTrackDebugIdForSession.c)
 *     NtAlpcOpenSenderThread @ 0x1406D8620 (NtAlpcOpenSenderThread.c)
 *     ObpCompareEntryLevel2 @ 0x1406DEB80 (ObpCompareEntryLevel2.c)
 *     RtlIsPackageSid @ 0x140703E30 (RtlIsPackageSid.c)
 *     PnpIsNullGuid @ 0x14070A09C (PnpIsNullGuid.c)
 *     RtlGetAppContainerSidType @ 0x14070D180 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x14070D810 (RtlIsCapabilitySid.c)
 *     PopArePowerSettingsEqual @ 0x14070F478 (PopArePowerSettingsEqual.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x140714244 (SPCallServerHandleFileIntegrityQuery.c)
 *     PnpNotifyDeviceClassChange @ 0x140722CF8 (PnpNotifyDeviceClassChange.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14072B840 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IopPnPDispatch @ 0x140738100 (IopPnPDispatch.c)
 *     PnpBusTypeGuidGetIndex @ 0x1407585DC (PnpBusTypeGuidGetIndex.c)
 *     IoReportTargetDeviceChange @ 0x140759040 (IoReportTargetDeviceChange.c)
 *     PipGenerateContainerID @ 0x140759D50 (PipGenerateContainerID.c)
 *     PnpCompareInterruptInformation @ 0x14075E0CC (PnpCompareInterruptInformation.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14075ED28 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopInitSIdle @ 0x1407782B8 (PopInitSIdle.c)
 *     CmpFilterAcpiDockingState @ 0x14078D508 (CmpFilterAcpiDockingState.c)
 *     CmpTransUowIsEqual @ 0x14086DF08 (CmpTransUowIsEqual.c)
 *     PnpNotifyHwProfileChange @ 0x14089B6A8 (PnpNotifyHwProfileChange.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089B978 (PnpRequestHwProfileChangeNotification.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1408B26D4 (PiDrvDbQuerySyncNodesUpdated.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1408C4F0C (MiCompareUserSidHotPatchNodes.c)
 *     ObpGetTraceIndex @ 0x1408D9E18 (ObpGetTraceIndex.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408EC130 (PpmCompareAndApplyPolicySettings.c)
 *     CompareNamesCaseSensitive @ 0x14090D444 (CompareNamesCaseSensitive.c)
 *     SepIsAclEqual @ 0x140920EEC (SepIsAclEqual.c)
 *     WmipParseSysIdTable @ 0x14092D63C (WmipParseSysIdTable.c)
 *     EtwpTrackBinaryForSession @ 0x14093C700 (EtwpTrackBinaryForSession.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 *     ExpCovIsModulePresent @ 0x140952788 (ExpCovIsModulePresent.c)
 *     BiUpdateBcdObject @ 0x14096E608 (BiUpdateBcdObject.c)
 *     VfUtilEqualUnicodeString @ 0x1409C35F4 (VfUtilEqualUnicodeString.c)
 *     ViDdiDispatchWmiQueryAllData @ 0x1409C505C (ViDdiDispatchWmiQueryAllData.c)
 *     ViCheckTag @ 0x1409CAE30 (ViCheckTag.c)
 *     ViCopyBackModifiedBuffer @ 0x1409CAF80 (ViCopyBackModifiedBuffer.c)
 *     PipMigratePnpState @ 0x140A49980 (PipMigratePnpState.c)
 *     HalpAuditSlicTables @ 0x140A5D9F0 (HalpAuditSlicTables.c)
 *     VhdiInitializeBootDisk @ 0x140A92790 (VhdiInitializeBootDisk.c)
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
