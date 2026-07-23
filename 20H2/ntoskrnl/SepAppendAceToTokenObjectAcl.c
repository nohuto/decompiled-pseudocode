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

__int64 __fastcall SepAppendAceToTokenObjectAcl(__int64 a1, ULONG a2, _WORD *a3)
{
  __int64 result; // rax
  PVOID v6; // rsi
  NTSTATUS InformationAcl; // ebp
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
  ULONG AclRevision[3]; // [rsp+34h] [rbp-94h] BYREF
  PVOID P; // [rsp+40h] [rbp-88h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-80h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v22; // [rsp+70h] [rbp-58h]
  __int64 AclInformation; // [rsp+78h] [rbp-50h] BYREF
  int v24; // [rsp+80h] [rbp-48h]

  AclRevision[1] = a2;
  AclInformation = 0LL;
  v24 = 0;
  P = 0LL;
  v17[0] = 0;
  Ace = 0LL;
  AclRevision[0] = 0;
  v22 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = ObpGetObjectSecurity(a1, &P, v17, 0LL);
  v6 = P;
  InformationAcl = result;
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
            InformationAcl = RtlQueryInformationAcl(v10, &AclInformation, 0xCu, AclSizeInformation);
            if ( InformationAcl >= 0 )
            {
              InformationAcl = RtlQueryInformationAcl(v10, AclRevision, 4u, AclRevisionInformation);
              if ( InformationAcl >= 0 )
              {
                v11 = RtlLengthSid(a3);
                v12 = HIDWORD(AclInformation);
                v13 = (v11 + HIDWORD(AclInformation) + 11) & 0xFFFFFFFC;
                PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x63416553u);
                v15 = PoolWithTag;
                if ( PoolWithTag )
                {
                  v16 = AclRevision[0];
                  InformationAcl = RtlCreateAcl(PoolWithTag, v13, AclRevision[0]);
                  if ( InformationAcl >= 0 )
                  {
                    InformationAcl = RtlGetAce(v10, 0, &Ace);
                    if ( InformationAcl >= 0 )
                    {
                      InformationAcl = RtlAddAce(v15, v16, 0, Ace, v12 - 8);
                      if ( InformationAcl >= 0 )
                      {
                        InformationAcl = RtlpAddKnownAce(v15, a3, 0);
                        if ( InformationAcl >= 0 )
                        {
                          LOBYTE(SecurityDescriptor[0]) = 1;
                          InformationAcl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0);
                          if ( InformationAcl >= 0 )
                            InformationAcl = ObSetSecurityObjectByPointer(a1, 4LL, SecurityDescriptor);
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v15, 0);
                }
                else
                {
                  InformationAcl = -1073741670;
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
  return (unsigned int)InformationAcl;
}
