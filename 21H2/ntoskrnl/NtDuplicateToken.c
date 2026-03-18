/*
 * XREFs of NtDuplicateToken @ 0x1407297A0
 * Callers:
 *     <none>
 * Callees:
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1402A4964 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     SepFinalizeTokenAcls @ 0x140659D50 (SepFinalizeTokenAcls.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140695E18 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SeCaptureSecurityQos @ 0x140729B40 (SeCaptureSecurityQos.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 */

NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  unsigned __int8 PreviousMode; // di
  PHANDLE v10; // r12
  TOKEN_TYPE v11; // r13d
  NTSTATUS result; // eax
  PVOID v13; // rsi
  int v14; // ecx
  NTSTATUS inserted; // ebx
  __int64 v16; // rcx
  PACCESS_TOKEN ClientToken; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *PrimaryToken; // r15
  PVOID TokenInformation; // [rsp+40h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+48h] [rbp-A0h] BYREF
  PVOID v22; // [rsp+50h] [rbp-98h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-90h] BYREF
  __int64 v24; // [rsp+60h] [rbp-88h] BYREF
  __int64 v25; // [rsp+68h] [rbp-80h] BYREF
  int v26; // [rsp+70h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v28; // [rsp+98h] [rbp-50h] BYREF

  v25 = 0LL;
  v26 = 0;
  WORD1(TokenInformation) = 0;
  v24 = 0LL;
  HandleInformation = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  BYTE1(TokenInformation) = 0;
  v28.ClientToken = 0LL;
  *(_QWORD *)&v28.ImpersonationLevel = 0LL;
  v28.ProcessAuditId = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v11 = TokenType;
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v10 = NewTokenHandle;
    v16 = (__int64)NewTokenHandle;
    if ( (unsigned __int64)NewTokenHandle >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  else
  {
    v10 = NewTokenHandle;
    v11 = TokenType;
  }
  result = SeCaptureSecurityQos(ObjectAttributes, PreviousMode, (char *)&TokenInformation + 2, &v25);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent(
               (__int64)ObjectAttributes,
               PreviousMode,
               (_BYTE *)&TokenInformation + 3);
    if ( result >= 0 )
    {
      Token = 0LL;
      result = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &Token,
                 &HandleInformation);
      if ( result >= 0 )
      {
        if ( DesiredAccess )
        {
          SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
          v28.PrimaryToken = SubjectContext.PrimaryToken;
          LOBYTE(TokenInformation) = 0;
          if ( PreviousMode )
          {
            ClientToken = SubjectContext.ClientToken;
            if ( !SubjectContext.ClientToken )
              ClientToken = SubjectContext.PrimaryToken;
            if ( (SeQueryInformationToken(ClientToken, MaxTokenInfoClass, &TokenInformation) < 0
               || (_BYTE)TokenInformation)
              && (unsigned __int8)RtlIsSandboxedToken(&v28) )
            {
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              PrimaryToken = SubjectContext.PrimaryToken;
              ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
              SepNewTokenAsRestrictedAsProcessToken(Token, PrimaryToken, (_BYTE *)&TokenInformation + 1);
              ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            }
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        v13 = Token;
        if ( BYTE2(TokenInformation) )
          v14 = HIDWORD(v25);
        else
          v14 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v11 == TokenImpersonation && v14 > *((_DWORD *)Token + 49)
           || v11 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          ObfDereferenceObject(Token);
          return -1073741659;
        }
        else
        {
          v22 = 0LL;
          inserted = SepDuplicateToken(
                       (_DWORD)Token,
                       (_DWORD)ObjectAttributes,
                       EffectiveOnly,
                       v11,
                       v14,
                       PreviousMode,
                       0,
                       (__int64)&v22);
          if ( inserted >= 0 )
          {
            inserted = ObInsertObjectEx(v22, 0LL, 0, 0LL, (__int64)&v24);
            if ( inserted >= 0 )
            {
              if ( !BYTE3(TokenInformation) )
                SepFinalizeTokenAcls(v22);
              ObfDereferenceObject(v22);
            }
          }
          ObfDereferenceObject(v13);
          if ( inserted >= 0 )
            *v10 = (HANDLE)v24;
          return inserted;
        }
      }
    }
  }
  return result;
}
