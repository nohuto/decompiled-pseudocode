/*
 * XREFs of CmUpdateFeatureUsageSubscription @ 0x140911544
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14092317C (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 */

__int64 __fastcall CmUpdateFeatureUsageSubscription(void *Src, size_t Size, KPROCESSOR_MODE AccessMode)
{
  SIZE_T v4; // rsi
  struct _PRIVILEGE_SET *v6; // rdi
  BOOLEAN v7; // bl
  __int64 v8; // rcx
  unsigned int updated; // ebx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  __int64 PrivilegeCount; // rcx
  unsigned int v12; // eax
  ACCESS_MASK GrantedAccess[3]; // [rsp+54h] [rbp-44h] BYREF
  struct _PRIVILEGE_SET *v15; // [rsp+60h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+68h] [rbp-30h] BYREF
  NTSTATUS AccessStatus; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (unsigned int)Size;
  AccessStatus = 0;
  GrantedAccess[0] = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v6 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  v7 = SeAccessCheck(
         CmFcFeatureConfigSecurityDescriptor,
         &SubjectSecurityContext,
         0,
         2u,
         0,
         0LL,
         &CmFcFeatureConfigMapping,
         AccessMode,
         GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectSecurityContext);
  if ( !v7 )
  {
    updated = AccessStatus;
    goto LABEL_12;
  }
  if ( (unsigned int)v4 < 4 )
    goto LABEL_4;
  TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v8, v4, 0x63466D43u);
  v6 = TransientPoolWithQuotaTag;
  v15 = TransientPoolWithQuotaTag;
  if ( TransientPoolWithQuotaTag )
  {
    memmove(TransientPoolWithQuotaTag, Src, v4);
    PrivilegeCount = v6->PrivilegeCount;
    v12 = 20 * PrivilegeCount;
    if ( (unsigned __int64)(20 * PrivilegeCount) > 0xFFFFFFFF || v12 + 4 < v12 )
    {
      updated = -1073741811;
    }
    else
    {
      if ( v12 + 4 != (_DWORD)v4 )
      {
LABEL_4:
        updated = -1073741820;
        goto LABEL_12;
      }
      updated = CmFcManagerUpdateFeatureUsageSubscriptions(PrivilegeCount, &v6->Control, (unsigned int)PrivilegeCount);
    }
  }
  else
  {
    updated = -1073741670;
  }
LABEL_12:
  if ( v6 )
    CmSiFreeMemory(v6);
  return updated;
}
