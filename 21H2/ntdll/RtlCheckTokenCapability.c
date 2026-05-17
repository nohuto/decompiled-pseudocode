/*
 * XREFs of RtlCheckTokenCapability @ 0x18003C650
 * Callers:
 *     RtlCapabilityCheck @ 0x18003FC90 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180038020 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180038080 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18003C8E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18003C950 (RtlCreateSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x18003C980 (RtlIsCapabilitySid.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009D640 (ZwAccessCheck.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009DA60 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x18009DC20 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x18009DC40 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x18009DE80 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlCheckTokenCapability(void *a1, unsigned __int8 *a2, _BYTE *a3)
{
  __int64 v6; // r8
  void *v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  HANDLE v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h]
  __int64 v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  _DWORD *v21; // [rsp+88h] [rbp-78h]
  _BYTE v22[48]; // [rsp+90h] [rbp-70h] BYREF
  void *Src; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v24[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v25; // [rsp+128h] [rbp+28h]
  char v26[160]; // [rsp+130h] [rbp+30h] BYREF
  char v27[56]; // [rsp+1D0h] [rbp+D0h] BYREF

  v11 = 0LL;
  *a3 = 0;
  if ( !(unsigned __int8)RtlIsCapabilitySid(a2) )
  {
    v9 = -1073741811;
    goto LABEL_9;
  }
  if ( a1 )
  {
    v7 = a1;
    v11 = a1;
    goto LABEL_4;
  }
  LOBYTE(v6) = 1;
  v9 = NtOpenThreadTokenEx(-2LL, 8LL, v6);
  if ( v9 == -1073741700 )
  {
    v9 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
    if ( v9 < 0 )
      goto LABEL_16;
    v17 = 0LL;
    v19 = 0;
    v18 = 0LL;
    v20 = 0LL;
    v21 = v24;
    v16 = 48;
    v24[0] = 12;
    v24[1] = 2;
    v25 = 1;
    v9 = NtDuplicateToken(Handle, 8LL, &v16);
    NtClose(Handle);
  }
  if ( v9 >= 0 )
  {
    v7 = 0LL;
LABEL_4:
    NtQueryInformationToken(v7, 1LL, &Src);
    RtlCreateSecurityDescriptor(v22, 1LL);
    RtlSetOwnerSecurityDescriptor((__int64)v22, (__int64)Src, 0);
    RtlSetGroupSecurityDescriptor((__int64)v22, (__int64)Src, 0);
    RtlCreateAcl((__int64)v26, 0xA0u, 2);
    RtlpAddKnownAce(v26, 2u, 0, 65537, (unsigned __int8 *)Src, 0);
    RtlpAddKnownAce(v26, 2u, 0, 65537, a2, 0);
    LOBYTE(v8) = 1;
    RtlSetDaclSecurityDescriptor(v22, v8, v26, 0LL);
    v12 = 56;
    v9 = ZwAccessCheck(v22, v11, 65537LL, &RtlpCheckTokenCapabilityGenericMapping, v27, &v12, &v14, &v13);
    if ( v9 >= 0 )
    {
      if ( !v13 && v14 == 65537 )
        *a3 = 1;
      v9 = 0;
    }
LABEL_9:
    if ( a1 )
      return (unsigned int)v9;
  }
LABEL_16:
  if ( v11 )
    NtClose(v11);
  return (unsigned int)v9;
}
