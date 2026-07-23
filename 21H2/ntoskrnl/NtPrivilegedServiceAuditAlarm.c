/*
 * XREFs of NtPrivilegedServiceAuditAlarm @ 0x140616B80
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x1406934F8 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x1406936AC (SeCheckAuditPrivilege.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140693918 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall NtPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // rdx
  int v11; // edi
  struct _DMA_ADAPTER *v12; // r14
  ULONG PrivilegeCount; // edi
  SIZE_T v14; // rdx
  char *v15; // rcx
  ULONG *PoolWithTag; // rax
  ULONG *v17; // rsi
  PVOID v18; // rdi
  PVOID v19; // r15
  NTSTATUS v21; // ebx
  __int64 v22; // rcx
  int v23; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  ULONG *v25; // [rsp+50h] [rbp-58h]
  PVOID v26; // [rsp+58h] [rbp-50h] BYREF
  PVOID P; // [rsp+60h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-40h] BYREF
  ULONG v29; // [rsp+88h] [rbp-20h]
  int v30; // [rsp+8Ch] [rbp-1Ch]

  v25 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  v26 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v10) = PreviousMode;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v10) )
  {
    v21 = -1073741727;
LABEL_36:
    SeReleaseSubjectContext(&SubjectContext);
    return v21;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  v23 = v11;
  if ( v11 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 == -1073741816 )
      return v11;
    v22 = (unsigned int)v11;
LABEL_33:
    SepAuditFailed(v22);
    return v11;
  }
  v12 = (struct _DMA_ADAPTER *)Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    v21 = -1073741659;
    goto LABEL_36;
  }
  if ( SubsystemName && (v11 = SepProbeAndCaptureString_U(SubsystemName, &P), v23 = v11, v11 < 0)
    || ServiceName && (v11 = SepProbeAndCaptureString_U(ServiceName, &v26), v23 = v11, v11 < 0) )
  {
    v17 = v25;
  }
  else
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v29 = PrivilegeCount;
    if ( PrivilegeCount >= 0x43 )
    {
      v11 = -1073741811;
      v17 = v25;
    }
    else
    {
      v14 = 12 * PrivilegeCount + 8;
      v30 = 12 * PrivilegeCount + 8;
      if ( 12 * PrivilegeCount != -8 )
      {
        v15 = (char *)Privileges + (unsigned int)v14;
        if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v14, 0x72506553u);
      v17 = PoolWithTag;
      v25 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Privileges, 12 * PrivilegeCount + 8);
        *v17 = PrivilegeCount;
        v11 = v23;
      }
      else
      {
        v11 = -1073741670;
      }
    }
    v12 = (struct _DMA_ADAPTER *)Object;
  }
  if ( v11 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    SeReleaseSubjectContext(&SubjectContext);
    HalPutDmaAdapter(v12);
    if ( v11 != -1073741670 )
      return v11;
    v22 = 3221225626LL;
    goto LABEL_33;
  }
  v18 = v26;
  v19 = P;
  SepAdtPrivilegedServiceAuditAlarm(
    (unsigned int)&SubjectContext,
    (_DWORD)P,
    (_DWORD)v26,
    (_DWORD)v12,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)v17,
    AccessGranted);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  HalPutDmaAdapter(v12);
  SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
