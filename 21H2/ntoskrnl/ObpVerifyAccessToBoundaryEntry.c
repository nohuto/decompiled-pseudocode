/*
 * XREFs of ObpVerifyAccessToBoundaryEntry @ 0x1406CA2B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     SeAccessCheckWithHint @ 0x1403589C0 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlAddMandatoryAce @ 0x140650540 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x140651280 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlIsPackageSid @ 0x1406CA4E0 (RtlIsPackageSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CA530 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 */

_BOOL8 __fastcall ObpVerifyAccessToBoundaryEntry(int *a1, __int64 a2)
{
  void *v4; // rsi
  int v5; // eax
  unsigned __int8 **v6; // rax
  ULONG v7; // edx
  __int64 v8; // r9
  PSID *v10; // rdx
  int v11; // eax
  ULONG v12; // edx
  UCHAR AceType; // [rsp+20h] [rbp-E0h]
  UCHAR AceTypea; // [rsp+20h] [rbp-E0h]
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h]
  ACL Sacl[12]; // [rsp+90h] [rbp-70h] BYREF
  ACL Acl[20]; // [rsp+F0h] [rbp-10h] BYREF

  memset(Acl, 0, sizeof(Acl));
  v15 = 0;
  memset(Sacl, 0, 0x54uLL);
  v4 = a1 + 2;
  v17 = 0LL;
  v5 = *a1;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( v5 != 2 )
  {
    if ( v5 != 3 )
    {
      if ( v5 != 1 )
      {
        *(_DWORD *)(a2 + 48) = -1073741595;
        return 0LL;
      }
      return 1LL;
    }
    RtlCreateAcl(Sacl, 0x54u, 2u);
    RtlAddMandatoryAce(Sacl, v12, 0, v4, AceType, 7u);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, Sacl, 0);
    goto LABEL_6;
  }
  if ( !RtlIsPackageSid(v4) )
  {
    RtlCreateAcl(Acl, 0xA0u, 2u);
    RtlpAddKnownAce(Acl, 2u, 0, 983055, (unsigned __int8 *)v4, 0);
    v6 = *(unsigned __int8 ***)(a2 + 32);
    if ( v6 )
      RtlpAddKnownAce(Acl, 2u, 0, 983055, *v6, 0);
    RtlCreateAcl(Sacl, 0x54u, 2u);
    RtlAddMandatoryAce(Sacl, v7, 0, *(PSID *)(a2 + 40), AceTypea, 7u);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, Sacl, 0);
LABEL_6:
    LOBYTE(v8) = 1;
    return (unsigned __int8)SeAccessCheckWithHint(
                              (__int64)SecurityDescriptor,
                              1LL,
                              a2,
                              v8,
                              983055,
                              0,
                              0LL,
                              (__int64)&ObpDirectoryObjectType->TypeInfo.GenericMapping,
                              KeGetCurrentThread()->PreviousMode,
                              (__int64)&v15,
                              a2 + 48) != 0;
  }
  v10 = *(PSID **)(a2 + 32);
  if ( v10 && !RtlEqualSid(v4, *v10) )
  {
    *(_DWORD *)(a2 + 48) = -1073741790;
    return 0LL;
  }
  v11 = *(_DWORD *)(a2 + 52);
  if ( (v11 & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) = -1073741811;
    return 0LL;
  }
  *(_DWORD *)(a2 + 52) = v11 | 1;
  return 1LL;
}
