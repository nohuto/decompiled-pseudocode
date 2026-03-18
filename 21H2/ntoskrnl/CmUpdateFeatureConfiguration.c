/*
 * XREFs of CmUpdateFeatureConfiguration @ 0x1409113B4
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140922DB4 (CmFcManagerUpdateFeatureConfigurations.c)
 */

__int64 __fastcall CmUpdateFeatureConfiguration(void *Src, size_t Size, KPROCESSOR_MODE AccessMode)
{
  SIZE_T v4; // rsi
  struct _PRIVILEGE_SET *v6; // rdi
  BOOLEAN v7; // bl
  __int64 v8; // rcx
  unsigned int updated; // ebx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  unsigned __int64 v11; // rax
  int v12; // ecx
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
         1u,
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
    goto LABEL_13;
  }
  if ( (unsigned int)v4 < 0x10 )
    goto LABEL_4;
  TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v8, v4, 0x63466D43u);
  v6 = TransientPoolWithQuotaTag;
  v15 = TransientPoolWithQuotaTag;
  if ( TransientPoolWithQuotaTag )
  {
    memmove(TransientPoolWithQuotaTag, Src, v4);
    v11 = 32LL * (unsigned int)v6->Privilege[0].Luid.HighPart;
    if ( v11 > 0xFFFFFFFF )
      goto LABEL_12;
    v12 = v11 + 16;
    if ( (int)v11 + 16 < (unsigned int)v11 )
      goto LABEL_12;
    if ( v12 != (_DWORD)v4 )
    {
LABEL_4:
      updated = -1073741820;
      goto LABEL_13;
    }
    if ( v6->Privilege[0].Luid.LowPart == 1 )
      updated = CmFcManagerUpdateFeatureConfigurations(
                  v12,
                  *(_QWORD *)&v6->PrivilegeCount,
                  1,
                  (int)v6 + 16,
                  v6->Privilege[0].Luid.HighPart);
    else
LABEL_12:
      updated = -1073741811;
  }
  else
  {
    updated = -1073741670;
  }
LABEL_13:
  if ( v6 )
    CmSiFreeMemory(v6);
  return updated;
}
