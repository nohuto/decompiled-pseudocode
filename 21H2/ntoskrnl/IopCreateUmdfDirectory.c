/*
 * XREFs of IopCreateUmdfDirectory @ 0x140A5E080
 * Callers:
 *     IopCreateRootDirectories @ 0x140A5C394 (IopCreateRootDirectories.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     NtCreateDirectoryObject @ 0x140601A70 (NtCreateDirectoryObject.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14066A2B0 (RtlAddAccessAllowedAce.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     RtlInitializeSid @ 0x1406BC580 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x1406CB9E0 (RtlLengthRequiredSid.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 IopCreateUmdfDirectory()
{
  unsigned __int8 *SeLocalSystemSid; // r14
  ULONG v1; // eax
  _DWORD *Pool; // rax
  _DWORD *v3; // rdi
  NTSTATUS Acl; // ebx
  ULONG v5; // ebx
  ACL *v6; // rax
  ACL *v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-29h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+50h] [rbp+7h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE DirectoryHandle; // [rsp+B8h] [rbp+6Fh] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  DirectoryHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v11 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  DestinationString = 0LL;
  SeLocalSystemSid = (unsigned __int8 *)SeExports->SeLocalSystemSid;
  v1 = RtlLengthRequiredSid(6u);
  Pool = IopVerifierExAllocatePool(PagedPool, v1);
  v3 = Pool;
  if ( Pool )
  {
    Acl = RtlInitializeSid(Pool, &IdentifierAuthority, 6u);
    if ( Acl >= 0 )
    {
      v3[2] = 80;
      v3[3] = -1642288911;
      v3[4] = 582572993;
      v3[5] = 1835434367;
      v3[6] = 1344795993;
      v3[7] = 749280709;
      v5 = 4 * (SeLocalSystemSid[1] + *((unsigned __int8 *)v3 + 1)) + 40;
      v6 = (ACL *)IopVerifierExAllocatePool(PagedPool, v5);
      v7 = v6;
      if ( v6 )
      {
        Acl = RtlCreateAcl(v6, v5, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, SeLocalSystemSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v3);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
                if ( Acl >= 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"\\UMDFCommunicationPorts");
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.SecurityQualityOfService = 0LL;
                  ObjectAttributes.ObjectName = &DestinationString;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                  ObjectAttributes.Attributes = 528;
                  Acl = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
                  if ( Acl >= 0 )
                    ObCloseHandle(DirectoryHandle, 0);
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
