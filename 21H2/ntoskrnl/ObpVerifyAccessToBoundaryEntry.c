/*
 * XREFs of ObpVerifyAccessToBoundaryEntry @ 0x1406CC960
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlIsPackageSid @ 0x14078ECD8 (RtlIsPackageSid.c)
 *     RtlpAddKnownAce @ 0x1407B4900 (RtlpAddKnownAce.c)
 */

_BOOL8 __fastcall ObpVerifyAccessToBoundaryEntry(int *a1, __int64 a2)
{
  void *v4; // rsi
  int v5; // eax
  void **v6; // rax
  __int64 v7; // rdx
  PSID *v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  int Src; // [rsp+20h] [rbp-E0h]
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v15; // [rsp+88h] [rbp-78h]
  ACL v16[12]; // [rsp+90h] [rbp-70h] BYREF
  ACL Acl[20]; // [rsp+F0h] [rbp-10h] BYREF

  memset(Acl, 0, sizeof(Acl));
  LODWORD(v13) = 0;
  memset(v16, 0, 0x54uLL);
  v4 = a1 + 2;
  v15 = 0LL;
  v5 = *a1;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( v5 != 2 )
  {
    if ( v5 == 3 )
    {
      RtlCreateAcl(v16, 0x54u, 2u);
      RtlAddMandatoryAce(v16, 2LL, 0LL, v4, 17, 7);
      RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      LOBYTE(v11) = 1;
      RtlSetSaclSecurityDescriptor(SecurityDescriptor, v11, v16, 0LL);
      return SeAccessCheckWithHint(
               (__int64)SecurityDescriptor,
               1,
               (struct _SECURITY_SUBJECT_CONTEXT *)a2,
               1,
               0xF000Fu,
               0,
               0LL,
               (__int64)&ObpDirectoryObjectType->TypeInfo.GenericMapping,
               KeGetCurrentThread()->PreviousMode,
               (unsigned int *)&v13,
               (int *)(a2 + 48));
    }
    if ( v5 != 1 )
    {
      *(_DWORD *)(a2 + 48) = -1073741595;
      return 0LL;
    }
    return 1LL;
  }
  if ( (unsigned __int8)RtlIsPackageSid(v4) )
  {
    v9 = *(PSID **)(a2 + 32);
    if ( v9 && !RtlEqualSid(v4, *v9) )
    {
      *(_DWORD *)(a2 + 48) = -1073741790;
      return 0LL;
    }
    v10 = *(_DWORD *)(a2 + 52);
    if ( (v10 & 1) != 0 )
    {
      *(_DWORD *)(a2 + 48) = -1073741811;
      return 0LL;
    }
    *(_DWORD *)(a2 + 52) = v10 | 1;
    return 1LL;
  }
  RtlCreateAcl(Acl, 0xA0u, 2u);
  RtlpAddKnownAce((int)Acl, 2, 0, 983055, v4, 0);
  v6 = *(void ***)(a2 + 32);
  if ( v6 )
    RtlpAddKnownAce((int)Acl, 2, 0, 983055, *v6, 0);
  RtlCreateAcl(v16, 0x54u, 2u);
  LOBYTE(Src) = 17;
  RtlAddMandatoryAce(v16, 2LL, 0LL, *(_QWORD *)(a2 + 40), Src, 7);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
  LOBYTE(v7) = 1;
  RtlSetSaclSecurityDescriptor(SecurityDescriptor, v7, v16, 0LL);
  return SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           1,
           (struct _SECURITY_SUBJECT_CONTEXT *)a2,
           1,
           0xF000Fu,
           0,
           0LL,
           (__int64)&ObpDirectoryObjectType->TypeInfo.GenericMapping,
           KeGetCurrentThread()->PreviousMode,
           (unsigned int *)&v13,
           (int *)(a2 + 48));
}
