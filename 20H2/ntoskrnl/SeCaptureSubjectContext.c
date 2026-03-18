/*
 * XREFs of SeCaptureSubjectContext @ 0x14060C950
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140229080 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeReportSecurityEventWithSubCategory @ 0x14023D670 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x140340930 (RtlCheckTokenMembershipEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x1403F0650 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x1403F07A0 (IoComputeRedirectionTrustLevel.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404EAD18 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     RtlCheckTokenCapability @ 0x140584D20 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1405A3BE0 (WdipAccessCheck.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     PspIsContextAdmin @ 0x1405E249C (PspIsContextAdmin.c)
 *     NtOpenObjectAuditAlarm @ 0x1405E2910 (NtOpenObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405E352C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1405E5080 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405E5150 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1405E51D0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     RtlIsSandboxedToken @ 0x1405E80A0 (RtlIsSandboxedToken.c)
 *     EtwpRegisterUMGuid @ 0x1405F3400 (EtwpRegisterUMGuid.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405F44C0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     RtlpSetSecurityObject @ 0x1405F64F0 (RtlpSetSecurityObject.c)
 *     EtwpAccessCheck @ 0x1405F753C (EtwpAccessCheck.c)
 *     ExpWnfCheckCallerAccess @ 0x1405F75F4 (ExpWnfCheckCallerAccess.c)
 *     CmpNotifyChangeKey @ 0x1405F78B0 (CmpNotifyChangeKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     SepAdtTokenRightAdjusted @ 0x140631204 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406312F0 (SeAuditingWithTokenForSubcategory.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     PiDqQueryCreate @ 0x140646928 (PiDqQueryCreate.c)
 *     NtDeleteValueKey @ 0x140668FB0 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14066DEB0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1406766B0 (NtSetInformationKey.c)
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     NtImpersonateAnonymousToken @ 0x14068D4F0 (NtImpersonateAnonymousToken.c)
 *     NtCloseObjectAuditAlarm @ 0x1406C4600 (NtCloseObjectAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x1406C58CC (ExIsRestrictedCaller.c)
 *     PspSinglePrivCheck @ 0x1406C92EC (PspSinglePrivCheck.c)
 *     PiCMGetDeviceIdList @ 0x1406C9C84 (PiCMGetDeviceIdList.c)
 *     PiAuVerifyAccessToObject @ 0x1406CB0D0 (PiAuVerifyAccessToObject.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406D39C0 (PiDqOpenUserObjectRegKey.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406D8F20 (NtPrivilegedServiceAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406DC5F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepCheckCreateLowBox @ 0x1406DF534 (SepCheckCreateLowBox.c)
 *     IopGetDeviceInterfaces @ 0x1406E8FDC (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x1406EC1AC (PiCMValidateDeviceInstance.c)
 *     CmpLogHiveFileInaccessible @ 0x1406FB038 (CmpLogHiveFileInaccessible.c)
 *     NtDeleteKey @ 0x140701FA0 (NtDeleteKey.c)
 *     PiUEventHandleRegistration @ 0x140718598 (PiUEventHandleRegistration.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14071E008 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     IoGetDeviceInterfaceAlias @ 0x140727720 (IoGetDeviceInterfaceAlias.c)
 *     PiAuDoesClientHavePrivilege @ 0x14072B334 (PiAuDoesClientHavePrivilege.c)
 *     NtDeleteObjectAuditAlarm @ 0x140730AF0 (NtDeleteObjectAuditAlarm.c)
 *     PiPnpRtlObjectEventWorker @ 0x140745470 (PiPnpRtlObjectEventWorker.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140787C40 (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x14078A084 (SeCheckPrivilegedObject.c)
 *     SepAuditAssignPrimaryToken @ 0x1407B7184 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407B7424 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407B7938 (SeAuditProcessCreation.c)
 *     PopBootStatAccessCheck @ 0x1407BD01C (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407C3040 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x14086B010 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x14086D700 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x14086D890 (CmUpdateFeatureUsageSubscription.c)
 *     PnpGetCallerSessionId @ 0x1408A485C (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1408A6598 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x14090F504 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091FB8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140920140 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14092030C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140920500 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1409206B8 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x140920C04 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140920DC0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x140920FFC (SeOperationAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x140923B20 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x140923BE0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x140937F88 (EtwpCoverageUserIsAdmin.c)
 *     CmFcInitSystem2 @ 0x140A3B394 (CmFcInitSystem2.c)
 *     WmipInitializeSecurity @ 0x140A6C7EC (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140209828 (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140210F10 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x14060D780 (PsReferenceImpersonationTokenEx.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rsi
  void *v4; // rax
  unsigned __int64 *v5; // rbp
  _QWORD *v6; // rdi
  struct _KTHREAD *v7; // r15
  signed __int64 *p_Lock; // rsi
  char v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v10 = 0;
  v9 = 0;
  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread )
    v4 = (void *)PsReferenceImpersonationTokenEx(
                   (_DWORD)CurrentThread,
                   0,
                   (unsigned int)&v10,
                   (unsigned int)&v9,
                   (__int64)&SubjectContext->ImpersonationLevel,
                   0LL);
  else
    v4 = 0LL;
  v5 = &Process[1].Affinity.Bitmap[5];
  SubjectContext->ClientToken = v4;
  v6 = (_QWORD *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v6 )
  {
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v6 = (_QWORD *)ObFastReferenceObjectLocked(v5);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v7);
  }
  SubjectContext->PrimaryToken = v6;
  if ( SeTokenLeakTracking )
  {
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}
