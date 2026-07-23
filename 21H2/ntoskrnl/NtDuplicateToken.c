/*
 * XREFs of NtDuplicateToken @ 0x14071C530
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14036138C (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     SepFinalizeTokenAcls @ 0x1405D00A0 (SepFinalizeTokenAcls.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14064CA80 (SeCaptureSubjectContextEx.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406C5C0C (SepNewTokenAsRestrictedAsProcessToken.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     RtlIsSandboxedToken @ 0x14071C8A0 (RtlIsSandboxedToken.c)
 *     SeCaptureSecurityQos @ 0x14071C9E4 (SeCaptureSecurityQos.c)
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
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // [rsp+40h] [rbp-A8h] BYREF
  char v24; // [rsp+41h] [rbp-A7h] BYREF
  _BYTE v25[6]; // [rsp+42h] [rbp-A6h] BYREF
  PVOID Token; // [rsp+48h] [rbp-A0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-98h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-90h] BYREF
  __int64 v29; // [rsp+60h] [rbp-88h] BYREF
  __int64 v30; // [rsp+68h] [rbp-80h] BYREF
  int v31; // [rsp+70h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v33; // [rsp+98h] [rbp-50h] BYREF

  v30 = 0LL;
  v31 = 0;
  v24 = 0;
  v25[0] = 0;
  v29 = 0LL;
  HandleInformation = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v23 = 0;
  memset(&v33, 0, sizeof(v33));
  v9 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
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
  result = SeCaptureSecurityQos(ObjectAttributes, v9, &v24, &v30);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent((__int64)ObjectAttributes, v9, v25);
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
          v33.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v33) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            v19 = SepNewTokenAsRestrictedAsProcessToken(Token, (_DWORD *)SubjectContext.PrimaryToken, &v23);
            if ( Token == SubjectContext.PrimaryToken || v19 >= 0 && v23 )
              GrantedAccess = DesiredAccess;
            else
              GrantedAccess = DesiredAccess & (HandleInformation.GrantedAccess | 0x2001F);
            ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
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
        if ( v24 )
          v15 = HIDWORD(v30);
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
            inserted = ObInsertObjectEx((char *)DmaAdapter, 0LL, GrantedAccess, 1, 0, 0LL, (unsigned __int64 *)&v29);
            if ( inserted >= 0 )
            {
              if ( !v25[0] )
                SepFinalizeTokenAcls(DmaAdapter);
              HalPutDmaAdapter(DmaAdapter);
            }
          }
          HalPutDmaAdapter(v14);
          if ( inserted >= 0 )
            *v10 = (HANDLE)v29;
          return inserted;
        }
      }
    }
  }
  return result;
}
