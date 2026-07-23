/*
 * XREFs of PopCreateHiberFileSecurityDescriptor @ 0x14077D1E8
 * Callers:
 *     PopCreateHiberFile @ 0x14077BCF0 (PopCreateHiberFile.c)
 *     PopDeleteHiberFile @ 0x1408E262C (PopDeleteHiberFile.c)
 * Callees:
 *     RtlGetAce @ 0x14025B420 (RtlGetAce.c)
 *     RtlSubAuthoritySid @ 0x14035C480 (RtlSubAuthoritySid.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x14067E0B0 (RtlInitializeSid.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

ACL *PopCreateHiberFileSecurityDescriptor()
{
  ACL *v0; // rbx
  ACL *v1; // rdi
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *Src; // rsi
  __int64 v4; // rbp
  ACL *v5; // rax
  ACL *v6; // rax
  NTSTATUS SecurityDescriptor; // eax
  ACL *v8; // rcx
  _BYTE *IdentifierAuthority; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0LL;
  WORD2(IdentifierAuthority) = 256;
  LODWORD(IdentifierAuthority) = 0;
  v1 = 0LL;
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x72626968u);
  Src = PoolWithTag;
  if ( !PoolWithTag )
    return v0;
  if ( RtlInitializeSid(PoolWithTag, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Src, 0) = 0;
    v4 = 4 * (unsigned int)Src[1] + 24;
    if ( (unsigned int)v4 >= 4 * (unsigned int)Src[1] + 16 )
    {
      v5 = (ACL *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v4, 0x72626968u);
      v1 = v5;
      if ( v5 )
      {
        if ( RtlCreateAcl(v5, v4, 2u) >= 0 && (int)RtlpAddKnownAce(v1, 2u, 0, 0x10000, Src, 0) >= 0 )
        {
          IdentifierAuthority = 0LL;
          RtlGetAce(v1, 0, (PVOID *)&IdentifierAuthority);
          IdentifierAuthority[1] |= 2u;
          v6 = (ACL *)ExAllocatePoolWithTag(PagedPool, v4 + 40, 0x72626968u);
          v0 = v6;
          if ( v6 )
          {
            memmove(&v6[5], v1, (unsigned int)v4);
            SecurityDescriptor = RtlCreateSecurityDescriptor(v0, 1u);
            v8 = v0;
            if ( SecurityDescriptor >= 0 )
            {
              if ( RtlSetDaclSecurityDescriptor(v0, 1u, v0 + 5, 0) >= 0 )
                goto LABEL_10;
              v8 = v0;
            }
            ExFreePoolWithTag(v8, 0);
          }
        }
      }
    }
  }
LABEL_10:
  ExFreePoolWithTag(Src, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v0;
}
