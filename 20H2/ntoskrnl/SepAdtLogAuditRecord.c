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
  __int64 v5; // rbx
  void *ThreadServerSilo; // rax
  PVOID *v7; // r14
  int v8; // ebp
  PVOID v9; // rcx
  unsigned int v10; // ecx
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v15[3]; // [rsp+28h] [rbp-50h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = NonPagedPoolNx;
  if ( CurrentIrql != 2 )
    v3 = PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v3, 0x40uLL, 0x69416553u);
  v5 = (__int64)PoolWithTag;
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
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    ThreadServerSilo = 0LL;
  else
    ThreadServerSilo = (void *)PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  *(_QWORD *)(v5 + 56) = ThreadServerSilo;
  if ( ThreadServerSilo )
    ObfReferenceObjectWithTag(ThreadServerSilo, 0x69416553u);
  v7 = (PVOID *)(v5 + 24);
  v8 = SepAdtMarshallAuditRecord(Src);
  if ( v8 < 0 )
  {
    v13 = *(void **)(v5 + 56);
    if ( v13 )
      ObfDereferenceObjectWithTag(v13, 0x69416553u);
    ExFreePoolWithTag((PVOID)v5, 0);
    SepAdtLastAuditFailStatus = v8;
    _InterlockedIncrement(&SepAdtAuditFailureCount);
    if ( Src[1] == 521 )
      goto LABEL_33;
    v12 = (unsigned int)v8;
  }
  else
  {
    if ( !SepRmAuditingEnabled )
    {
      v9 = *v7;
      if ( (*((_DWORD *)*v7 + 5) & 2) != 0 )
      {
        if ( *(_QWORD *)(v5 + 56) )
        {
          ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 56), 0x69416553u);
          v9 = *(PVOID *)(v5 + 24);
        }
        ExFreePoolWithTag(v9, 0);
        ExFreePoolWithTag((PVOID)v5, 0);
        return;
      }
    }
    v10 = *((_DWORD *)*v7 + 3);
    *(_DWORD *)(v5 + 36) = v10;
    if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
    {
      if ( v10 <= 0x1D0 )
      {
        memset(v15, 0, sizeof(v15));
        KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)v15);
        SepRmDispatchDataToLsa(v5);
        KiUnstackDetachProcess((__int64)v15, 0);
      }
      goto LABEL_33;
    }
    v14[0] = 0;
    if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v14) )
      goto LABEL_33;
    v11 = *(void **)(v5 + 56);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x69416553u);
    ExFreePoolWithTag(*v7, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
    if ( v14[0] )
      goto LABEL_33;
    v12 = 3221225473LL;
  }
  SepAuditFailedRaisedIrql(v12);
LABEL_33:
  if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
    SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
}
