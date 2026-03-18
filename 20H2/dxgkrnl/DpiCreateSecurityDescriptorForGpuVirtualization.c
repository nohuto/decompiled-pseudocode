/*
 * XREFs of DpiCreateSecurityDescriptorForGpuVirtualization @ 0x1C02C71FC
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C017DA5C (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 */

__int64 __fastcall DpiCreateSecurityDescriptorForGpuVirtualization(_QWORD *a1)
{
  void *v2; // rdi
  ULONG v3; // eax
  PVOID PoolWithTag; // rax
  void *v5; // r14
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  ULONG v11; // ebx
  ULONG v12; // ebx
  ULONG v13; // ebx
  struct _ACL *v14; // rax
  struct _ACL *v15; // rsi
  NTSTATUS Acl; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  ULONG v27; // eax
  PVOID v28; // rax
  NTSTATUS v29; // eax
  size_t Size; // [rsp+20h] [rbp-40h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v33; // [rsp+48h] [rbp-18h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+50h] [rbp-10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  LODWORD(Size) = 0;
  v33 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v2 = 0LL;
  v3 = RtlLengthRequiredSid(2u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x74727044u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 2u);
    v6 = v7;
    if ( v7 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v10 + 24) = v6;
      WdLogEvent5_WdError(v10);
LABEL_24:
      ExFreePoolWithTag(v5, 0);
      return (unsigned int)v6;
    }
    *RtlSubAuthoritySid(v5, 0) = 83;
    *RtlSubAuthoritySid(v5, 1u) = 0;
    v11 = RtlLengthSid(SeExports->SeLocalSystemSid) + 8;
    v12 = RtlLengthSid(SeExports->SeAliasAdminsSid) + v11;
    v13 = RtlLengthSid(v5) + 24 + v12;
    v14 = (struct _ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x74727044u);
    v15 = v14;
    if ( !v14 )
    {
      LODWORD(v6) = -1073741670;
      goto LABEL_24;
    }
    Acl = RtlCreateAcl(v14, v13, 2u);
    v6 = Acl;
    if ( Acl < 0 )
      goto LABEL_8;
    v20 = RtlAddAccessAllowedAce(v15, 2u, 0x1F01FFu, SeExports->SeLocalSystemSid);
    v6 = v20;
    if ( v20 < 0 )
      goto LABEL_8;
    v21 = RtlAddAccessAllowedAce(v15, 2u, 0x1F01FFu, SeExports->SeAliasAdminsSid);
    v6 = v21;
    if ( v21 < 0 )
      goto LABEL_8;
    v22 = RtlAddAccessAllowedAce(v15, 2u, 0x1F01FFu, v5);
    v6 = v22;
    if ( v22 < 0 )
      goto LABEL_8;
    v23 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v6 = v23;
    if ( v23 < 0 )
      goto LABEL_8;
    v24 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0);
    v6 = v24;
    if ( v24 < 0 )
      goto LABEL_8;
    v25 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
    v6 = v25;
    if ( v25 < 0 )
      goto LABEL_8;
    v26 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
    v6 = v26;
    if ( v26 < 0 )
      goto LABEL_8;
    v27 = RtlLengthSecurityDescriptor(SecurityDescriptor);
    LODWORD(Size) = v27;
    if ( v27 < 0x28 )
    {
      v6 = -1073741595LL;
LABEL_8:
      v19 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v19 + 24) = v6;
      WdLogEvent5_WdError(v19);
      goto LABEL_22;
    }
    v28 = ExAllocatePoolWithTag(PagedPool, v27, 0x74727044u);
    v2 = v28;
    if ( v28 )
    {
      memset(v28, 0, (unsigned int)Size);
      v29 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v2, (PULONG)&Size);
      v6 = v29;
      if ( v29 < 0 )
        goto LABEL_8;
      *a1 = v2;
      v2 = 0LL;
      LODWORD(v6) = 0;
    }
    else
    {
      LODWORD(v6) = -1073741670;
    }
LABEL_22:
    ExFreePoolWithTag(v15, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    goto LABEL_24;
  }
  LODWORD(v6) = -1073741670;
  return (unsigned int)v6;
}
