/*
 * XREFs of RtlCheckTokenCapability @ 0x140580C40
 * Callers:
 *     RtlCapabilityCheck @ 0x14090ECC0 (RtlCapabilityCheck.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140209250 (SeAccessCheckWithHint.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1403F2750 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x1403F2910 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1403F2930 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x1403F2B70 (ZwDuplicateToken.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     RtlIsCapabilitySid @ 0x14070D810 (RtlIsCapabilitySid.c)
 *     RtlAddAccessAllowedAce @ 0x14070D860 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14070D890 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14070D8F0 (RtlSetOwnerSecurityDescriptor.c)
 */

__int64 __fastcall RtlCheckTokenCapability(HANDLE ExistingTokenHandle, PSID Sid, _BYTE *a3)
{
  NTSTATUS v6; // ebx
  char v7; // al
  NTSTATUS v9; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE TokenHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG ReturnLength; // [rsp+70h] [rbp-90h] BYREF
  int v12; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE ExistingTokenHandlea; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  char *v15; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v18; // [rsp+E0h] [rbp-20h]
  __int128 v19; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v20[3]; // [rsp+F8h] [rbp-8h]
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v22; // [rsp+170h] [rbp+70h] BYREF
  int v23; // [rsp+178h] [rbp+78h]
  ACL Acl[20]; // [rsp+180h] [rbp+80h] BYREF
  char v25; // [rsp+220h] [rbp+120h] BYREF

  v12 = 0;
  v9 = 0;
  memset(Acl, 0, sizeof(Acl));
  TokenHandle = 0LL;
  v15 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v18 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ExistingTokenHandlea = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(TokenInformation, 0, 0x58uLL);
  ReturnLength = 0;
  *a3 = 0;
  v19 = 0LL;
  *(_OWORD *)v20 = 0LL;
  if ( !(unsigned __int8)RtlIsCapabilitySid(Sid) )
  {
    v6 = -1073741811;
    goto LABEL_18;
  }
  if ( ExistingTokenHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.SecurityQualityOfService = &v22;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    v22 = 0x20000000CLL;
    LOWORD(v23) = 1;
    v6 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandle);
    if ( v6 < 0 )
      goto LABEL_18;
    ExistingTokenHandle = 0LL;
LABEL_10:
    ReturnLength = 88;
    ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlCreateAcl(Acl, 0xA0u, 2u);
    RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, TokenInformation[0]);
    RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, Sid);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    v15 = &v25;
    Object = 0LL;
    v20[1] = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    v6 = ObReferenceObjectByHandle(TokenHandle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
    v20[0] = Object;
    if ( v6 >= 0 )
    {
      v7 = SeAccessCheckWithHint(
             (__int64)SecurityDescriptor,
             0LL,
             (__int64)&v19,
             0LL,
             65537,
             0,
             (__int64)&v15,
             (__int64)RtlpCheckTokenCapabilityGenericMapping,
             KeGetCurrentThread()->PreviousMode,
             (__int64)&v12,
             (__int64)&v9);
      v6 = v9;
      if ( !v7 )
        v6 = -1073741790;
      ObfDereferenceObjectWithTag(v20[0], 0x746C6644u);
      if ( v6 >= 0 )
      {
        if ( !v9 && v12 == 65537 )
          *a3 = 1;
        v6 = 0;
LABEL_18:
        if ( ExistingTokenHandle )
          return (unsigned int)v6;
        goto LABEL_19;
      }
    }
    goto LABEL_19;
  }
  v6 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, &TokenHandle);
  if ( v6 == -1073741700 )
  {
    v6 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0x200u, &ExistingTokenHandlea);
    if ( v6 < 0 )
      goto LABEL_19;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v22;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    v22 = 0x20000000CLL;
    LOWORD(v23) = 1;
    v6 = ZwDuplicateToken(ExistingTokenHandlea, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandle);
    ZwClose(ExistingTokenHandlea);
  }
  if ( v6 >= 0 )
    goto LABEL_10;
LABEL_19:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  return (unsigned int)v6;
}
