/*
 * XREFs of SepInitializationPhase1 @ 0x1407A6578
 * Callers:
 *     SeInitServerSilo @ 0x140917A10 (SeInitServerSilo.c)
 *     SeInitSystem @ 0x140A60D28 (SeInitSystem.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     SddlBaseInitialize @ 0x1403BF6C4 (SddlBaseInitialize.c)
 *     SepInitProcessAuditSd @ 0x1403BF73C (SepInitProcessAuditSd.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateEvent @ 0x1403F2C30 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x1403F37F0 (ZwCreateDirectoryObject.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     ObInsertObject @ 0x140642820 (ObInsertObject.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     RtlAddAccessAllowedAce @ 0x14070D860 (RtlAddAccessAllowedAce.c)
 *     SepInitializeCodeIntegrity @ 0x1407A6DAC (SepInitializeCodeIntegrity.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140A60E3C (SepInitializeSingletonAttributesStructures.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140A612A0 (SepInitializeAuthorizationCallbacks.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A618FC (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A61B88 (SeMakeAnonymousLogonToken.c)
 */

char SepInitializationPhase1()
{
  char IsCurrentThreadInServerSilo; // di
  ACL *PoolWithTag; // rax
  ACL *v2; // rbx
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-31h] BYREF
  HANDLE EventHandle; // [rsp+50h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  STRING DestinationString; // [rsp+88h] [rbp+17h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+98h] [rbp+27h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  EventHandle = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  if ( !IsCurrentThreadInServerSilo )
  {
    ObInsertObject(
      (PVOID)(KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] & 0xFFFFFFFFFFFFFFF0uLL),
      0LL,
      0,
      0,
      0LL,
      0LL);
    SeAnonymousLogonToken = SeMakeAnonymousLogonToken();
    SeAnonymousLogonTokenNoEveryone = SeMakeAnonymousLogonTokenNoEveryone();
  }
  RtlInitAnsiString(&DestinationString, "\\Security");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x20206553u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  RtlCreateAcl(PoolWithTag, 0x100u, 2u);
  RtlAddAccessAllowedAce(v2, 2u, 0xF000Fu, SeLocalSystemSid);
  RtlAddAccessAllowedAce(v2, 2u, 0x20003u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(v2, 2u, 2u, SeWorldSid);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v2, 0);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.Length = 48;
  ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  RtlFreeAnsiString(&UnicodeString);
  ExFreePoolWithTag(v2, 0);
  RtlInitAnsiString(&DestinationString, "LSA_AUTHENTICATION_INITIALIZED");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultSd;
  ObjectAttributes.Attributes = 80;
  ZwCreateEvent(&EventHandle, 0x40000000u, &ObjectAttributes, NotificationEvent, 0);
  RtlFreeAnsiString(&UnicodeString);
  ZwClose(DirectoryHandle);
  ZwClose(EventHandle);
  if ( !IsCurrentThreadInServerSilo )
  {
    SepInitProcessAuditSd();
    SepInitializeCodeIntegrity();
    SepInitializeAuthorizationCallbacks();
    if ( (int)SepInitializeSingletonAttributesStructures() < 0 )
      return 0;
  }
  SddlBaseInitialize();
  return 1;
}
