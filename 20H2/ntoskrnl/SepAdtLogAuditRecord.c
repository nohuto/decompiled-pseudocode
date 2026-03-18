/*
 * XREFs of SepAdtLogAuditRecord @ 0x1403C1C04
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x14023D670 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405E4E9C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E4FBC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x140631204 (SepAdtTokenRightAdjusted.c)
 *     SepAuditAssignPrimaryToken @ 0x1407B7184 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407B7424 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407B7938 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091FB8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140920140 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14092030C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x140920500 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x140920A84 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140920C04 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140920DC0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x140920FFC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x140921338 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x140921564 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x1409217C0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409218B4 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x140921AAC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140921CD8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x140922560 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14092279C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140922A40 (SepAdtStagingEvent.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     PsGetThreadServerSilo @ 0x140297450 (PsGetThreadServerSilo.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     SepQueueWorkItem @ 0x14031BC30 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x1403204A8 (SepRmDispatchDataToLsa.c)
 *     SepAdtMarshallAuditRecord @ 0x1403C1E74 (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F1894 (KeIsExecutingInArbitraryThreadContext.c)
 *     SepAuditFailedRaisedIrql @ 0x140596248 (SepAuditFailedRaisedIrql.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409218B4 (SepAdtLogAuditFailureEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  POOL_TYPE v3; // edi
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  void *ThreadServerSilo; // rax
  PVOID *v9; // r14
  int v10; // ebp
  PVOID v11; // rcx
  unsigned int v12; // ecx
  void *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v17[3]; // [rsp+28h] [rbp-50h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = NonPagedPoolNx;
  if ( CurrentIrql != 2 )
    v3 = PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v3, 0x40uLL, 0x69416553u);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( Src[1] != 521 )
      SepAuditFailedRaisedIrql(3221225626LL);
    return;
  }
  PoolWithTag[5] = 0LL;
  *((_DWORD *)PoolWithTag + 12) = 0;
  *((_DWORD *)PoolWithTag + 5) = 1;
  *((_DWORD *)PoolWithTag + 8) = 1;
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(v6, v5) )
    ThreadServerSilo = 0LL;
  else
    ThreadServerSilo = (void *)PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  *(_QWORD *)(v7 + 56) = ThreadServerSilo;
  if ( ThreadServerSilo )
    ObfReferenceObjectWithTag(ThreadServerSilo, 0x69416553u);
  v9 = (PVOID *)(v7 + 24);
  v10 = SepAdtMarshallAuditRecord(Src);
  if ( v10 < 0 )
  {
    v15 = *(void **)(v7 + 56);
    if ( v15 )
      ObfDereferenceObjectWithTag(v15, 0x69416553u);
    ExFreePoolWithTag((PVOID)v7, 0);
    SepAdtLastAuditFailStatus = v10;
    _InterlockedIncrement(&SepAdtAuditFailureCount);
    if ( Src[1] == 521 )
      goto LABEL_33;
    v14 = (unsigned int)v10;
  }
  else
  {
    if ( !SepRmAuditingEnabled )
    {
      v11 = *v9;
      if ( (*((_DWORD *)*v9 + 5) & 2) != 0 )
      {
        if ( *(_QWORD *)(v7 + 56) )
        {
          ObfDereferenceObjectWithTag(*(PVOID *)(v7 + 56), 0x69416553u);
          v11 = *(PVOID *)(v7 + 24);
        }
        ExFreePoolWithTag(v11, 0);
        ExFreePoolWithTag((PVOID)v7, 0);
        return;
      }
    }
    v12 = *((_DWORD *)*v9 + 3);
    *(_DWORD *)(v7 + 36) = v12;
    if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
    {
      if ( v12 <= 0x1D0 )
      {
        memset(v17, 0, sizeof(v17));
        KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)v17);
        SepRmDispatchDataToLsa(v7);
        KiUnstackDetachProcess((__int64)v17, 0);
      }
      goto LABEL_33;
    }
    v16[0] = 0;
    if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v7, v16) )
      goto LABEL_33;
    v13 = *(void **)(v7 + 56);
    if ( v13 )
      ObfDereferenceObjectWithTag(v13, 0x69416553u);
    ExFreePoolWithTag(*v9, 0);
    ExFreePoolWithTag((PVOID)v7, 0);
    if ( v16[0] )
      goto LABEL_33;
    v14 = 3221225473LL;
  }
  SepAuditFailedRaisedIrql(v14);
LABEL_33:
  if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
    SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
}
