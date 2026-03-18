/*
 * XREFs of NtDuplicateToken @ 0x1406496B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1402C118C (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContextEx @ 0x140602DE0 (SeCaptureSubjectContextEx.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140613AC0 (SepAppendAceToTokenObjectAcl.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x140649A20 (RtlIsSandboxedToken.c)
 *     SeCaptureSecurityQos @ 0x140649B64 (SeCaptureSecurityQos.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14064BCAC (SepNewTokenAsRestrictedAsProcessToken.c)
 */

NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  unsigned __int8 v9; // si
  PHANDLE v10; // r12
  TOKEN_TYPE v11; // r13d
  NTSTATUS result; // eax
  ACCESS_MASK GrantedAccess; // r15d
  struct _DMA_ADAPTER *v14; // rdi
  signed int v15; // ecx
  NTSTATUS inserted; // ebx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // [rsp+41h] [rbp-A7h] BYREF
  _BYTE v23[6]; // [rsp+42h] [rbp-A6h] BYREF
  PVOID Token; // [rsp+48h] [rbp-A0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-98h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-90h] BYREF
  __int64 v27; // [rsp+60h] [rbp-88h] BYREF
  __int64 v28; // [rsp+68h] [rbp-80h] BYREF
  int v29; // [rsp+70h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v31; // [rsp+98h] [rbp-50h] BYREF

  v28 = 0LL;
  v29 = 0;
  v22 = 0;
  v23[0] = 0;
  v27 = 0LL;
  HandleInformation = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  memset(&v31, 0, sizeof(v31));
  v9 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  if ( v9 )
  {
    v11 = TokenType;
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v10 = NewTokenHandle;
    v17 = (__int64)NewTokenHandle;
    if ( (unsigned __int64)NewTokenHandle >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  else
  {
    v10 = NewTokenHandle;
    v11 = TokenType;
  }
  result = SeCaptureSecurityQos(ObjectAttributes, v9, &v22, &v28);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent((__int64)ObjectAttributes, v9, v23);
    if ( result >= 0 )
    {
      Token = 0LL;
      result = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 v9,
                 &Token,
                 &HandleInformation);
      if ( result >= 0 )
      {
        if ( DesiredAccess )
        {
          SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
          v31.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v31) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            SepNewTokenAsRestrictedAsProcessToken(Token, SubjectContext.PrimaryToken);
            if ( Token == SubjectContext.PrimaryToken )
              GrantedAccess = DesiredAccess;
            else
              GrantedAccess = DesiredAccess & (HandleInformation.GrantedAccess | 0x2001F);
            ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
          }
          else
          {
            GrantedAccess = DesiredAccess;
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        else
        {
          GrantedAccess = HandleInformation.GrantedAccess;
        }
        v14 = (struct _DMA_ADAPTER *)Token;
        if ( v22 )
          v15 = HIDWORD(v28);
        else
          v15 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v11 == TokenImpersonation && v15 > *((_DWORD *)Token + 49)
           || v11 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)Token);
          return -1073741659;
        }
        else
        {
          DmaAdapter = 0LL;
          inserted = SepDuplicateToken(
                       (__int64)Token,
                       (int)ObjectAttributes,
                       EffectiveOnly,
                       v11,
                       v15,
                       v9,
                       0,
                       &DmaAdapter);
          if ( inserted >= 0 )
          {
            inserted = ObInsertObjectEx(DmaAdapter, 0LL, GrantedAccess, 1, 0, 0LL, &v27);
            if ( inserted >= 0 )
            {
              if ( !v23[0] )
                SepAppendAceToTokenObjectAcl((__int64)DmaAdapter, 8, SeAliasAdminsSid);
              HalPutDmaAdapter(DmaAdapter);
            }
          }
          HalPutDmaAdapter(v14);
          if ( inserted >= 0 )
            *v10 = (HANDLE)v27;
          return inserted;
        }
      }
    }
  }
  return result;
}
