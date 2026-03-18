/*
 * XREFs of ObCreateKernelObjectsSD @ 0x14082C34C
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14082C020 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14082C1E4 (MiCreatePartitionNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1407B4900 (RtlpAddKnownAce.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall ObCreateKernelObjectsSD(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int Acl; // ebx
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ACL *Pool2; // rax
  ACL *v7; // rdi

  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v3 = RtlLengthSid(SeWorldSid);
    v4 = RtlLengthSid(SeAliasAdminsSid) + v3;
    v5 = RtlLengthSid(SeLocalSystemSid) + 44 + v4;
    Pool2 = (ACL *)ExAllocatePool2(256LL, v5, 1818452292LL);
    v7 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v5, 2u);
      if ( Acl < 0
        || (Acl = RtlpAddKnownAce((__int64)v7, 2u, 0, 131075, (unsigned __int8 *)SeWorldSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((__int64)v7, 2u, 0, 983055, (unsigned __int8 *)SeAliasAdminsSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((__int64)v7, 2u, 0, 983055, (unsigned __int8 *)SeLocalSystemSid, 0), Acl < 0)
        || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0), Acl < 0) )
      {
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)Acl;
}
