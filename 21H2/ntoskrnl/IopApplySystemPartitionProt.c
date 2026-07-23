/*
 * XREFs of IopApplySystemPartitionProt @ 0x140A90EC0
 * Callers:
 *     IopProtectSystemPartition @ 0x140A73948 (IopProtectSystemPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x1403B86DC (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     ZwSetSecurityObject @ 0x1403FDAA0 (ZwSetSecurityObject.c)
 *     IopVerifierExAllocatePool_5 @ 0x14050AF78 (IopVerifierExAllocatePool_5.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlAddAccessAllowedAce @ 0x14066A2B0 (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopApplySystemPartitionProt(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  ULONG v4; // ebx
  ACL *Pool_5; // rax
  ACL *v6; // rdi
  NTSTATUS Acl; // ebx
  __int64 v9; // r9
  HANDLE UnicodeString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString_8; // [rsp+40h] [rbp-C8h] BYREF
  STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v15; // [rsp+B0h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  char pszFormat[16]; // [rsp+C8h] [rbp-40h] BYREF
  char pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF

  strcpy(pszFormat, "\\ArcName\\%s");
  v15 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v2 = *((unsigned __int8 *)SeAliasAdminsSid + 1);
  memset(&ObjectAttributes_8, 0, sizeof(ObjectAttributes_8));
  v3 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  v4 = 4 * (v3 + v2) + 56;
  Pool_5 = (ACL *)IopVerifierExAllocatePool_5(v3, v4);
  v6 = Pool_5;
  if ( !Pool_5 )
    return 3221225626LL;
  Acl = RtlCreateAcl(Pool_5, v4, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(v6, 2u, 0x10000000u, SeLocalSystemSid);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v6, 2u, 0xE0020000, SeAliasAdminsSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
          if ( Acl >= 0 )
          {
            v9 = *(_QWORD *)(a1 + 192);
            UnicodeString = 0LL;
            DestinationString_8 = 0LL;
            UnicodeString_8 = 0LL;
            IoStatusBlock = 0LL;
            RtlStringCchPrintfA(pszDest, 0x100uLL, pszFormat, v9);
            RtlInitAnsiString(&DestinationString_8, pszDest);
            Acl = RtlAnsiStringToUnicodeString(&UnicodeString_8, &DestinationString_8, 1u);
            if ( Acl >= 0 )
            {
              ObjectAttributes_8.RootDirectory = 0LL;
              ObjectAttributes_8.ObjectName = &UnicodeString_8;
              ObjectAttributes_8.Length = 48;
              ObjectAttributes_8.Attributes = 576;
              *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
              Acl = ZwOpenFile(&UnicodeString, 0x40000u, &ObjectAttributes_8, &IoStatusBlock, 1u, 0);
              RtlFreeAnsiString(&UnicodeString_8);
              if ( Acl >= 0 )
              {
                Acl = ZwSetSecurityObject(UnicodeString, 4u, SecurityDescriptor);
                NtClose(UnicodeString);
              }
            }
          }
        }
      }
    }
  }
  ExFreePoolWithTag(v6, 0);
  return (unsigned int)Acl;
}
