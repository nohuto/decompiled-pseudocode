/*
 * XREFs of SeCaptureSubjectContext @ 0x1406944B0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x14026A880 (SeReportSecurityEventWithSubCategory.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140294C80 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     RtlCheckTokenMembershipEx @ 0x1402FEA00 (RtlCheckTokenMembershipEx.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1404E776C (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     RtlCheckTokenCapability @ 0x1405813C0 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1405A0140 (WdipAccessCheck.c)
 *     PiDqQueryCreate @ 0x1405D22F8 (PiDqQueryCreate.c)
 *     NtDeleteValueKey @ 0x1405DD640 (NtDeleteValueKey.c)
 *     CmpNotifyChangeKey @ 0x1405E2980 (CmpNotifyChangeKey.c)
 *     NtSetValueKey @ 0x1405E3650 (NtSetValueKey.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1405ECB20 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     SepAdtTokenRightAdjusted @ 0x140618FE4 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406190D0 (SeAuditingWithTokenForSubcategory.c)
 *     ExpWnfCheckCallerAccess @ 0x140623C90 (ExpWnfCheckCallerAccess.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1406267D4 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     RtlIsSandboxedToken @ 0x14062BE70 (RtlIsSandboxedToken.c)
 *     NtImpersonateAnonymousToken @ 0x140630BF0 (NtImpersonateAnonymousToken.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     CmpLogHiveFileInaccessible @ 0x14063CA24 (CmpLogHiveFileInaccessible.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     NtDeleteKey @ 0x140643C50 (NtDeleteKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x140645608 (PiDqOpenUserObjectRegKey.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14064CDF0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     RtlpSetSecurityObject @ 0x140669BF0 (RtlpSetSecurityObject.c)
 *     EtwpAccessCheck @ 0x14066BB48 (EtwpAccessCheck.c)
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 *     EtwpRegisterUMGuid @ 0x14066E310 (EtwpRegisterUMGuid.c)
 *     NtSetInformationKey @ 0x1406726A0 (NtSetInformationKey.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14068D640 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x14068D710 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x14068D790 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140694210 (CmKeyBodyRemapToVirtualForEnum.c)
 *     IopGetDeviceInterfaces @ 0x1406BE69C (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x1406C1CD8 (PiCMValidateDeviceInstance.c)
 *     NtCloseObjectAuditAlarm @ 0x1406F1200 (NtCloseObjectAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x1406F252C (ExIsRestrictedCaller.c)
 *     PiUEventHandleRegistration @ 0x1406F35B0 (PiUEventHandleRegistration.c)
 *     PspSinglePrivCheck @ 0x1406F625C (PspSinglePrivCheck.c)
 *     PiCMGetDeviceIdList @ 0x1406F6DF4 (PiCMGetDeviceIdList.c)
 *     PiAuVerifyAccessToObject @ 0x1406F7FE0 (PiAuVerifyAccessToObject.c)
 *     NtOpenObjectAuditAlarm @ 0x1406F9340 (NtOpenObjectAuditAlarm.c)
 *     PspIsContextAdmin @ 0x140704A58 (PspIsContextAdmin.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140705F30 (NtPrivilegedServiceAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14070A1F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepCheckCreateLowBox @ 0x14070D104 (SepCheckCreateLowBox.c)
 *     IoGetDeviceInterfaceAlias @ 0x140719730 (IoGetDeviceInterfaceAlias.c)
 *     PiAuDoesClientHavePrivilege @ 0x14071D498 (PiAuDoesClientHavePrivilege.c)
 *     NtDeleteObjectAuditAlarm @ 0x1407229E0 (NtDeleteObjectAuditAlarm.c)
 *     PiPnpRtlObjectEventWorker @ 0x140735FE0 (PiPnpRtlObjectEventWorker.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140779640 (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x14077BA84 (SeCheckPrivilegedObject.c)
 *     SepAuditAssignPrimaryToken @ 0x1407A60B8 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407A6358 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407A686C (SeAuditProcessCreation.c)
 *     PopBootStatAccessCheck @ 0x1407AF0DC (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407B4810 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x1408655F0 (NtRenameKey.c)
 *     CmUpdateFeatureConfiguration @ 0x140867CE0 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140867E70 (CmUpdateFeatureUsageSubscription.c)
 *     PnpGetCallerSessionId @ 0x14089ED2C (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x1408A0A68 (PiAuCheckTokenMembership.c)
 *     PspIumVerifyParentSd @ 0x1409098E4 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140919F0C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091A4C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14091A68C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14091A880 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x14091AA38 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x14091AF84 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091B140 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091B37C (SeOperationAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x14091DEA0 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x14091DF60 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x140932158 (EtwpCoverageUserIsAdmin.c)
 *     CmFcInitSystem2 @ 0x140A35394 (CmFcInitSystem2.c)
 *     WmipInitializeSecurity @ 0x140A6551C (WmipInitializeSecurity.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406952E0 (PsReferenceImpersonationTokenEx.c)
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
