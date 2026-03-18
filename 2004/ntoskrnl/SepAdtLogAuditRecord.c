/*
 * XREFs of SepAdtLogAuditRecord @ 0x1403BE4B0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x14026A880 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtTokenRightAdjusted @ 0x140618FE4 (SepAdtTokenRightAdjusted.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14068D45C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14068D57C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x1407A60B8 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407A6358 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407A686C (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x140919F0C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091A4C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14091A68C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14091A880 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x14091AE04 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14091AF84 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091B140 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091B37C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091B6B8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091B8E4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14091BB40 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x14091BC34 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14091BE2C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091C058 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14091C8E0 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091CB1C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14091CDC0 (SepAdtStagingEvent.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     PsGetThreadServerSilo @ 0x1402BE900 (PsGetThreadServerSilo.c)
 *     SepQueueWorkItem @ 0x14034AC70 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x14034F888 (SepRmDispatchDataToLsa.c)
 *     SepAdtMarshallAuditRecord @ 0x1403BE5FC (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x1405927A8 (SepAuditFailedRaisedIrql.c)
 *     SepAdtLogAuditFailureEvent @ 0x14091BC34 (SepAdtLogAuditFailureEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
      v13 = *(void **)(v5 + 56);
      if ( v13 )
        ObfDereferenceObjectWithTag(v13, 0x69416553u);
      ExFreePoolWithTag((PVOID)v5, 0);
      SepAdtLastAuditFailStatus = v8;
      _InterlockedIncrement(&SepAdtAuditFailureCount);
      if ( Src[1] == 521 )
        goto LABEL_13;
      v12 = (unsigned int)v8;
      goto LABEL_31;
    }
    if ( SepRmAuditingEnabled || (v9 = *v7, (*((_DWORD *)*v7 + 5) & 2) == 0) )
    {
      v10 = *((_DWORD *)*v7 + 3);
      *(_DWORD *)(v5 + 36) = v10;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v10 <= 0x1D0 )
        {
          memset(v15, 0, sizeof(v15));
          KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0LL, (__int64)v15);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess((__int64)v15, 0LL);
        }
        goto LABEL_13;
      }
      v14[0] = 0;
      if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v14) )
        goto LABEL_13;
      v11 = *(void **)(v5 + 56);
      if ( v11 )
        ObfDereferenceObjectWithTag(v11, 0x69416553u);
      ExFreePoolWithTag(*v7, 0);
      ExFreePoolWithTag((PVOID)v5, 0);
      if ( v14[0] )
        goto LABEL_13;
      v12 = 3221225473LL;
LABEL_31:
      SepAuditFailedRaisedIrql(v12);
LABEL_13:
      if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    if ( *(_QWORD *)(v5 + 56) )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 56), 0x69416553u);
      v9 = *(PVOID *)(v5 + 24);
    }
    ExFreePoolWithTag(v9, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
