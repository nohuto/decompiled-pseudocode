/*
 * XREFs of PiAuGetServiceStateSecurityObject @ 0x1408A6750
 * Callers:
 *     IoOpenDriverRegistryKey @ 0x1407C0460 (IoOpenDriverRegistryKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407C0754 (PiCreateDriverRedirectedStateKey.c)
 * Callees:
 *     RtlLengthSid @ 0x140209E10 (RtlLengthSid.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlLengthSecurityDescriptor @ 0x1405F6330 (RtlLengthSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405F7240 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405F73E0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140606130 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406320E0 (RtlCreateSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1406B4DD0 (RtlValidSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1406FBFB0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406FC010 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140764E40 (RtlAbsoluteToSelfRelativeSD.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuGetServiceStateSecurityObject(_QWORD *a1)
{
  void *v2; // rdi
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ULONG v6; // ebx
  ACL *PoolWithTag; // rax
  ACL *v8; // rsi
  int Acl; // ebx
  PSID v10; // r14
  ULONG v11; // eax
  size_t v12; // rbx
  PVOID v13; // rax
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  ULONG BufferLength; // [rsp+98h] [rbp+38h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v16 = 0LL;
  v2 = 0LL;
  v3 = RtlLengthSid(SeExports->SeUserModeDriversSid);
  v4 = RtlLengthSid(SeAliasAdminsSid) + v3;
  v5 = RtlLengthSid(SeLocalSystemSid) + v4;
  v6 = RtlLengthSid(SeTrustedInstallerSid) + 40 + v5;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v6, 0x20207050u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v6, 2u);
    if ( Acl >= 0 )
    {
      v10 = SeTrustedInstallerSid;
      Acl = RtlpAddKnownAce(v8, 2u, 2, 0x10000000, (unsigned __int8 *)SeTrustedInstallerSid, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v8, 2u, 2, -2147287034, (unsigned __int8 *)SeLocalSystemSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v8, 2u, 2, 0x80000000, (unsigned __int8 *)SeAliasAdminsSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v8, 2u, 2, 0x80000000, (unsigned __int8 *)SeExports->SeUserModeDriversSid, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v10, 0);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v10, 0);
                    if ( Acl >= 0 )
                    {
                      if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                        && (v11 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v11, v11 >= 0x28) )
                      {
                        v12 = v11;
                        v13 = ExAllocatePoolWithTag(PagedPool, v11, 0x20207050u);
                        v2 = v13;
                        if ( v13 )
                        {
                          memset(v13, 0, v12);
                          Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v2, &BufferLength);
                          if ( Acl >= 0 )
                          {
                            *a1 = v2;
                            v2 = 0LL;
                          }
                        }
                        else
                        {
                          Acl = -1073741670;
                        }
                      }
                      else
                      {
                        Acl = -1073741595;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v8, 0);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
