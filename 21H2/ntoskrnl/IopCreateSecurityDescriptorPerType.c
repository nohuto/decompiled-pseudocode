/*
 * XREFs of IopCreateSecurityDescriptorPerType @ 0x1406C9E98
 * Callers:
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1406C9DC0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 * Callees:
 *     RtlAddMandatoryAce @ 0x140650540 (RtlAddMandatoryAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CA530 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall IopCreateSecurityDescriptorPerType(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        int a2,
        ACL **a3,
        int *a4)
{
  char v4; // di
  int v8; // edx
  int v9; // edx
  ACL *v10; // rbx
  NTSTATUS result; // eax
  int v12; // edx
  int v13; // edx
  unsigned __int16 v14; // bp
  ACL *PoolWithTag; // rax
  ACL *v16; // r15
  ULONG v17; // edx
  int v18; // ecx
  UCHAR v19; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = SePublicDefaultUnrestrictedDacl;
      goto LABEL_4;
    }
    v12 = v9 - 1;
    if ( !v12 )
    {
      v10 = SePublicOpenDacl;
      goto LABEL_10;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v10 = SePublicOpenUnrestrictedDacl;
LABEL_10:
      v4 = 1;
      goto LABEL_4;
    }
    if ( v13 != 1 )
      return -1073741811;
    v10 = SeSystemDefaultDacl;
  }
  else
  {
    v10 = SePublicDefaultDacl;
  }
LABEL_4:
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v4 == 1 )
  {
    v14 = 4 * (*((unsigned __int8 *)SeLowMandatorySid + 1) + 6);
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v14, 0x65536F49u);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    RtlCreateAcl(PoolWithTag, v14, 2u);
    RtlAddMandatoryAce(v16, v17, 0, SeLowMandatorySid, v19, 1u);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v16, 0);
    *a3 = v16;
  }
  result = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0);
  if ( a4 )
  {
    v18 = *a4 | 4;
    *a4 = v18;
    if ( v4 )
      *a4 = v18 | 0x10;
  }
  return result;
}
