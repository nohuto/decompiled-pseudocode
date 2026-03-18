/*
 * XREFs of NtDuplicateToken @ 0x1405E7D20
 * Callers:
 *     <none>
 * Callees:
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x140205DFC (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10 (Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled.c)
 *     SepFinalizeTokenAcls @ 0x1405CDDB0 (SepFinalizeTokenAcls.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1405E52E0 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     RtlIsSandboxedToken @ 0x1405E80A0 (RtlIsSandboxedToken.c)
 *     SeCaptureSecurityQos @ 0x1405E81E4 (SeCaptureSecurityQos.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405F56A0 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContextEx @ 0x140602A50 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  PERESOURCE *PrimaryToken; // r13
  unsigned __int8 v9; // r15
  TOKEN_TYPE v10; // esi
  __int64 v11; // rcx
  PHANDLE v12; // r12
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v15; // rbx
  int v16; // eax
  NTSTATUS inserted; // esi
  char v18; // [rsp+40h] [rbp-A8h] BYREF
  char v19; // [rsp+41h] [rbp-A7h] BYREF
  _BYTE v20[6]; // [rsp+42h] [rbp-A6h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-A0h] BYREF
  PVOID Token; // [rsp+50h] [rbp-98h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-90h] BYREF
  __int64 v24; // [rsp+60h] [rbp-88h] BYREF
  __int64 v25; // [rsp+68h] [rbp-80h] BYREF
  int v26; // [rsp+70h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v28; // [rsp+98h] [rbp-50h] BYREF
  int v29; // [rsp+100h] [rbp+18h]

  v29 = (int)ObjectAttributes;
  PrimaryToken = (PERESOURCE *)ObjectAttributes;
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
    v10 = TokenType;
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v11 = 0x7FFFFFFF0000LL;
    v12 = NewTokenHandle;
    if ( (unsigned __int64)NewTokenHandle < 0x7FFFFFFF0000LL )
      v11 = (__int64)NewTokenHandle;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  else
  {
    v12 = NewTokenHandle;
    v10 = TokenType;
  }
  result = SeCaptureSecurityQos(ObjectAttributes, v9, &v19, &v25);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent((__int64)PrimaryToken, v9, v20);
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
            PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
            SepNewTokenAsRestrictedAsProcessToken(Token, (_DWORD *)SubjectContext.PrimaryToken, &v18);
            ExReleaseResourceLite(PrimaryToken[6]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            LODWORD(PrimaryToken) = v29;
            SeReleaseSubjectContext(&SubjectContext);
          }
          else
          {
            SeReleaseSubjectContext(&SubjectContext);
          }
        }
        v15 = (struct _DMA_ADAPTER *)Token;
        if ( v19 )
          v16 = HIDWORD(v25);
        else
          v16 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v10 == TokenImpersonation && v16 > *((_DWORD *)Token + 49)
           || v10 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)Token);
          return -1073741659;
        }
        else
        {
          DmaAdapter = 0LL;
          inserted = SepDuplicateToken(
                       (_DWORD)Token,
                       (_DWORD)PrimaryToken,
                       EffectiveOnly,
                       v10,
                       v16,
                       v9,
                       0,
                       (__int64)&DmaAdapter);
          if ( inserted >= 0 )
          {
            inserted = ObInsertObjectEx(DmaAdapter, 0, 0LL, (__int64)&v24);
            if ( inserted >= 0 )
            {
              if ( !v20[0] )
              {
                if ( (unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
                  SepFinalizeTokenAcls(DmaAdapter);
                else
                  SepAppendAceToTokenObjectAcl(DmaAdapter, 8LL, SeAliasAdminsSid);
              }
              HalPutDmaAdapter(DmaAdapter);
            }
          }
          HalPutDmaAdapter(v15);
          if ( inserted >= 0 )
            *v12 = (HANDLE)v24;
          return inserted;
        }
      }
    }
  }
  return result;
}
