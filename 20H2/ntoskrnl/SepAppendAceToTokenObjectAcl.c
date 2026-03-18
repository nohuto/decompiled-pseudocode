/*
 * XREFs of SepAppendAceToTokenObjectAcl @ 0x1405F56A0
 * Callers:
 *     SepFinalizeTokenAcls @ 0x1405CDDB0 (SepFinalizeTokenAcls.c)
 *     NtDuplicateToken @ 0x1405E7D20 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x14068F0A8 (SeSubProcessToken.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1406A83BC (SepAppendAdminAceToTokenAcl.c)
 *     NtFilterToken @ 0x1406A83E0 (NtFilterToken.c)
 *     SeCopyClientToken @ 0x1406BA08C (SeCopyClientToken.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 *     SeFilterToken @ 0x1407C2500 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091EE60 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140209CB0 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x140209DB0 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140209E10 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405F5900 (ObDereferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1405F5A60 (ObpGetObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x1405F5D00 (RtlQueryInformationAcl.c)
 *     ObSetSecurityObjectByPointer @ 0x1405F71A0 (ObSetSecurityObjectByPointer.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405F7240 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAce @ 0x1405F72B0 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x1405F73E0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140606130 (RtlpAddKnownAce.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  _BYTE v17[4]; // [rsp+30h] [rbp-98h] BYREF
  ULONG AclRevision; // [rsp+34h] [rbp-94h] BYREF
  int v19; // [rsp+38h] [rbp-90h]
  PVOID P; // [rsp+40h] [rbp-88h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-80h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v23; // [rsp+70h] [rbp-58h]
  __int64 v24; // [rsp+78h] [rbp-50h] BYREF
  int v25; // [rsp+80h] [rbp-48h]

  v19 = a2;
  v24 = 0LL;
  v25 = 0;
  P = 0LL;
  v17[0] = 0;
  Ace = 0LL;
  AclRevision = 0;
  v23 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = ObpGetObjectSecurity(a1, &P, v17, 0LL);
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
            Acl = RtlQueryInformationAcl(v10, &v24, 12LL, 2LL);
            if ( Acl >= 0 )
            {
              Acl = RtlQueryInformationAcl(v10, &AclRevision, 4LL, 1LL);
              if ( Acl >= 0 )
              {
                v11 = RtlLengthSid(a3);
                v12 = HIDWORD(v24);
                v13 = (v11 + HIDWORD(v24) + 11) & 0xFFFFFFFC;
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
                        Acl = RtlpAddKnownAce((int)v15, v16, 0, v19, a3, 0);
                        if ( Acl >= 0 )
                        {
                          LOBYTE(SecurityDescriptor[0]) = 1;
                          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0);
                          if ( Acl >= 0 )
                            Acl = ObSetSecurityObjectByPointer(a1, 4LL, SecurityDescriptor);
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
    if ( v17[0] )
      ExFreePoolWithTag(v6, 0);
    else
      ObDereferenceSecurityDescriptor(v6, 1LL);
  }
  return (unsigned int)Acl;
}
