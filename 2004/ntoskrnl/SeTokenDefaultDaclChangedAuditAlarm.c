/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x14070A1F8
 * Callers:
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 * Callees:
 *     SeReleaseSecurityDescriptor @ 0x140628670 (SeReleaseSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x14065E650 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x14066A940 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x14067DCA0 (SeCaptureSecurityDescriptor.c)
 *     SepAdtAuditThisEventWithContext @ 0x14068D710 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091CB1C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x14091D2C4 (SepQueryTypeString.c)
 *     SepAuditFailed @ 0x1409220D0 (SepAuditFailed.c)
 *     SepIsAclEqual @ 0x1409228B0 (SepIsAclEqual.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, ACL *a4, PACL Dacl)
{
  PVOID v5; // rsi
  void *v6; // rdi
  void *v7; // r14
  int v10; // r15d
  _QWORD **PrimaryToken; // r13
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  void *v16; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-11h]
  _OWORD v20[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+17h]
  void *v22; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v23; // [rsp+128h] [rbp+6Fh]

  v23 = a3;
  v5 = 0LL;
  v19 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v22 = 0LL;
  v16 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v10 = 0;
  memset(v20, 0, sizeof(v20));
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(141LL, 1u, 0, &SubjectContext)
      || (unsigned __int8)SepIsAclEqual(a4, Dacl) )
    {
LABEL_5:
      SeReleaseSubjectContext(&SubjectContext);
      return;
    }
    if ( a2 )
    {
      v12 = SepQueryTypeString(a2, &P);
      v5 = P;
      v13 = v12;
      if ( v12 < 0 )
      {
LABEL_20:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        if ( v6 )
          SeReleaseSecurityDescriptor(v6, 0, 1);
        if ( v7 )
          SeReleaseSecurityDescriptor(v7, 0, 1);
        if ( v13 < 0 )
          SepAuditFailed((unsigned int)v13);
        goto LABEL_5;
      }
      if ( P )
        v10 = (int)P;
    }
    v13 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v13 >= 0 )
    {
      v13 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, a4, 0);
      if ( v13 >= 0 )
      {
        v13 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v22);
        if ( v13 < 0
          || (v13 = RtlCreateSecurityDescriptor(v20, 1u), v13 < 0)
          || (v13 = RtlSetDaclSecurityDescriptor(v20, 1u, Dacl, 0), v13 < 0) )
        {
          v6 = v22;
        }
        else
        {
          v14 = SeCaptureSecurityDescriptor((__int64)v20, 0, PagedPool, 1, &v16);
          v7 = v16;
          v13 = v14;
          v6 = v22;
          if ( v14 >= 0 )
            SepAdtSecurityDescriptorChangedAuditAlarm(
              (unsigned int)&SubjectContext,
              (unsigned int)&SeSubsystemName,
              v10,
              0,
              v23,
              *PrimaryToken[19],
              (__int64)v22,
              4,
              (__int64)v16);
        }
      }
    }
    goto LABEL_20;
  }
  SepAuditFailed(3221225596LL);
}
