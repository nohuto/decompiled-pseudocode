/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x140606BE0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x140650980 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140651570 (SeReleaseSecurityDescriptor.c)
 *     SepProbeAndCaptureString_U @ 0x1406934F8 (SepProbeAndCaptureString_U.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140693624 (SepAdtAuditObjectAccessWithContext.c)
 *     SeCheckAuditPrivilege @ 0x1406936AC (SeCheckAuditPrivilege.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140693A3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F5F8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x140921580 (SeExamineSacl.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall NtOpenObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK GrantedAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN ObjectCreation,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateOnClose)
{
  PUNICODE_STRING v12; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v15; // rdx
  int v16; // edx
  int v17; // edi
  struct _DMA_ADAPTER *v18; // rdi
  __int64 v19; // rdx
  NTSTATUS v20; // esi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  ULONG PrivilegeCount; // r14d
  unsigned int v25; // ecx
  char *v26; // rdx
  ULONG *PoolWithTag; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  ULONG *v30; // r12
  PVOID v32; // r14
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // r9
  PVOID v36; // rdi
  BOOLEAN v37; // r13
  NTSTATUS v38; // ebx
  __int64 v39; // rcx
  __int16 v40; // ax
  __int64 v41; // rdx
  ACL *v42; // rdx
  __int64 v43; // rax
  ACL *v44; // rcx
  int HandleInformation; // [rsp+28h] [rbp-130h]
  BOOLEAN GenerateAudit; // [rsp+A1h] [rbp-B7h] BYREF
  BOOLEAN GenerateAlarm; // [rsp+A2h] [rbp-B6h] BYREF
  KPROCESSOR_MODE v48; // [rsp+A3h] [rbp-B5h]
  KPROCESSOR_MODE v49; // [rsp+A4h] [rbp-B4h]
  int v50; // [rsp+A8h] [rbp-B0h]
  unsigned __int16 v51; // [rsp+ACh] [rbp-ACh] BYREF
  PVOID v52; // [rsp+B0h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID v54; // [rsp+C0h] [rbp-98h] BYREF
  PVOID P; // [rsp+C8h] [rbp-90h] BYREF
  PVOID v56; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v57; // [rsp+D8h] [rbp-80h]
  __int64 v58; // [rsp+E0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-70h] BYREF
  ULONG v60; // [rsp+108h] [rbp-50h]
  unsigned int v61; // [rsp+10Ch] [rbp-4Ch]
  size_t Size; // [rsp+110h] [rbp-48h]

  v12 = ObjectTypeName;
  P = 0LL;
  v54 = 0LL;
  v56 = 0LL;
  v52 = 0LL;
  v57 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenerateAudit = 0;
  GenerateAlarm = 0;
  v58 = 0LL;
  v51 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v48 = PreviousMode;
  v49 = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v15) = PreviousMode;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v15) )
  {
    v38 = -1073741727;
LABEL_54:
    SeReleaseSubjectContext(&SubjectContext);
    return v38;
  }
  Token = 0LL;
  v17 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v17 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v17 != -1073741816 )
    {
      v39 = (unsigned int)v17;
LABEL_50:
      SepAuditFailed(v39);
    }
    return v17;
  }
  v18 = (struct _DMA_ADAPTER *)Token;
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)Token);
    v38 = -1073741659;
    goto LABEL_54;
  }
  if ( !SecurityDescriptor )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)Token);
    v38 = -1073741703;
    goto LABEL_54;
  }
  LOBYTE(v16) = PreviousMode;
  v20 = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, v16, 1, 0, (__int64)&v52);
  v50 = v20;
  if ( v20 >= 0 && v52 )
  {
    if ( AccessGranted && Privileges )
    {
      if ( ((unsigned __int8)Privileges & 3) != 0 )
        goto LABEL_29;
      v23 = 0x7FFFFFFF0000LL;
      PrivilegeCount = Privileges->PrivilegeCount;
      v60 = PrivilegeCount;
      if ( PrivilegeCount >= 0x43 )
      {
        v17 = -1073741811;
        v50 = -1073741811;
        goto LABEL_30;
      }
      v25 = 12 * PrivilegeCount + 8;
      v61 = v25;
      if ( 12 * PrivilegeCount != -8 )
      {
        v26 = (char *)Privileges + v25;
        if ( (unsigned __int64)v26 > 0x7FFFFFFF0000LL || v26 < (char *)Privileges )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Size = v25;
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v25, 0x72506553u);
      v30 = PoolWithTag;
      v57 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LOBYTE(v28) = v48;
        SeReleaseSecurityDescriptor(v52, v28, 0LL, v29);
        HalPutDmaAdapter((PADAPTER_OBJECT)Token);
        SeReleaseSubjectContext(&SubjectContext);
        v50 = -1073741670;
        SepAuditFailed(3221225626LL);
        return -1073741670;
      }
      memmove(PoolWithTag, Privileges, Size);
      *v30 = PrivilegeCount;
      PreviousMode = v48;
      v12 = ObjectTypeName;
    }
    else
    {
      v23 = 0x7FFFFFFF0000LL;
    }
    if ( !HandleId )
    {
LABEL_20:
      if ( (unsigned __int64)GenerateOnClose < 0x7FFFFFFF0000LL )
        v23 = (__int64)GenerateOnClose;
      *(_BYTE *)v23 = *(_BYTE *)v23;
      v17 = SepProbeAndCaptureString_U(SubsystemName, &P);
      v50 = v17;
      if ( v17 >= 0 )
      {
        v17 = SepProbeAndCaptureString_U(v12, &v54);
        v50 = v17;
        if ( v17 >= 0 )
        {
          v17 = SepProbeAndCaptureString_U(ObjectName, &v56);
          v50 = v17;
        }
      }
LABEL_30:
      if ( v17 >= 0 )
      {
        LOBYTE(v22) = AccessGranted == 0;
        LOBYTE(HandleInformation) = 0;
        LOBYTE(v21) = AccessGranted;
        v32 = v54;
        v33 = SepAdtAuditObjectAccessWithContext(0LL, v54, v21, v22, &SubjectContext, HandleInformation, &v51);
        v36 = v52;
        if ( !v33 )
          goto LABEL_32;
        v40 = *((_WORD *)v52 + 1);
        if ( (v40 & 0x10) == 0 )
          goto LABEL_69;
        if ( v40 >= 0 )
        {
          v42 = (ACL *)*((_QWORD *)v52 + 3);
          goto LABEL_71;
        }
        v41 = *((unsigned int *)v52 + 3);
        if ( (_DWORD)v41 )
          v42 = (ACL *)((char *)v52 + v41);
        else
LABEL_69:
          v42 = 0LL;
LABEL_71:
        if ( (v40 & 0x10) == 0 )
          goto LABEL_75;
        if ( v40 >= 0 )
        {
          v44 = (ACL *)*((_QWORD *)v52 + 3);
          goto LABEL_77;
        }
        v43 = *((unsigned int *)v52 + 3);
        if ( (_DWORD)v43 )
          v44 = (ACL *)((char *)v52 + v43);
        else
LABEL_75:
          v44 = 0LL;
LABEL_77:
        SeExamineSacl(v44, v42, Token, GrantedAccess | DesiredAccess, AccessGranted, &GenerateAudit, &GenerateAlarm);
        if ( GenerateAudit || GenerateAlarm )
        {
          v36 = v52;
          v32 = v54;
          v37 = SepAdtOpenObjectAuditAlarm(
                  v51,
                  (int)P,
                  (unsigned __int64)&v58 & -(__int64)(HandleId != 0LL),
                  (int)v54,
                  (__int64)v56,
                  v52,
                  (__int64)Token,
                  (__int64)SubjectContext.PrimaryToken,
                  DesiredAccess,
                  GrantedAccess,
                  (__int64)v57,
                  AccessGranted,
                  (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                  2,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0LL);
LABEL_33:
          if ( !GenerateAudit && !GenerateAlarm && Privileges && AccessGranted )
          {
            v32 = v54;
            SepAdtPrivilegeObjectAuditAlarm(
              (_DWORD)P,
              (_DWORD)v54,
              (_DWORD)v56,
              v58,
              (__int64)Token,
              (__int64)SubjectContext.PrimaryToken,
              (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
              DesiredAccess,
              (__int64)v57,
              AccessGranted);
            v37 = 0;
            v36 = v52;
          }
          LOBYTE(v34) = PreviousMode;
          SeReleaseSecurityDescriptor(v36, v34, 0LL, v35);
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v32 )
            ExFreePoolWithTag(v32, 0);
          if ( v56 )
            ExFreePoolWithTag(v56, 0);
          if ( v57 )
            ExFreePoolWithTag(v57, 0);
          HalPutDmaAdapter((PADAPTER_OBJECT)Token);
          SeReleaseSubjectContext(&SubjectContext);
          *GenerateOnClose = v37;
          return 0;
        }
LABEL_32:
        v37 = 0;
        goto LABEL_33;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v54 )
        ExFreePoolWithTag(v54, 0);
      if ( v56 )
        ExFreePoolWithTag(v56, 0);
      if ( v57 )
        ExFreePoolWithTag(v57, 0);
      LOBYTE(v19) = PreviousMode;
      SeReleaseSecurityDescriptor(v52, v19, 0LL, v22);
      HalPutDmaAdapter((PADAPTER_OBJECT)Token);
      SeReleaseSubjectContext(&SubjectContext);
      if ( v17 == -1073741670 )
      {
        v39 = 3221225626LL;
        goto LABEL_50;
      }
      return v17;
    }
    if ( ((unsigned __int8)HandleId & 7) == 0 )
    {
      v58 = *(_QWORD *)HandleId;
      goto LABEL_20;
    }
LABEL_29:
    ExRaiseDatatypeMisalignment();
  }
  HalPutDmaAdapter(v18);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v20 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v20;
}
