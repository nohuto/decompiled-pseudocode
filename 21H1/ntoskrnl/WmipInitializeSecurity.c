/*
 * XREFs of WmipInitializeSecurity @ 0x140A65B3C
 * Callers:
 *     WmipDriverEntry @ 0x140A659B0 (WmipDriverEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14070D860 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14070D890 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14070D8F0 (RtlSetOwnerSecurityDescriptor.c)
 *     ObCreateObjectType @ 0x14077E620 (ObCreateObjectType.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 WmipInitializeSecurity()
{
  ULONG v0; // ebx
  ACL *PoolWithTag; // rax
  ACL *v2; // rdi
  NTSTATUS Acl; // ebx
  PSID v4; // rsi
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v7[16]; // [rsp+38h] [rbp-29h] BYREF

  DestinationString = 0LL;
  v0 = 4
     * (*((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeAliasUsersSid + 1)
      + *((unsigned __int8 *)SeExports->SeLocalServiceSid + 1)
      + *((unsigned __int8 *)SeExports->SeNetworkServiceSid + 1))
     + 116;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v0, 0x70696D57u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  Acl = RtlCreateAcl(PoolWithTag, v0, 2u);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeLocalSystemSid);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x800u, SeAliasUsersSid);
  if ( Acl < 0 )
    goto LABEL_14;
  v4 = SeAliasAdminsSid;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x11FFFFFu, SeAliasAdminsSid);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeExports->SeLocalServiceSid);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeExports->SeNetworkServiceSid);
  if ( Acl < 0 )
    goto LABEL_14;
  WmipDefaultAccessSd = (__int64)&WmipDefaultAccessSecurityDescriptor;
  RtlCreateSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, 1u);
  Acl = RtlSetDaclSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, 1u, v2, 0);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlSetOwnerSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, v4, 0);
  if ( Acl < 0 )
    goto LABEL_14;
  Acl = RtlSetGroupSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, v4, 0);
  if ( Acl < 0 )
    goto LABEL_14;
  SeCaptureSubjectContext(&WmipSystemSubjectContext);
  memset(v7, 0, 0x78uLL);
  LOWORD(v7[0]) = 120;
  LODWORD(v7[1]) = 256;
  BYTE2(v7[0]) = BYTE2(v7[0]) & 0xE7 | 8;
  HIDWORD(v7[3]) = 2039807;
  v7[11] = WmipSecurityMethod;
  v7[9] = WmipDeleteMethod;
  *(_OWORD *)((char *)&v7[1] + 4) = WmipGenericMapping;
  HIDWORD(v7[4]) = 512;
  HIDWORD(v7[5]) = 168;
  RtlInitUnicodeString(&DestinationString, L"WmiGuid");
  result = ObCreateObjectType(&DestinationString, (__int64)v7, 0LL, (__int64)&WmipGuidObjectType);
  Acl = result;
  if ( (int)result < 0 )
  {
LABEL_14:
    ExFreePoolWithTag(v2, 0);
    WmipDefaultAccessSd = 0LL;
    return (unsigned int)Acl;
  }
  return result;
}
