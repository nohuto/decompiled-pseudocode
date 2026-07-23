/*
 * XREFs of RtlGetAppContainerParent @ 0x1409104D0
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x140911278 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlSubAuthoritySid @ 0x1402FE9C0 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1406BAF40 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x1406F4200 (RtlInitializeSid.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  ULONG *PoolWithQuotaTag; // rax
  ULONG *v5; // rbx
  int v7; // edi
  unsigned __int8 v8; // di
  ULONG *v9; // r14
  PULONG v10; // rax
  int v11; // [rsp+48h] [rbp+10h] BYREF

  *AppContainerSidParent = 0LL;
  v11 = 0;
  if ( RtlGetAppContainerSidType(AppContainerSid, (PAPPCONTAINER_SID_TYPE)&v11) < 0 || v11 != 1 )
    return -1073741811;
  PoolWithQuotaTag = (ULONG *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x62507452u);
  v5 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  v7 = RtlInitializeSid(PoolWithQuotaTag, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
  if ( v7 < 0 )
  {
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v8 = 0;
    v9 = v5 + 2;
    do
    {
      v10 = RtlSubAuthoritySid(AppContainerSid, v8++);
      *v9++ = *v10;
    }
    while ( v8 < 8u );
    *AppContainerSidParent = v5;
    return 0;
  }
  return v7;
}
