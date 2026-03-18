/*
 * XREFs of NtPrivilegedServiceAuditAlarm @ 0x1406E27E0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SepProbeAndCaptureString_U @ 0x1405E2DC8 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x1405E2FB8 (SeCheckAuditPrivilege.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405E3150 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     SepAuditFailed @ 0x140920E20 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall NtPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  char PreviousMode; // di
  NTSTATUS v10; // edi
  struct _DMA_ADAPTER *v11; // r14
  ULONG PrivilegeCount; // edi
  SIZE_T v13; // rdx
  char *v14; // rcx
  ULONG *PoolWithTag; // rax
  ULONG *v16; // rsi
  PVOID v17; // rdi
  PVOID v18; // r15
  NTSTATUS v20; // ebx
  __int64 v21; // rcx
  NTSTATUS v22; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  ULONG *v24; // [rsp+50h] [rbp-58h]
  PVOID v25; // [rsp+58h] [rbp-50h] BYREF
  PVOID P; // [rsp+60h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-40h] BYREF
  ULONG v28; // [rsp+88h] [rbp-20h]
  int v29; // [rsp+8Ch] [rbp-1Ch]

  v24 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  v25 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    v20 = -1073741727;
LABEL_36:
    SeReleaseSubjectContext(&SubjectContext);
    return v20;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  v22 = v10;
  if ( v10 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v10 == -1073741816 )
      return v10;
    v21 = (unsigned int)v10;
LABEL_33:
    SepAuditFailed(v21);
    return v10;
  }
  v11 = (struct _DMA_ADAPTER *)Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    v20 = -1073741659;
    goto LABEL_36;
  }
  if ( SubsystemName
    && (v10 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P), v22 = v10, v10 < 0)
    || ServiceName
    && (v10 = SepProbeAndCaptureString_U((unsigned __int64)ServiceName, (__int64)&v25), v22 = v10, v10 < 0) )
  {
    v16 = v24;
  }
  else
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v28 = PrivilegeCount;
    if ( PrivilegeCount >= 0x43 )
    {
      v10 = -1073741811;
      v16 = v24;
    }
    else
    {
      v13 = 12 * PrivilegeCount + 8;
      v29 = 12 * PrivilegeCount + 8;
      if ( 12 * PrivilegeCount != -8 )
      {
        v14 = (char *)Privileges + (unsigned int)v13;
        if ( (unsigned __int64)v14 > 0x7FFFFFFF0000LL || v14 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v13, 0x72506553u);
      v16 = PoolWithTag;
      v24 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Privileges, 12 * PrivilegeCount + 8);
        *v16 = PrivilegeCount;
        v10 = v22;
      }
      else
      {
        v10 = -1073741670;
      }
    }
    v11 = (struct _DMA_ADAPTER *)Object;
  }
  if ( v10 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    SeReleaseSubjectContext(&SubjectContext);
    HalPutDmaAdapter(v11);
    if ( v10 != -1073741670 )
      return v10;
    v21 = 3221225626LL;
    goto LABEL_33;
  }
  v17 = v25;
  v18 = P;
  SepAdtPrivilegedServiceAuditAlarm(
    (int)&SubjectContext,
    (const int *)P,
    (unsigned __int16 *)v25,
    (__int64)v11,
    (__int64)SubjectContext.PrimaryToken,
    (int *)v16,
    AccessGranted);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  HalPutDmaAdapter(v11);
  SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
