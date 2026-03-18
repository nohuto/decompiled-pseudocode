/*
 * XREFs of SepAppendAceToTokenObjectAcl @ 0x140668DA0
 * Callers:
 *     SeSubProcessToken @ 0x140613E54 (SeSubProcessToken.c)
 *     NtDuplicateToken @ 0x14062BB00 (NtDuplicateToken.c)
 *     NtFilterToken @ 0x1406322B0 (NtFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1406BAFC0 (NtCreateLowBoxToken.c)
 *     SeCopyClientToken @ 0x1406E2A38 (SeCopyClientToken.c)
 *     SepAppendAdminAceToTokenAcl @ 0x140710958 (SepAppendAdminAceToTokenAcl.c)
 *     SeFilterToken @ 0x140781950 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140919230 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     RtlFindAceBySid @ 0x14027DA50 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x14027DB50 (RtlGetAce.c)
 *     RtlLengthSid @ 0x14027DBB0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ObDereferenceSecurityDescriptor @ 0x140669000 (ObDereferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x140669160 (ObpGetObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x140669400 (RtlQueryInformationAcl.c)
 *     ObSetSecurityObjectByPointer @ 0x14066A8A0 (ObSetSecurityObjectByPointer.c)
 *     RtlSetDaclSecurityDescriptor @ 0x14066A940 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAce @ 0x14066A9B0 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x14066AAE0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x14067E5A0 (RtlpAddKnownAce.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAppendAceToTokenObjectAcl(__int64 a1, int a2, _WORD *a3)
{
  __int64 result; // rax
  PVOID v6; // rsi
  NTSTATUS Acl; // ebp
  __int16 v8; // ax
  __int64 v9; // rax
  ACL *v10; // rdi
  ULONG v11; // eax
  int v12; // r13d
  ULONG v13; // ebp
  ACL *PoolWithTag; // rax
  ACL *v15; // r14
  ULONG v16; // ebx
  __int64 v17; // r9
  _BYTE v18[4]; // [rsp+30h] [rbp-98h] BYREF
  ULONG AclRevision; // [rsp+34h] [rbp-94h] BYREF
  int v20; // [rsp+38h] [rbp-90h]
  PVOID P; // [rsp+40h] [rbp-88h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-80h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v24; // [rsp+70h] [rbp-58h]
  __int64 v25; // [rsp+78h] [rbp-50h] BYREF
  int v26; // [rsp+80h] [rbp-48h]

  v20 = a2;
  v25 = 0LL;
  v26 = 0;
  P = 0LL;
  v18[0] = 0;
  Ace = 0LL;
  AclRevision = 0;
  v24 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = ObpGetObjectSecurity(a1, &P, v18, 0LL);
  v6 = P;
  Acl = result;
  if ( (int)result >= 0 )
  {
    if ( !P )
      return result;
    v8 = *((_WORD *)P + 1);
    if ( (v8 & 4) != 0 )
    {
      if ( v8 >= 0 )
      {
        v10 = (ACL *)*((_QWORD *)P + 4);
        goto LABEL_7;
      }
      v9 = *((unsigned int *)P + 4);
      if ( (_DWORD)v9 )
      {
        v10 = (ACL *)((char *)P + v9);
LABEL_7:
        if ( v10 )
        {
          if ( !RtlFindAceBySid((__int64)v10, a3, 0LL) )
          {
            Acl = RtlQueryInformationAcl(v10, &v25, 12LL, 2LL);
            if ( Acl >= 0 )
            {
              Acl = RtlQueryInformationAcl(v10, &AclRevision, 4LL, 1LL);
              if ( Acl >= 0 )
              {
                v11 = RtlLengthSid(a3);
                v12 = HIDWORD(v25);
                v13 = (v11 + HIDWORD(v25) + 11) & 0xFFFFFFFC;
                PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x63416553u);
                v15 = PoolWithTag;
                if ( PoolWithTag )
                {
                  v16 = AclRevision;
                  Acl = RtlCreateAcl(PoolWithTag, v13, AclRevision);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlGetAce(v10, 0, &Ace);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlAddAce(v15, v16, 0, Ace, v12 - 8);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlpAddKnownAce((int)v15, v16, 0, v20, a3, 0);
                        if ( Acl >= 0 )
                        {
                          LOBYTE(SecurityDescriptor[0]) = 1;
                          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0);
                          if ( Acl >= 0 )
                            Acl = ObSetSecurityObjectByPointer(a1, 4LL, SecurityDescriptor, v17);
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v15, 0);
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v6 )
  {
    if ( v18[0] )
      ExFreePoolWithTag(v6, 0);
    else
      ObDereferenceSecurityDescriptor(v6, 1LL);
  }
  return (unsigned int)Acl;
}
