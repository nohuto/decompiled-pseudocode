/*
 * XREFs of SeCaptureSubjectContext @ 0x1405EAF70
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140258400 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1402D7680 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x14035C130 (RtlCheckTokenMembershipEx.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404E7130 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     WdipAccessCheck @ 0x14059FA50 (WdipAccessCheck.c)
 *     ExIsRestrictedCaller @ 0x1405CEDDC (ExIsRestrictedCaller.c)
 *     SPCall2ServerInternal @ 0x1405D6678 (SPCall2ServerInternal.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1405E3330 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405E3400 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1405E3480 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpNotifyChangeKey @ 0x1405F3D20 (CmpNotifyChangeKey.c)
 *     EtwpAccessCheck @ 0x1405F4798 (EtwpAccessCheck.c)
 *     EtwpRegisterUMGuid @ 0x1405F6270 (EtwpRegisterUMGuid.c)
 *     NtSetInformationKey @ 0x1405FA5C0 (NtSetInformationKey.c)
 *     RtlpSetSecurityObject @ 0x140614910 (RtlpSetSecurityObject.c)
 *     NtSetValueKey @ 0x140618C70 (NtSetValueKey.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140622140 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     RtlIsSandboxedToken @ 0x140649A20 (RtlIsSandboxedToken.c)
 *     ExpWnfCheckCallerAccess @ 0x1406693B0 (ExpWnfCheckCallerAccess.c)
 *     SepAdtTokenRightAdjusted @ 0x140670704 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406707F0 (SeAuditingWithTokenForSubcategory.c)
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     PiUEventHandleRegistration @ 0x1406801D8 (PiUEventHandleRegistration.c)
 *     PiDqOpenUserObjectRegKey @ 0x140680718 (PiDqOpenUserObjectRegKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmpLogHiveFileInaccessible @ 0x14068EBC4 (CmpLogHiveFileInaccessible.c)
 *     NtDeleteKey @ 0x140692140 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140693CE0 (NtDeleteValueKey.c)
 *     PiDqQueryCreate @ 0x1406A0BD8 (PiDqQueryCreate.c)
 *     PiCMValidateDeviceInstance @ 0x1406B1A38 (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x1406B2B64 (PiAuVerifyAccessToObject.c)
 *     IopGetDeviceInterfaces @ 0x1406B3D5C (IopGetDeviceInterfaces.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406C6290 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1406CFE60 (NtCloseObjectAuditAlarm.c)
 *     PspSinglePrivCheck @ 0x1406D368C (PspSinglePrivCheck.c)
 *     PiCMGetDeviceIdList @ 0x1406D4004 (PiCMGetDeviceIdList.c)
 *     NtOpenObjectAuditAlarm @ 0x1406D5CC0 (NtOpenObjectAuditAlarm.c)
 *     PspIsContextAdmin @ 0x1406E20D8 (PspIsContextAdmin.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406E27E0 (NtPrivilegedServiceAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406E6388 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepCheckCreateLowBox @ 0x1406E92A4 (SepCheckCreateLowBox.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407001B0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407173A0 (IoGetDeviceInterfaceAlias.c)
 *     PiAuDoesClientHavePrivilege @ 0x14071B518 (PiAuDoesClientHavePrivilege.c)
 *     NtDeleteObjectAuditAlarm @ 0x140720B20 (NtDeleteObjectAuditAlarm.c)
 *     PiPnpRtlObjectEventWorker @ 0x14072EEE0 (PiPnpRtlObjectEventWorker.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140777230 (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x140779674 (SeCheckPrivilegedObject.c)
 *     SepAuditAssignPrimaryToken @ 0x1407A3868 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407A3B08 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407A401C (SeAuditProcessCreation.c)
 *     PopBootStatAccessCheck @ 0x1407ABF7C (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407B16A0 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x1408642D0 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x14086699C (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140866B2C (CmUpdateFeatureUsageSubscription.c)
 *     PnpGetCallerSessionId @ 0x14089DA0C (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x14089F748 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x140908634 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140918C5C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140919210 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1409193DC (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409195D0 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x140919788 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x140919CD4 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140919E90 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091A0CC (SeOperationAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x14091CBF0 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x14091CCB0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x140930EA8 (EtwpCoverageUserIsAdmin.c)
 *     CmFcInitSystem2 @ 0x140A35394 (CmFcInitSystem2.c)
 *     WmipInitializeSecurity @ 0x140A65B3C (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405EBDA0 (PsReferenceImpersonationTokenEx.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // [rsp+60h] [rbp+8h] BYREF
  char v13; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v13 = 0;
  v12 = 0;
  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread )
    v4 = (void *)PsReferenceImpersonationTokenEx(
                   (_DWORD)CurrentThread,
                   0,
                   (unsigned int)&v13,
                   (unsigned int)&v12,
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
    KeLeaveCriticalRegionThread((__int64)v7, v9, v10, v11);
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
