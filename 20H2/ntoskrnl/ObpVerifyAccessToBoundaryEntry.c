/*
 * XREFs of ObpVerifyAccessToBoundaryEntry @ 0x1405D7CC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     SeAccessCheckWithHint @ 0x140223DC0 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlIsPackageSid @ 0x1405D7EF0 (RtlIsPackageSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1405D7F40 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405F7240 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405F73E0 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x1406053F0 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x140606130 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406320E0 (RtlCreateSecurityDescriptor.c)
 */

_BOOL8 __fastcall ObpVerifyAccessToBoundaryEntry(int *a1, __int64 a2)
{
  void *Src; // rsi
  int v5; // eax
  void **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r9
  PSID *v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h]
  ACL v18[12]; // [rsp+90h] [rbp-70h] BYREF
  ACL Acl[20]; // [rsp+F0h] [rbp-10h] BYREF

  memset(Acl, 0, sizeof(Acl));
  v15 = 0;
  memset(v18, 0, 0x54uLL);
  Src = a1 + 2;
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
    RtlCreateAcl(v18, 0x54u, 2u);
    RtlAddMandatoryAce(v18, v13, 0LL, Src);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    LOBYTE(v14) = 1;
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, v14, v18, 0LL);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)RtlIsPackageSid(Src) )
  {
    RtlCreateAcl(Acl, 0xA0u, 2u);
    RtlpAddKnownAce((int)Acl, 2, 0, 983055, Src, 0);
    v6 = *(void ***)(a2 + 32);
    if ( v6 )
      RtlpAddKnownAce((int)Acl, 2, 0, 983055, *v6, 0);
    RtlCreateAcl(v18, 0x54u, 2u);
    RtlAddMandatoryAce(v18, v7, 0LL, *(_QWORD *)(a2 + 40));
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    LOBYTE(v8) = 1;
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, v8, v18, 0LL);
LABEL_6:
    LOBYTE(v9) = 1;
    return (unsigned __int8)SeAccessCheckWithHint(
                              (__int64)SecurityDescriptor,
                              1LL,
                              a2,
                              v9,
                              983055,
                              0,
                              0LL,
                              (__int64)&ObpDirectoryObjectType->TypeInfo.GenericMapping,
                              KeGetCurrentThread()->PreviousMode,
                              (__int64)&v15,
                              a2 + 48) != 0;
  }
  v11 = *(PSID **)(a2 + 32);
  if ( v11 && !RtlEqualSid(Src, *v11) )
  {
    *(_DWORD *)(a2 + 48) = -1073741790;
    return 0LL;
  }
  v12 = *(_DWORD *)(a2 + 52);
  if ( (v12 & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) = -1073741811;
    return 0LL;
  }
  *(_DWORD *)(a2 + 52) = v12 | 1;
  return 1LL;
}
