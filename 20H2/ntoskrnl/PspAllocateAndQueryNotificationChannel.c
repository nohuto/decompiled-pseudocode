/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x1407112A0
 * Callers:
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140364540 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1403F9AF0 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x1403F9C90 (ZwDeleteWnfStateName.c)
 *     ObReleaseObjectSecurity @ 0x1405F5670 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1405F5A60 (ObpGetObjectSecurity.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405F7240 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405F73E0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140606130 (RtlpAddKnownAce.c)
 *     SeQueryInformationToken @ 0x14060D9F0 (SeQueryInformationToken.c)
 *     PsReferenceEffectiveToken @ 0x14061FA40 (PsReferenceEffectiveToken.c)
 *     RtlCreateSecurityDescriptor @ 0x1406320E0 (RtlCreateSecurityDescriptor.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140665570 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140665CB0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x14066650C (PspUnlockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x140711600 (PspLockRootJobExclusive.c)
 *     PspDispatchWakeNotification @ 0x1407118A4 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x140711918 (PspComputeReportWakeFilter.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1407119B0 (RtlGetOwnerSecurityDescriptor.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  bool v3; // zf
  char v7; // r13
  char v8; // r15
  __int64 v9; // rdi
  int ObjectSecurity; // edi
  PSECURITY_DESCRIPTOR v12; // r12
  struct _DMA_ADAPTER *v13; // r15
  ACL *PoolWithTag; // rax
  ACL *v15; // r15
  __int64 v16; // r9
  _QWORD *v17; // rcx
  PCWNF_TYPE_ID TypeId; // [rsp+20h] [rbp-89h]
  BOOLEAN MemoryAllocated; // [rsp+40h] [rbp-69h] BYREF
  bool v20; // [rsp+41h] [rbp-68h] BYREF
  BOOLEAN OwnerDefaulted[6]; // [rsp+42h] [rbp-67h] BYREF
  __int64 v22; // [rsp+48h] [rbp-61h] BYREF
  int v23; // [rsp+50h] [rbp-59h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-51h] BYREF
  ULONG AclLength; // [rsp+60h] [rbp-49h]
  PSID Owner; // [rsp+68h] [rbp-41h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-39h] BYREF
  __int64 v28; // [rsp+78h] [rbp-31h] BYREF
  int v29; // [rsp+80h] [rbp-29h] BYREF
  __int64 v30; // [rsp+88h] [rbp-21h]
  _OWORD v31[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+7h]
  _WNF_STATE_NAME StateName; // [rsp+B8h] [rbp+Fh] BYREF

  v3 = (*(_DWORD *)(a2 + 1320) & 0x800) == 0;
  MemoryAllocated = 0;
  v20 = 0;
  v28 = 0LL;
  Owner = 0LL;
  v7 = 0;
  SecurityDescriptor = 0LL;
  v22 = 0LL;
  memset(v31, 0, sizeof(v31));
  v32 = 0LL;
  v23 = 0;
  TokenInformation = 0LL;
  v30 = 0LL;
  StateName = 0LL;
  if ( !v3 )
  {
    v8 = 1;
    PspLockRootJobExclusive(a2, a1, &v22);
    v9 = v22;
    if ( a2 != v22 )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(v22 + 56));
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
    goto LABEL_4;
  }
  ObjectSecurity = ObpGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated, 0);
  if ( ObjectSecurity < 0 )
    return (unsigned int)ObjectSecurity;
  v12 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    ObjectSecurity = -1073741790;
LABEL_25:
    ObReleaseObjectSecurity(v12, MemoryAllocated);
    return (unsigned int)ObjectSecurity;
  }
  ObjectSecurity = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, OwnerDefaulted);
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  v13 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken(a1, &v23, &v20, &v29, 0LL);
  ObjectSecurity = SeQueryInformationToken(v13, TokenUser, &TokenInformation);
  if ( v23 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 1208LL), v13);
  }
  else if ( v13 )
  {
    HalPutDmaAdapter(v13);
  }
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  AclLength = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, AclLength, 0x66577350u);
  v15 = PoolWithTag;
  if ( !PoolWithTag
    || (RtlCreateAcl(PoolWithTag, AclLength, 2u),
        RtlpAddKnownAce(v15, 2u, 0, 0x80000000, (unsigned __int8 *)Owner, 0),
        RtlpAddKnownAce(v15, 2u, 0, 0x80000000, *(unsigned __int8 **)TokenInformation, 0),
        RtlCreateSecurityDescriptor(v31, 1u),
        RtlSetDaclSecurityDescriptor(v31, 1u, v15, 0),
        ObjectSecurity = ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, v31),
        ExFreePoolWithTag(v15, 0x66577350u),
        ObjectSecurity < 0) )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    goto LABEL_25;
  }
  v8 = 0;
  PspLockRootJobExclusive(a2, a1, &v22);
  if ( (*(_DWORD *)(a2 + 1320) & 0x800) != 0 )
  {
    v9 = v22;
    v7 = 1;
  }
  else
  {
    *(_WNF_STATE_NAME *)(a2 + 880) = StateName;
    PspComputeReportWakeFilter(a2, &v28, a2 + 952, 0LL);
    PspEnumJobsAndProcessesInJobHierarchy(
      v17,
      0,
      (int)PspEnableWakeCounters,
      (int)PspEnableProcessWakeCounters,
      v16 & (unsigned __int64)TypeId,
      2);
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 1320), 0xBu);
    _InterlockedIncrement64(&PspJobTimeLimitsRequest);
    v9 = v22;
  }
LABEL_4:
  *a3 = *(_OWORD *)(a2 + 880);
  a3[1] = *(_OWORD *)(a2 + 896);
  a3[2] = *(_OWORD *)(a2 + 912);
  a3[3] = *(_OWORD *)(a2 + 928);
  if ( v8 )
    PspUnlockJobConditionally(a2, &v22);
  PspUnlockJob(v9, a1);
  if ( v7 )
  {
    ZwDeleteWnfStateName(&StateName);
  }
  else if ( !v8 )
  {
    PspDispatchWakeNotification((PVOID)a2);
  }
  return 0LL;
}
