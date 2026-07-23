/*
 * XREFs of ObCreateKernelObjectsSD @ 0x1407830F8
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140782DDC (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x140782F90 (MiCreatePartitionNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x14025B480 (RtlLengthSid.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObCreateKernelObjectsSD(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int Acl; // ebx
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ACL *PoolWithTag; // rax
  ACL *v7; // rdi

  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v3 = RtlLengthSid(SeWorldSid);
    v4 = RtlLengthSid(SeAliasAdminsSid) + v3;
    v5 = RtlLengthSid(SeLocalSystemSid) + 44 + v4;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v5, 0x6C636144u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      Acl = RtlCreateAcl(PoolWithTag, v5, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v7, 2u, 0, 131075, (unsigned __int8 *)SeWorldSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v7, 2u, 0, 983055, (unsigned __int8 *)SeAliasAdminsSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v7, 2u, 0, 983055, (unsigned __int8 *)SeLocalSystemSid, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
              if ( Acl >= 0 )
              {
                v7 = 0LL;
                Acl = 0;
              }
            }
          }
        }
      }
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)Acl;
}
