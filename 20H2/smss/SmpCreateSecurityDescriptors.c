/*
 * XREFs of SmpCreateSecurityDescriptors @ 0x14000CD90
 * Callers:
 *     SmpInit @ 0x14000C620 (SmpInit.c)
 *     SmpConfigureProtectionMode @ 0x14000CD60 (SmpConfigureProtectionMode.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpCreateSecurityDescriptors(char a1)
{
  char v1; // si
  NTSTATUS v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // edi
  struct _ACL *Heap; // rax
  struct _ACL *v7; // rbx
  ULONG v8; // r15d
  ULONG v9; // r15d
  ULONG v10; // r15d
  ULONG v11; // r15d
  ULONG v12; // r15d
  struct _ACL *v13; // rdi
  SIZE_T v14; // rsi
  struct _ACL *v15; // r14
  ULONG v16; // r15d
  ULONG v17; // r15d
  ULONG v18; // r15d
  ULONG v19; // r15d
  ULONG v20; // r15d
  struct _ACL *v21; // rsi
  ULONG v22; // edi
  SIZE_T v23; // r14
  struct _ACL *v24; // rdi
  int v25; // eax
  ULONG v26; // edi
  ULONG v27; // edi
  ULONG v28; // esi
  ULONG v29; // esi
  struct _ACL *v30; // rax
  struct _ACL *v31; // rdi
  PSECURITY_DESCRIPTOR v32; // rcx
  ULONG v33; // edi
  ULONG v34; // edi
  ULONG v35; // esi
  ULONG v36; // esi
  struct _ACL *v37; // r14
  ULONG v38; // edi
  struct _ACL *v39; // r15
  ULONG SubAuthority2; // [rsp+20h] [rbp-89h]
  ULONG SubAuthority2a; // [rsp+20h] [rbp-89h]
  void *SubAuthority3; // [rsp+28h] [rbp-81h]
  PSID v44; // [rsp+60h] [rbp-49h] BYREF
  PVOID Ace; // [rsp+68h] [rbp-41h] BYREF
  PSID Sid; // [rsp+70h] [rbp-39h] BYREF
  PSID v47; // [rsp+78h] [rbp-31h] BYREF
  PSID BaseAddress; // [rsp+80h] [rbp-29h] BYREF
  PSID v49; // [rsp+88h] [rbp-21h] BYREF
  PSID v50; // [rsp+90h] [rbp-19h] BYREF
  PSID v51; // [rsp+98h] [rbp-11h] BYREF
  PSID v52; // [rsp+A0h] [rbp-9h] BYREF
  PSID v53; // [rsp+A8h] [rbp-1h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v54; // [rsp+B0h] [rbp+7h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v55; // [rsp+B8h] [rbp+Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp+17h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v57; // [rsp+C8h] [rbp+1Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v58; // [rsp+D0h] [rbp+27h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v59; // [rsp+D8h] [rbp+2Fh] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  v1 = 0;
  Sid = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v44 = 0LL;
  v53 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  BaseAddress = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v55.Value = 0;
  *(_WORD *)&v55.Value[4] = 3840;
  *(_DWORD *)v54.Value = 0;
  *(_WORD *)&v54.Value[4] = 1280;
  *(_DWORD *)v58.Value = 0;
  *(_WORD *)&v58.Value[4] = 4096;
  *(_DWORD *)v57.Value = 0;
  *(_WORD *)&v57.Value[4] = 768;
  *(_DWORD *)v59.Value = 0;
  *(_WORD *)&v59.Value[4] = 4864;
  if ( a1 )
  {
    SmpPrimarySecurityDescriptor = &SmpPrimarySDBody;
    RtlCreateSecurityDescriptor(&SmpPrimarySDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpPrimarySecurityDescriptor, 1u, 0LL, 0);
    SmpLiberalSecurityDescriptor = &SmpLiberalSDBody;
    RtlCreateSecurityDescriptor(&SmpLiberalSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, 0LL, 0);
    SmpKnownDllsDirSecurityDescriptor = &SmpKnownDllsDirSDBody;
    RtlCreateSecurityDescriptor(&SmpKnownDllsDirSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpKnownDllsDirSecurityDescriptor, 1u, 0LL, 0);
    SmpKnownDllSecurityDescriptor = &SmpKnownDllSDBody;
    RtlCreateSecurityDescriptor(&SmpKnownDllSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, 0LL, 0);
    SmpKnownDllsSymLinkSecurityDescriptor = &SmpKnownDllsSymLinkSDBody;
    RtlCreateSecurityDescriptor(&SmpKnownDllsSymLinkSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpKnownDllsSymLinkSecurityDescriptor, 1u, 0LL, 0);
    SmpApiPortSecurityDescriptor = &SmpApiPortSDBody;
    RtlCreateSecurityDescriptor(&SmpApiPortSDBody, 1u);
    RtlSetDaclSecurityDescriptor(SmpApiPortSecurityDescriptor, 1u, 0LL, 0);
  }
  if ( (SmpProtectionMode & 1) != 0 )
    v1 = 1;
  if ( !a1 && !v1 )
    return 0LL;
  v3 = 0;
  if ( !a1 && !v1 )
    goto LABEL_42;
  v3 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v3 < 0 )
  {
    Sid = 0LL;
    goto LABEL_42;
  }
  v3 = RtlAllocateAndInitializeSid(&v55, 2u, 2u, 1u, 0, 0, 0, 0, 0, 0, &v51);
  if ( v3 < 0 )
  {
    v51 = 0LL;
    goto LABEL_42;
  }
  v3 = RtlAllocateAndInitializeSid(&v55, 2u, 2u, 2u, 0, 0, 0, 0, 0, 0, &v52);
  if ( v3 < 0 )
  {
    v52 = 0LL;
    goto LABEL_42;
  }
  v3 = RtlAllocateAndInitializeSid(&v54, 2u, 0x20u, 0x220u, 0, 0, 0, 0, 0, 0, &v44);
  if ( v3 < 0 )
  {
    v44 = 0LL;
    goto LABEL_42;
  }
  v3 = RtlAllocateAndInitializeSid(&v57, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v50);
  if ( v3 < 0 )
  {
    v50 = 0LL;
    goto LABEL_42;
  }
  v3 = RtlAllocateAndInitializeSid(&v54, 1u, 0xCu, 0, 0, 0, 0, 0, 0, 0, &v47);
  if ( v3 < 0 )
  {
    v47 = 0LL;
    goto LABEL_42;
  }
  v3 = RtlAllocateAndInitializeSid(&v54, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &v53);
  if ( v3 < 0 )
  {
    v53 = 0LL;
    goto LABEL_42;
  }
  v3 = RtlAllocateAndInitializeSid(&v58, 1u, 0x1000u, 0, 0, 0, 0, 0, 0, 0, &v49);
  if ( v3 < 0 )
  {
    v49 = 0LL;
LABEL_42:
    if ( BaseAddress )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    goto LABEL_44;
  }
  v3 = RtlAllocateAndInitializeSid(&v59, 2u, 0x200u, 0x2000u, 0, 0, 0, 0, 0, 0, &BaseAddress);
  if ( v3 >= 0 )
  {
    if ( a1 )
    {
      v4 = RtlLengthSid(v53);
      v5 = v4 + RtlLengthSid(v44) + 32;
      Heap = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v5);
      v7 = Heap;
      if ( Heap )
      {
        RtlCreateAcl(Heap, v5, 2u);
        RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v44);
        RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v53);
        v3 = RtlSetDaclSecurityDescriptor(SmpApiPortSecurityDescriptor, 1u, v7, 0);
      }
      else
      {
        v3 = -1073741801;
      }
      v8 = RtlLengthSid(v47);
      v9 = RtlLengthSid(v44) + v8;
      v10 = RtlLengthSid(v52) + v9;
      v11 = RtlLengthSid(v51) + v10;
      v12 = RtlLengthSid(Sid) + 68 + v11;
      v13 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v12);
      if ( !v13 )
        v3 = -1073741801;
      v14 = RtlLengthSid(BaseAddress) + 20;
      v15 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v14);
      if ( v15 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v13, v12, 2u);
          RtlAddAccessAllowedAce(v13, 2u, 0x10000000u, v44);
          RtlAddAccessAllowedAce(v13, 2u, 0xA0000000, Sid);
          RtlAddAccessAllowedAce(v13, 2u, 0xA0000000, v51);
          RtlAddAccessAllowedAce(v13, 2u, 0xA0000000, v47);
          RtlAddAccessAllowedAce(v13, 2u, 0xA0000000, v52);
          RtlCreateAcl(v15, v14, 2u);
          LOBYTE(SubAuthority2) = 20;
          RtlAddProcessTrustLabelAce(v15, 2LL, 0LL, BaseAddress, SubAuthority2, 131075);
          RtlSetDaclSecurityDescriptor(SmpKnownDllsDirSecurityDescriptor, 1u, v13, 0);
          RtlSetSaclSecurityDescriptor(SmpKnownDllsDirSecurityDescriptor, 1u, v15, 0);
          v3 = RtlSetDaclSecurityDescriptor(SmpKnownDllsSymLinkSecurityDescriptor, 1u, v13, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
      v16 = RtlLengthSid(v47);
      v17 = RtlLengthSid(v44) + v16;
      v18 = RtlLengthSid(v52) + v17;
      v19 = RtlLengthSid(v51) + v18;
      v20 = RtlLengthSid(Sid) + 68 + v19;
      v21 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v20);
      if ( !v21 )
        v3 = -1073741801;
      v22 = RtlLengthSid(BaseAddress);
      v23 = v22 + RtlLengthSid(v49) + 32;
      v24 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v23);
      if ( v24 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v21, v20, 2u);
          RtlAddAccessAllowedAce(v21, 2u, 0xE0000000, Sid);
          RtlAddAccessAllowedAce(v21, 2u, 0xE0000000, v51);
          RtlAddAccessAllowedAce(v21, 2u, 0xE0000000, v52);
          RtlAddAccessAllowedAce(v21, 2u, 0xE0000000, v47);
          RtlAddAccessAllowedAce(v21, 2u, 0x10000000u, v44);
          RtlCreateAcl(v24, v23, 2u);
          LODWORD(SubAuthority3) = 1;
          RtlAddMandatoryAce(v24, 2u, 0, (ULONG)v49, 0x11u, SubAuthority3);
          v25 = 131087;
          if ( !SmpHostSmss )
            v25 = 196623;
          LOBYTE(SubAuthority2a) = 20;
          RtlAddProcessTrustLabelAce(v24, 2LL, 0LL, BaseAddress, SubAuthority2a, v25);
          RtlSetDaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, v21, 0);
          v3 = RtlSetSaclSecurityDescriptor(SmpKnownDllSecurityDescriptor, 1u, v24, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
    if ( (SmpProtectionMode & 1) != 0 )
    {
      v26 = RtlLengthSid(v47);
      v27 = RtlLengthSid(v44) + v26;
      v28 = 2 * (v27 + RtlLengthSid(Sid)) + 92;
      v29 = RtlLengthSid(v50) + v28;
      v30 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v29);
      v31 = v30;
      if ( v30 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v30, v29, 2u);
          RtlAddAccessAllowedAce(v31, 2u, 0xA0000000, Sid);
          RtlAddAccessAllowedAce(v31, 2u, 0xA0000000, v47);
          RtlAddAccessAllowedAce(v31, 2u, 0x10000000u, v44);
          RtlAddAccessAllowedAce(v31, 2u, 0xA0000000, Sid);
          RtlGetAce(v31, 3u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v31, 2u, 0xA0000000, v47);
          RtlGetAce(v31, 4u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v31, 2u, 0x10000000u, v44);
          RtlGetAce(v31, 5u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v31, 2u, 0x10000000u, v50);
          RtlGetAce(v31, 6u, &Ace);
          v32 = SmpPrimarySecurityDescriptor;
          *((_BYTE *)Ace + 1) = 11;
          v3 = RtlSetDaclSecurityDescriptor(v32, 1u, v31, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
      v33 = RtlLengthSid(v47);
      v34 = RtlLengthSid(v44) + v33;
      v35 = 2 * (v34 + RtlLengthSid(Sid)) + 92;
      v36 = RtlLengthSid(v50) + v35;
      v37 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v36);
      if ( !v37 )
        v3 = -1073741801;
      v38 = RtlLengthSid(v49) + 20;
      v39 = (struct _ACL *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v38);
      if ( v39 )
      {
        if ( v3 >= 0 )
        {
          RtlCreateAcl(v37, v36, 2u);
          RtlAddAccessAllowedAce(v37, 2u, 0xE0000000, Sid);
          RtlAddAccessAllowedAce(v37, 2u, 0xE0000000, v47);
          RtlAddAccessAllowedAce(v37, 2u, 0x10000000u, v44);
          RtlAddAccessAllowedAce(v37, 2u, 0xE0000000, Sid);
          RtlGetAce(v37, 3u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v37, 2u, 0xE0000000, v47);
          RtlGetAce(v37, 4u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v37, 2u, 0x10000000u, v44);
          RtlGetAce(v37, 5u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlAddAccessAllowedAce(v37, 2u, 0x10000000u, v50);
          RtlGetAce(v37, 6u, &Ace);
          *((_BYTE *)Ace + 1) = 11;
          RtlCreateAcl(v39, v38, 2u);
          LODWORD(SubAuthority3) = 1;
          RtlAddMandatoryAce(v39, 2u, 0, (ULONG)v49, 0x11u, SubAuthority3);
          RtlSetDaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, v37, 0);
          v3 = RtlSetSaclSecurityDescriptor(SmpLiberalSecurityDescriptor, 1u, v39, 0);
        }
      }
      else
      {
        v3 = -1073741801;
      }
    }
    goto LABEL_42;
  }
  BaseAddress = 0LL;
LABEL_44:
  if ( v49 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v49);
  if ( v50 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v50);
  if ( v44 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v44);
  if ( v51 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v51);
  if ( v52 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v52);
  if ( Sid )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Sid);
  if ( v53 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v53);
  if ( v47 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v47);
  return (unsigned int)v3;
}
