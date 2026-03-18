/*
 * XREFs of ObpVerifyAccessToBoundaryEntry @ 0x140703C00
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     SeAccessCheckWithHint @ 0x140209250 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x140605780 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     RtlIsPackageSid @ 0x140703E30 (RtlIsPackageSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140703E80 (RtlSetSaclSecurityDescriptor.c)
 */

_BOOL8 __fastcall ObpVerifyAccessToBoundaryEntry(_DWORD *a1, __int64 a2)
{
  unsigned __int8 *v4; // rsi
  int v5; // eax
  unsigned __int8 **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r9
  PSID *v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  void *Src; // [rsp+20h] [rbp-E0h]
  void *Srca; // [rsp+20h] [rbp-E0h]
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v19; // [rsp+88h] [rbp-78h]
  ACL v20[12]; // [rsp+90h] [rbp-70h] BYREF
  ACL Acl[20]; // [rsp+F0h] [rbp-10h] BYREF

  memset(Acl, 0, sizeof(Acl));
  v17 = 0;
  memset(v20, 0, 0x54uLL);
  v4 = (unsigned __int8 *)(a1 + 2);
  v19 = 0LL;
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
    RtlCreateAcl(v20, 0x54u, 2u);
    RtlAddMandatoryAce((__int64)v20, v13, 0, (__int64)v4, (__int64)Src, 7);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    LOBYTE(v14) = 1;
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, v14, v20, 0LL);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)RtlIsPackageSid(v4) )
  {
    RtlCreateAcl(Acl, 0xA0u, 2u);
    RtlpAddKnownAce((__int64)Acl, 2u, 0, 983055, v4, 0);
    v6 = *(unsigned __int8 ***)(a2 + 32);
    if ( v6 )
      RtlpAddKnownAce((__int64)Acl, 2u, 0, 983055, *v6, 0);
    RtlCreateAcl(v20, 0x54u, 2u);
    RtlAddMandatoryAce((__int64)v20, v7, 0, *(_QWORD *)(a2 + 40), (__int64)Srca, 7);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    LOBYTE(v8) = 1;
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, v8, v20, 0LL);
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
                              (__int64)&v17,
                              a2 + 48) != 0;
  }
  v11 = *(PSID **)(a2 + 32);
  if ( v11 && !RtlEqualSid(v4, *v11) )
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
