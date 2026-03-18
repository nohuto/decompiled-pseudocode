/*
 * XREFs of SepAdtLogAuditRecord @ 0x1403BD520
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1402D7680 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405E3150 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405E326C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x140670704 (SepAdtTokenRightAdjusted.c)
 *     SepAuditAssignPrimaryToken @ 0x1407A3868 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407A3B08 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407A401C (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140918C5C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x140919210 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1409193DC (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409195D0 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x140919B54 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x140919CD4 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x140919E90 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091A0CC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091A408 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091A634 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14091A890 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x14091A984 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14091AB7C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091ADA8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14091B630 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091B86C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14091BB10 (SepAdtStagingEvent.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14022BC80 (PsGetThreadServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     SepQueueWorkItem @ 0x14030D790 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x140312098 (SepRmDispatchDataToLsa.c)
 *     SepAdtMarshallAuditRecord @ 0x1403BD66C (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x1405920B8 (SepAuditFailedRaisedIrql.c)
 *     SepAdtLogAuditFailureEvent @ 0x14091A984 (SepAdtLogAuditFailureEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  POOL_TYPE v3; // esi
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rbx
  void *ThreadServerSilo; // rax
  PVOID *v7; // r14
  int v8; // ebp
  _DWORD *v9; // r9
  PVOID v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // r8
  _DWORD *v13; // r9
  void *v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  _BYTE v17[8]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v18[3]; // [rsp+28h] [rbp-50h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = NonPagedPoolNx;
  if ( CurrentIrql != 2 )
    v3 = PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v3, 0x40uLL, 0x69416553u);
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[5] = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 0;
    *((_DWORD *)PoolWithTag + 5) = 1;
    *((_DWORD *)PoolWithTag + 8) = 1;
    ThreadServerSilo = (void *)PsGetThreadServerSilo((__int64)KeGetCurrentThread());
    *(_QWORD *)(v5 + 56) = ThreadServerSilo;
    if ( ThreadServerSilo )
      ObfReferenceObjectWithTag(ThreadServerSilo, 0x69416553u);
    v7 = (PVOID *)(v5 + 24);
    v8 = SepAdtMarshallAuditRecord(Src);
    if ( v8 < 0 )
    {
      v16 = *(void **)(v5 + 56);
      if ( v16 )
        ObfDereferenceObjectWithTag(v16, 0x69416553u);
      ExFreePoolWithTag((PVOID)v5, 0);
      SepAdtLastAuditFailStatus = v8;
      _InterlockedIncrement(&SepAdtAuditFailureCount);
      if ( Src[1] == 521 )
        goto LABEL_13;
      v15 = (unsigned int)v8;
      goto LABEL_31;
    }
    if ( SepRmAuditingEnabled || (v10 = *v7, (*((_DWORD *)*v7 + 5) & 2) == 0) )
    {
      v11 = *((_DWORD *)*v7 + 3);
      *(_DWORD *)(v5 + 36) = v11;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v11 <= 0x1D0 )
        {
          memset(v18, 0, sizeof(v18));
          KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0LL, (__int64)v18, v9);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess((__int64)v18, 0LL, v12, v13);
        }
        goto LABEL_13;
      }
      v17[0] = 0;
      if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v17) )
        goto LABEL_13;
      v14 = *(void **)(v5 + 56);
      if ( v14 )
        ObfDereferenceObjectWithTag(v14, 0x69416553u);
      ExFreePoolWithTag(*v7, 0);
      ExFreePoolWithTag((PVOID)v5, 0);
      if ( v17[0] )
        goto LABEL_13;
      v15 = 3221225473LL;
LABEL_31:
      SepAuditFailedRaisedIrql(v15);
LABEL_13:
      if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    if ( *(_QWORD *)(v5 + 56) )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 56), 0x69416553u);
      v10 = *(PVOID *)(v5 + 24);
    }
    ExFreePoolWithTag(v10, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
