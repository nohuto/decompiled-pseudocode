/*
 * XREFs of CheckCallerMatchesSid @ 0x1C02F00CC
 * Callers:
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02F0448 (DxgkPrepareCcdDatabaseForAccess.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@Z @ 0x1C0026ED8 (--$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMAT.c)
 */

__int64 __fastcall CheckCallerMatchesSid(PSID Sid)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  ULONG v7; // edi
  struct _ACL *PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _ACL *v11; // rbx
  __int64 v12; // rax
  NTSTATUS Acl; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int AccessStatus; // [rsp+58h] [rbp-29h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-25h] BYREF
  void (__stdcall *v24)(PSECURITY_SUBJECT_CONTEXT); // [rsp+60h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // [rsp+68h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+70h] [rbp-11h] BYREF
  __int64 v27; // [rsp+90h] [rbp+Fh]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp+17h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B8h] [rbp+37h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  v27 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v2 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v5 = v2;
  if ( v2 < 0 )
  {
    v6 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
    goto LABEL_18;
  }
  v7 = RtlLengthSid(Sid) + 20;
  PoolWithTag = (struct _ACL *)ExAllocatePoolWithTag(PagedPool, v7, 0x4B677844u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v7, 2u);
    v5 = Acl;
    if ( Acl >= 0 )
    {
      v16 = RtlAddAccessAllowedAce(v11, 2u, 0x1F0000u, Sid);
      v5 = v16;
      if ( v16 >= 0 )
      {
        v17 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v11, 0);
        v5 = v17;
        if ( v17 >= 0 )
        {
          if ( !RtlValidSecurityDescriptor(SecurityDescriptor) )
          {
            v20 = WdLogNewEntry5_WdAssertion(v19, v18);
            *(_QWORD *)(v20 + 24) = 2688LL;
            WdLogEvent5_WdAssertion(v20);
          }
          GrantedAccess = 0;
          AccessStatus = 0;
          GenericMapping.GenericAll = 2031616;
          GenericMapping.GenericRead = 0x20000;
          GenericMapping.GenericWrite = 0x20000;
          GenericMapping.GenericExecute = 0x20000;
          if ( SeAccessCheck(
                 SecurityDescriptor,
                 &SubjectContext,
                 0,
                 0x1F0000u,
                 0,
                 0LL,
                 &GenericMapping,
                 1,
                 &GrantedAccess,
                 &AccessStatus)
            || g_OSTestSigningEnabled )
          {
            LODWORD(v5) = 0;
          }
          else
          {
            LODWORD(v5) = AccessStatus;
          }
          goto LABEL_16;
        }
      }
    }
    v12 = WdLogNewEntry5_WdError(v15, v14);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    v5 = -1073741670LL;
  }
  *(_QWORD *)(v12 + 24) = v5;
  WdLogEvent5_WdError(v12);
LABEL_16:
  if ( v11 )
  {
    v24 = (void (__stdcall *)(PSECURITY_SUBJECT_CONTEXT))v11;
    p_SubjectContext = (struct _SECURITY_SUBJECT_CONTEXT *)wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag;
    wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
      (__int64 (__fastcall **)(_QWORD))&p_SubjectContext,
      &v24);
  }
LABEL_18:
  v24 = SeReleaseSubjectContext;
  p_SubjectContext = &SubjectContext;
  wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
    (__int64 (__fastcall **)(_QWORD))&v24,
    &p_SubjectContext);
  return (unsigned int)v5;
}
