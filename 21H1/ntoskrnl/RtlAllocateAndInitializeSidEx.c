/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x14090EC2C
 * Callers:
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14093684C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSidEx(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        PULONG SubAuthorities,
        PSID *Sid)
{
  char *PoolWithQuotaTag; // rax
  __int64 v9; // rcx
  signed __int64 v10; // r8

  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x10uLL, 0x62507452u);
  if ( !PoolWithQuotaTag )
    return -1073741801;
  *PoolWithQuotaTag = 1;
  v9 = 2LL;
  *(_DWORD *)(PoolWithQuotaTag + 2) = *(_DWORD *)IdentifierAuthority->Value;
  v10 = PoolWithQuotaTag - (char *)SubAuthorities;
  *((_WORD *)PoolWithQuotaTag + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
  PoolWithQuotaTag[1] = 2;
  do
  {
    *(PULONG)((char *)SubAuthorities + v10 + 8) = *SubAuthorities;
    ++SubAuthorities;
    --v9;
  }
  while ( v9 );
  *Sid = PoolWithQuotaTag;
  return 0;
}
