/*
 * XREFs of NtDuplicateToken @ 0x14062BB00
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14026DF4C (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140626B50 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     RtlIsSandboxedToken @ 0x14062BE70 (RtlIsSandboxedToken.c)
 *     SeCaptureSecurityQos @ 0x14062BFB4 (SeCaptureSecurityQos.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140668DA0 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContextEx @ 0x14067AEC0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
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
  struct _DMA_ADAPTER *v13; // rdi
  int v14; // ecx
  NTSTATUS inserted; // ebx
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v18; // [rsp+40h] [rbp-A8h] BYREF
  char v19; // [rsp+41h] [rbp-A7h] BYREF
  _BYTE v20[6]; // [rsp+42h] [rbp-A6h] BYREF
  PVOID Token; // [rsp+48h] [rbp-A0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-98h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-90h] BYREF
  __int64 v24; // [rsp+60h] [rbp-88h] BYREF
  __int64 v25; // [rsp+68h] [rbp-80h] BYREF
  int v26; // [rsp+70h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v28; // [rsp+98h] [rbp-50h] BYREF

  v25 = 0LL;
  v26 = 0;
  v19 = 0;
  v20[0] = 0;
  v24 = 0LL;
  HandleInformation = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v18 = 0;
  memset(&v28, 0, sizeof(v28));
  v9 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  if ( v9 )
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
  result = SeCaptureSecurityQos(ObjectAttributes, v9, &v19, &v25);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent((__int64)ObjectAttributes, v9, v20);
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
          v28.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v28) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            SepNewTokenAsRestrictedAsProcessToken(Token, (_DWORD *)SubjectContext.PrimaryToken, &v18);
            ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        v13 = (struct _DMA_ADAPTER *)Token;
        if ( v19 )
          v14 = HIDWORD(v25);
        else
          v14 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v11 == TokenImpersonation && v14 > *((_DWORD *)Token + 49)
           || v11 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)Token);
          return -1073741659;
        }
        else
        {
          DmaAdapter = 0LL;
          inserted = SepDuplicateToken(
                       (_DWORD)Token,
                       (_DWORD)ObjectAttributes,
                       EffectiveOnly,
                       v11,
                       v14,
                       v9,
                       0,
                       (__int64)&DmaAdapter);
          if ( inserted >= 0 )
          {
            inserted = ObInsertObjectEx(DmaAdapter, 0LL, 0, 0LL, (__int64)&v24);
            if ( inserted >= 0 )
            {
              if ( !v20[0] )
                SepAppendAceToTokenObjectAcl(DmaAdapter, 8LL, SeAliasAdminsSid);
              HalPutDmaAdapter(DmaAdapter);
            }
          }
          HalPutDmaAdapter(v13);
          if ( inserted >= 0 )
            *v10 = (HANDLE)v24;
          return inserted;
        }
      }
    }
  }
  return result;
}
