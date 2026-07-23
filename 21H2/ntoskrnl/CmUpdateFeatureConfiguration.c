/*
 * XREFs of CmUpdateFeatureConfiguration @ 0x14086B490
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x1402AB090 (SeAccessCheck.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpAllocatePoolWithQuotaTag @ 0x1404ED050 (CmpAllocatePoolWithQuotaTag.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DE64 (CmFcManagerUpdateFeatureConfigurations.c)
 */

__int64 __fastcall CmUpdateFeatureConfiguration(void *Src, size_t Size, KPROCESSOR_MODE AccessMode)
{
  SIZE_T v4; // rsi
  struct _PRIVILEGE_SET *v6; // rdi
  BOOLEAN v7; // bl
  unsigned int updated; // ebx
  struct _PRIVILEGE_SET *PoolWithQuotaTag; // rax
  unsigned __int64 v10; // rax
  int v11; // ecx
  ACCESS_MASK GrantedAccess[3]; // [rsp+54h] [rbp-44h] BYREF
  struct _PRIVILEGE_SET *v14; // [rsp+60h] [rbp-38h]
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
  PoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocatePoolWithQuotaTag(1, v4, 0x63466D43u);
  v6 = PoolWithQuotaTag;
  v14 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    memmove(PoolWithQuotaTag, Src, v4);
    v10 = 32LL * (unsigned int)v6->Privilege[0].Luid.HighPart;
    if ( v10 > 0xFFFFFFFF )
      goto LABEL_12;
    v11 = v10 + 16;
    if ( (int)v10 + 16 < (unsigned int)v10 )
      goto LABEL_12;
    if ( v11 != (_DWORD)v4 )
    {
LABEL_4:
      updated = -1073741820;
      goto LABEL_13;
    }
    if ( v6->Privilege[0].Luid.LowPart == 1 )
      updated = CmFcManagerUpdateFeatureConfigurations(
                  v11,
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
