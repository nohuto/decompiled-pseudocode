/*
 * XREFs of ExpKeyedEventInitialization @ 0x140A6B800
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A394EC (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateKeyedEvent @ 0x1403F3930 (ZwCreateKeyedEvent.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x140605780 (RtlAddMandatoryAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140703E80 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14070D860 (RtlAddAccessAllowedAce.c)
 *     ObCreateObjectType @ 0x14077E620 (ObCreateObjectType.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

int ExpKeyedEventInitialization()
{
  int result; // eax
  ULONG v1; // edi
  ACL *PoolWithTag; // rax
  ACL *v3; // rbx
  NTSTATUS Acl; // edi
  ACL *v5; // rcx
  ULONG v6; // esi
  ACL *v7; // rax
  ACL *v8; // rdi
  ULONG v9; // edx
  NTSTATUS v10; // esi
  UCHAR Object; // [rsp+20h] [rbp-E0h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+90h] [rbp-70h]
  _DWORD v16[32]; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE KeyedEventHandle; // [rsp+150h] [rbp+50h] BYREF
  PVOID v18; // [rsp+158h] [rbp+58h] BYREF

  DestinationString = 0LL;
  memset(v16, 0, 0x78uLL);
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyedEventHandle = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v15 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"KeyedEvent");
  v16[2] = 0;
  v16[10] = 0;
  v16[11] = 0;
  BYTE2(v16[0]) |= 4u;
  v16[9] = 1;
  v16[7] = 983043;
  v16[6] = 983043;
  LOWORD(v16[0]) = 120;
  v16[3] = 131073;
  v16[4] = 131074;
  v16[5] = 0x20000;
  result = ObCreateObjectType(&DestinationString, (__int64)v16, 0LL, (__int64)&ExpKeyedEventObjectType);
  if ( result < 0 )
    return result;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result < 0 )
    return result;
  v1 = 4
     * (*((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeWorldSid + 1))
     + 68;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v1, 0x6C636144u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  Acl = RtlCreateAcl(PoolWithTag, v1, 2u);
  v5 = v3;
  if ( Acl < 0
    || (Acl = RtlAddAccessAllowedAce(v3, 2u, 0x20003u, SeWorldSid), v5 = v3, Acl < 0)
    || (Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeAliasAdminsSid), v5 = v3, Acl < 0) )
  {
LABEL_20:
    ExFreePoolWithTag(v5, 0);
    return Acl;
  }
  Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeLocalSystemSid);
  if ( Acl < 0 || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0), Acl < 0) )
  {
LABEL_19:
    v5 = v3;
    goto LABEL_20;
  }
  v6 = 4 * *((unsigned __int8 *)SeLowMandatorySid + 1) + 28;
  v7 = (ACL *)ExAllocatePoolWithTag(PagedPool, v6, 0x6C636144u);
  v8 = v7;
  if ( !v7 )
  {
    Acl = -1073741670;
    goto LABEL_19;
  }
  v10 = RtlCreateAcl(v7, v6, 2u);
  if ( v10 < 0
    || (v10 = RtlAddMandatoryAce(v8, v9, 0, SeLowMandatorySid, Object, 1u), v10 < 0)
    || (v10 = RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0), v10 < 0) )
  {
    ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\CritSecOutOfMemoryEvent");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
    ObjectAttributes.Attributes = 16;
    v10 = ZwCreateKeyedEvent(&KeyedEventHandle, 0xF0003u, &ObjectAttributes, 0);
    ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v8, 0);
    if ( v10 >= 0 )
    {
      v18 = 0LL;
      v10 = ObReferenceObjectByHandle(KeyedEventHandle, 0xF0003u, ExpKeyedEventObjectType, 0, &v18, 0LL);
      ExpCritSecOutOfMemoryEvent = (__int64)v18;
      ZwClose(KeyedEventHandle);
    }
  }
  return v10;
}
