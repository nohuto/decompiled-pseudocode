/*
 * XREFs of IopCreateUmdfDirectory @ 0x140A56114
 * Callers:
 *     IopCreateRootDirectories @ 0x140A53CFC (IopCreateRootDirectories.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     RtlLengthRequiredSid @ 0x140673F70 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x14067E0B0 (RtlInitializeSid.c)
 *     NtCreateDirectoryObject @ 0x1406D1800 (NtCreateDirectoryObject.c)
 *     RtlAddAccessAllowedAce @ 0x14070D860 (RtlAddAccessAllowedAce.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 IopCreateUmdfDirectory()
{
  unsigned __int8 *SeLocalSystemSid; // r14
  ULONG v1; // eax
  _DWORD *Pool; // rax
  _DWORD *v3; // rdi
  int Acl; // ebx
  ULONG v5; // ebx
  ACL *v6; // rax
  ACL *v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-29h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+50h] [rbp+7h]
  int v12; // [rsp+58h] [rbp+Fh]
  int v13; // [rsp+5Ch] [rbp+13h]
  __int64 v14; // [rsp+60h] [rbp+17h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+74h] [rbp+2Bh]
  _OWORD *v18; // [rsp+78h] [rbp+2Fh]
  __int64 v19; // [rsp+80h] [rbp+37h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+6Fh] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Handle = 0LL;
  v13 = 0;
  v17 = 0;
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
                  v14 = 0LL;
                  v19 = 0LL;
                  p_DestinationString = &DestinationString;
                  v12 = 48;
                  v18 = SecurityDescriptor;
                  v16 = 528;
                  Acl = NtCreateDirectoryObject((__int64)&Handle);
                  if ( Acl >= 0 )
                    ObCloseHandle(Handle, 0);
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
