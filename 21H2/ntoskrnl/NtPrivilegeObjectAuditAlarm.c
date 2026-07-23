/*
 * XREFs of NtPrivilegeObjectAuditAlarm @ 0x14078BBE0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x1406934F8 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x1406936AC (SeCheckAuditPrivilege.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140693A3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall NtPrivilegeObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  char PreviousMode; // bl
  NTSTATUS v11; // ebx
  struct _DMA_ADAPTER *v12; // rdi
  ULONG PrivilegeCount; // edi
  SIZE_T v14; // rdx
  char *v15; // rcx
  ULONG *PoolWithTag; // rax
  ULONG *v17; // rsi
  PVOID v18; // rbx
  __int64 v20; // rcx
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  ULONG *v22; // [rsp+68h] [rbp-60h]
  PVOID P; // [rsp+70h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-50h] BYREF

  P = 0LL;
  v22 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    v11 = -1073741727;
LABEL_30:
    SeReleaseSubjectContext(&SubjectContext);
    return v11;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 == -1073741816 )
      return v11;
    v20 = (unsigned int)v11;
LABEL_28:
    SepAuditFailed(v20);
    return v11;
  }
  v12 = (struct _DMA_ADAPTER *)Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    v11 = -1073741659;
    goto LABEL_30;
  }
  v11 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
  if ( v11 < 0 )
  {
LABEL_16:
    v17 = v22;
    goto LABEL_19;
  }
  if ( ((unsigned __int8)Privileges & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  PrivilegeCount = Privileges->PrivilegeCount;
  if ( Privileges->PrivilegeCount >= 0x43 )
  {
    v11 = -1073741811;
    v12 = (struct _DMA_ADAPTER *)Object;
    goto LABEL_16;
  }
  v14 = 12 * PrivilegeCount + 8;
  if ( 12 * PrivilegeCount != -8 )
  {
    v15 = (char *)Privileges + (unsigned int)v14;
    if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < (char *)Privileges )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v14, 0x72506553u);
  v17 = PoolWithTag;
  v22 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, Privileges, 12 * PrivilegeCount + 8);
    *v17 = PrivilegeCount;
  }
  else
  {
    v11 = -1073741670;
  }
  v12 = (struct _DMA_ADAPTER *)Object;
LABEL_19:
  if ( v11 < 0 )
  {
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    SeReleaseSubjectContext(&SubjectContext);
    HalPutDmaAdapter(v12);
    if ( v11 != -1073741670 )
      return v11;
    v20 = 3221225626LL;
    goto LABEL_28;
  }
  v18 = P;
  SepAdtPrivilegeObjectAuditAlarm(
    (const int *)P,
    0LL,
    0LL,
    (unsigned __int64)HandleId,
    (__int64)v12,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)SubjectContext.ProcessAuditId,
    DesiredAccess,
    (int *)v17,
    AccessGranted);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  SeReleaseSubjectContext(&SubjectContext);
  HalPutDmaAdapter(v12);
  return 0;
}
